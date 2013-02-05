/* -*- c -*- */
/* $Id$ */

/* Copyright (C) 2005-2013 Alexander Chernov <cher@ejudge.ru> */

/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#include "xml_utils.h"
#include "errlog.h"

#include <string.h>

int
xml_parse_ip_mask(
        FILE *log_f,
        const unsigned char *path,
        int line,
        int column,
        const unsigned char *s,
        ej_ip4_t *p_addr,
        ej_ip4_t *p_mask)
{
  int n = 0;
  unsigned int b1 = 0, b2 = 0, b3 = 0, b4 = 0, b5 = 0;
  const char msg[] = "invalid IP-address";

  if (!s) goto failed;
  if (!strcmp(s, "0")) {
    *p_addr = 0;
    *p_mask = 0;
  } else if (sscanf(s, "%u.%u.%u.%u/%u %n", &b1, &b2, &b3, &b4, &b5, &n) == 5
      && !s[n] && b1 <= 255 && b2 <= 255 && b3 <= 255 && b4 <= 255 && b5 <= 32) {
    *p_addr = b1 << 24 | b2 << 16 | b3 << 8 | b4;
    *p_mask = ((unsigned int) -1) << (32 - b5);
  } else if (sscanf(s, "%u.%u.%u.%u %n", &b1, &b2, &b3, &b4, &n) == 4
             && !s[n] && b1 <= 255 && b2 <= 255 && b3 <= 255 && b4 <= 255) {
    *p_addr = b1 << 24 | b2 << 16 | b3 << 8 | b4;
    *p_mask = 0xFFFFFFFF;
  } else if (sscanf(s, "%u.%u.%u. %n", &b1, &b2, &b3, &n) == 3
             && !s[n] && b1 <= 255 && b2 <= 255 && b3 <= 255) {
    *p_addr = b1 << 24 | b2 << 16 | b3 << 8;
    *p_mask = 0xFFFFFF00;
  } else if (sscanf(s, "%u.%u. %n", &b1, &b2, &n) == 2
             && !s[n] && b1 <= 255 && b2 <= 255) {
    *p_addr = b1 << 24 | b2 << 16;
    *p_mask = 0xFFFF0000;
  } else if (sscanf(s, "%u. %n", &b1, &n) == 1 && !s[n] && b1 <= 255) {
    *p_addr = b1 << 24;
    *p_mask = 0xFF000000;
  } else {
    goto failed;
  }

  return 0;

 failed:
  if (line >= 0) {
    if (log_f) {
      if (path) {
        fprintf(log_f, "%s:%d:%d: %s\n", path, line, column, msg);
      } else {
        fprintf(log_f, "%d:%d: %s\n", line, column, msg);
      }
    } else {
      if (path) {
        err("%s:%d:%d: %s", path, line, column, msg);
      } else {
        err("%d:%d: %s", line, column, msg);
      }
    }
  }
  return -1;
}

/*
 * Local variables:
 *  compile-command: "make -C .."
 * End:
 */
