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

#include "memreg.h"

#include <stdlib.h>

octa mmix_spec_reg[0x20];
octa mmix_gen_reg[0x100];
void *mmix_memory[0x100];

int mem_index(uocta addr, int depth)
{
  if(depth < 0 || depth > 7)
    return -1;
  return (addr >> ((7 - depth) * 8)) & 0xff;
}

byte *mem_find(uocta addr, void *ptr, int depth)
{
  void **node;
  int i;

  /* Sanity check: */
  if(ptr == NULL || depth < 0 || depth > 6)
    return NULL;

  /* Get the node list and the iterator for the next level: */
  node = (void **)ptr;
  i = mem_index(addr, depth);

  /* Create the next level if it doesn't already exist: */
  if(node[i] == NULL)
    {
      int j;

      /* Bottom of tree: */
      if(depth == 6)
	{
	  node[i] = malloc(sizeof(byte[0x100]));
	  if(node[i] == NULL)
	    return NULL;
	  for(j = 0; j < 0x100; j++)
	    ((byte *)(node[i]))[j] = 0;
	}

      /* Not at bottom of tree: */
      else
	{
	  node[i] = malloc(sizeof(void *[0x100]));
	  if(node[i] == NULL)
	    return NULL;
	  for(j = 0; j < 0x100; j++)
	    ((void **)(node[i]))[j] == NULL;
	}

    }

  /* Bottom of tree: */
  if(depth == 6)
    return &((byte *)(node[i]))[addr & 0xff];

  /* Next iteration: */
  mem_find(addr, node[i], depth + 1);

}

void memreg_init()
{
  int i;

  /* Initialize special purpose registers: */
  for(i = 0; i < 0x20; i++)
    mmix_spec_reg[i] = 0;

  /* Initialize general purpose registers and memory: */
  for(i = 0; i < 0x100; i++)
    {
      mmix_gen_reg[i] = 0;
      mmix_memory[i] = NULL;
    }

}

/* jl */
