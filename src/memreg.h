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
enum { mmix_rA, mmix_rB, mmix_rC, mmix_rD, mmix_rE, mmix_rF, mmix_rG,
       mmix_rH, mmix_rI, mmix_rJ, mmix_rK, mmix_rL, mmix_rM, mmix_rN,
       mmix_rO, mmix_rP, mmix_rQ, mmix_rR, mmix_rS, mmix_rT, mmix_rU,
       mmix_rV, mmix_rW, mmix_rX, mmix_rY, mmix_rZ, mmix_rBB,
       mmix_rTT, mmix_rWW, mmix_rXX, mmix_rYY, mmix_rZZ };

/**
   @brief Special purpose registers.
 */
extern octa mmix_spec_reg[0x20];

/**
   @brief General purpose registers.
 */
extern octa mmix_gen_reg[0x100];

/**
   @brief Memory tree.
 */
void *mmix_memory[0x100];

#ifdef __cplusplus
extern "C"
{
#endif

  /**
     @brief Locates a memory address.

     @return A pointer to the memory location on success or NULL on
     failure.
   */
  byte *mem_find(uocta addr);

  /**
     @brief Recursive function to find a memory location (and create
     it if it doesn't exist).

     @param addr The memory address.

     @param ptr The current array on the memory tree for the current
     iteration (should be mmix_memory on the first iteration).

     @param depth The depth in the memory tree for the current
     iteration (should be 0 for the first iteration).

     @note This function is generally called by mem_find().

     @return A pointer to the memory location on success or NULL on
     failure.
   */
  byte *mem_find_iter(uocta addr, void *ptr, int depth);

  /**
     @brief Gets the index for the memory pointer at a specified
     depth.

     @param addr The memory address.

     @param depth The depth.

     @return The index on success or -1 on failure.
   */
  int mem_index(uocta addr, int depth);

  /**
     @brief Initializes memory & registers.
   */
  void memreg_init();

#ifdef __cplusplus
}
#endif

#endif	/* MEMREG_H */

/* jl */
