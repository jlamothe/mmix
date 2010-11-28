/**
   @file mmixtypes.h
   @author Jonathan Lamothe
 */

/*
MMIX Emulator

Copyright (C) 2010 Jonathan Lamothe <jonathan@jlamothe.net>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or (at
your option) any later version.

This program is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see: http://www.gnu.org/licenses/
*/

#ifndef MMIXTYPES_H
#define MMIXTYPES_H

#include <stdint.h>

typedef int8_t byte;		/**< @brief Signed byte. */
typedef uint8_t ubyte;		/**< @brief Unsigned byte. */
typedef int16_t wyde;		/**< @brief Signed wyde. */
typedef uint16_t uwyde;		/**< @brief Unsigned wyde. */
typedef int32_t tetra;		/**< @brief Signed tetra. */
typedef uint32_t utetra;	/**< @brief Unsigned tetra. */
typedef int64_t octa;		/**< @brief Signed octa. */
typedef uint64_t uocta;		/**< @brief Unsigned octa. */

#endif

/* jl */
