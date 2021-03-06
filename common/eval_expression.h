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

#ifndef _EVAL_EXPRESSION_H
#define _EVAL_EXPRESSION_H

#include "assembler.h"

int eval_expression(struct _asm_context *asm_context, int *num);

enum
{
  PREC_NOT,
  PREC_MUL,
  PREC_ADD,
  PREC_SHIFT,
  PREC_AND,
  PREC_XOR,
  PREC_OR,
  PREC_UNSET
};

enum
{
  OPER_UNSET,
  OPER_NOT,
  OPER_MUL,
  OPER_DIV,
  OPER_MOD,
  OPER_PLUS,
  OPER_MINUS,
  OPER_LEFT_SHIFT,
  OPER_RIGHT_SHIFT,
  OPER_AND,
  OPER_XOR,
  OPER_OR
};

#endif

