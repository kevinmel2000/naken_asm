/**
 *  naken_asm assembler.
 *  Author: Michael Kohn
 *   Email: mike@mikekohn.net
 *     Web: http://www.mikekohn.net/
 * License: GPL
 *
 * Copyright 2010-2014 by Michael Kohn
 *
 */

#ifndef _DISASM_MIPS_H
#define _DISASM_MIPS_H

#include "assembler.h"
#include "table_mips.h"

extern struct _mips_instr mips_r_table[];
extern struct _mips_instr mips_i_table[];
extern struct _mips_cop_instr mips_cop_table[];

int get_cycle_count_mips(unsigned short int opcode);
int disasm_mips(struct _memory *memory, int address, char *instruction, int *cycles_min, int *cycles_max);
void list_output_mips(struct _asm_context *asm_context, int address);
void disasm_range_mips(struct _memory *memory, int start, int end);

#endif

