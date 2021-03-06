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

#ifndef _SERIAL_H
#define _SERIAL_H

#ifndef WIN32
#include <termios.h>
#endif

struct _serial
{
  int fd;
#ifndef WIN32
  struct termios oldtio;
  struct termios newtio;
#endif
};

int serial_open(struct _serial *serial, char *device);
int serial_send(struct _serial *serial, uint8_t *buffer, int len, int do_flow);
int serial_readln(struct _serial *serial, char *buffer, int len);
void serial_close(struct _serial *serial);

#endif

