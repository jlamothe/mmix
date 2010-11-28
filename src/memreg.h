/**
   @file memreg.h
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

#ifndef MEMREG_H
#define MEMREG_H

#include "mmixtypes.h"

/**
   @brief Special purpose register IDs.
 */
enum { mmix_rA = 0, mmix_rB, mmix_rC, mmix_rD, mmix_rE, mmix_rF,
       mmix_rG, mmix_rH, mmix_rI, mmix_rJ, mmix_rK, mmix_rL, mmix_rM,
       mmix_rN, mmix_rO, mmix_rP, mmix_rQ, mmix_rR, mmix_rS, mmix_rT,
       mmix_rU, mmix_rV, mmix_rW, mmix_rX, mmix_rY, mmix_rZ, mmix_rBB,
       mmix_rTT, mmix_rWW, mmix_rXX, mmix_rYY, mmix_rZZ };

/**
   @brief Special purpose registers.
 */
extern octa mmix_spec_reg[0x20];

/**
   @brief General purpose reigsters.
 */
extern octa mmix_gen_reg[0x100];

#endif

/* jl */
