/* hbffmpeg.h

   Copyright (c) 2003-2012 HandBrake Team
   This file is part of the HandBrake source code
   Homepage: <http://handbrake.fr/>.
   It may be used under the terms of the GNU General Public License v2.
   For full terms see the file COPYING file or visit http://www.gnu.org/licenses/gpl-2.0.html
 */

#include "libavcodec/avcodec.h"
#include "libavformat/avformat.h"
#include "libavutil/audioconvert.h"
#include "libavutil/imgutils.h"
#include "libavutil/mathematics.h"
#include "libavutil/opt.h"
#include "libswscale/swscale.h"
#include "libavresample/avresample.h"

#define HB_FFMPEG_THREADS_AUTO (-1) // let hb_avcodec_open() decide thread_count

void hb_avcodec_init(void);
int  hb_avcodec_open(AVCodecContext *, AVCodec *, AVDictionary **, int);
int  hb_avcodec_close(AVCodecContext *);

uint64_t hb_ff_layout_xlat(uint64_t ff_channel_layout, int nchannels);
uint64_t hb_ff_mixdown_xlat(int hb_mixdown, int *downmix_mode);
void     hb_ff_set_sample_fmt(AVCodecContext *, AVCodec *, enum AVSampleFormat);

struct SwsContext*
hb_sws_get_context(int srcW, int srcH, enum PixelFormat srcFormat,
                   int dstW, int dstH, enum PixelFormat dstFormat,
                   int flags);
int hb_avpicture_fill(AVPicture *pic, hb_buffer_t *buf);
