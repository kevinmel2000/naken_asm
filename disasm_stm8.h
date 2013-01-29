/**
 *  naken_asm assembler.
 *  Author: Michael Kohn
 *   Email: mike@mikekohn.net
 *     Web: http://www.mikekohn.net/
 * License: GPL
 *
 * Copyright 2010-2013 by Michael Kohn
 *
 */

#ifndef _DISASM_STM8_H
#define _DISASM_STM8_H

#include "assembler.h"

#define ST7_NO 0
#define ST7_YES 1

struct _stm8_single
{
  char *instr;
  unsigned char opcode;
  char cycles;
  char st7_support;
};

struct _stm8_x_y
{
  char *instr;
  unsigned char opcode;
  char cycles;
  char st7_support;
};

extern struct _stm8_single stm8_single[];
extern struct _stm8_x_y stm8_x_y[];
extern char *stm8_type1[];
extern char *stm8_type2[];
extern char *stm8_bit_oper[];

int get_cycle_count_stm8(unsigned short int opcode);
int disasm_stm8(struct _memory *memory, int address, char *instruction, int *cycles_min, int *cycles_max);
void list_output_stm8(struct _asm_context *asm_context, int address);
void disasm_range_stm8(struct _memory *memory, int start, int end);

#endif
