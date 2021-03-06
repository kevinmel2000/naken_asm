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

#ifndef _ASM_THUMB_H
#define _ASM_THUMB_H

#include "assembler.h"

int parse_instruction_thumb(struct _asm_context *asm_context, char *instr);

#endif


