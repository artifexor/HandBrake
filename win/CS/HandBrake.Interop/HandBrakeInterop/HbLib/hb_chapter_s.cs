﻿// --------------------------------------------------------------------------------------------------------------------
// <copyright file="hb_chapter_s.cs" company="HandBrake Project (http://handbrake.fr)">
//   This file is part of the HandBrake source code - It may be used under the terms of the GNU General Public License.
// </copyright>
// <summary>
//   Defines the hb_chapter_s type.
// </summary>
// <auto-generated> Disable Stylecop Warnings for this file  </auto-generated>
// --------------------------------------------------------------------------------------------------------------------

namespace HandBrake.Interop.HbLib
{
	using System.Runtime.InteropServices;

	[StructLayout(LayoutKind.Sequential, CharSet = CharSet.Ansi)]
	public struct hb_chapter_s
	{
		/// int
		public int index;

		/// int
		public int pgcn;

		/// int
		public int pgn;

		/// int
		public int cell_start;

		/// int
		public int cell_end;

		/// int
		public ulong block_start;

		/// int
		public ulong block_end;

		/// int
		public ulong block_count;

		/// int
		public int hours;

		/// int
		public int minutes;

		/// int
		public int seconds;

		/// uint64_t->unsigned int
		public ulong duration;

		/// char *
		[MarshalAs(UnmanagedType.LPStr)]
		public string title;
	}
}
