/* 
 * File:   hackaday.h
 * Author: user
 *
 * Created on 2014. m�rcius 10., 14:21
 */

#ifndef HACKADAY_H
#define	HACKADAY_H

#ifdef	__cplusplus
extern "C" {
#endif

  __psv__ unsigned int SCREEN_BUFFER_02[] __attribute__((space(psv))) = {
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0xff80, 0xe07f, 0x001f, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc0, 0xffff,
   0xc01f, 0x03ff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0xff80, 0xffff, 0x03ff, 0x0000, 0x0000, 0xfff8, 0xffff, 0xfe1f, 0x7fff,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xfff8, 0xffff,
   0xffff, 0x0000, 0x0000, 0xfffc, 0xffff, 0xffff, 0xffff, 0x0003, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xfff8, 0xffff, 0xffff, 0x0007,
   0x0000, 0xfffc, 0xffff, 0xffff, 0xffff, 0x0003, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0xfff8, 0xffff, 0xffff, 0x0007, 0x0000, 0xffe0,
   0xffff, 0xffff, 0xffff, 0x0003, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0xfff8, 0xffff, 0xffff, 0x0007, 0x0000, 0xff80, 0xf00f, 0xffff,
   0x7fff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0xfe00, 0xffff, 0x0007, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xfffe,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x07fc, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xfe00, 0x0003, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xe000, 0xffff, 0x0001,
   0x0000, 0x0000, 0x0000, 0x0000, 0xffc0, 0x000f, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0xfc00, 0xffff, 0x0007, 0x0000, 0x0000,
   0x0000, 0x0000, 0xffe0, 0x001f, 0x0000, 0x0000, 0xfe00, 0x0003, 0x0000,
   0x0000, 0x0000, 0xff00, 0xffff, 0x000f, 0x0000, 0x0000, 0x0000, 0x0000,
   0xfff0, 0x007f, 0x0000, 0x0000, 0xfff8, 0x000f, 0x0000, 0x0000, 0x0000,
   0xfff0, 0xffff, 0x003f, 0x0000, 0x0000, 0x0000, 0x0000, 0xfff8, 0x00ff,
   0x0000, 0x8000, 0xffff, 0x003f, 0x0000, 0x0000, 0x0000, 0xfffc, 0xf801,
   0x003f, 0x0000, 0xf800, 0x1fff, 0x0000, 0xfffc, 0x00ff, 0x0000, 0xf000,
   0xffff, 0x00ff, 0x0000, 0x0000, 0x0000, 0xffff, 0xf000, 0x01ff, 0x0000,
   0xffc0, 0xffff, 0x0003, 0xfffe, 0x01ff, 0x0000, 0xff00, 0xffff, 0x007f,
   0x0000, 0x0000, 0x8000, 0x7fff, 0xf000, 0x0fff, 0x0000, 0xfff8, 0xffff,
   0xc01f, 0xffff, 0x03ff, 0x0000, 0xffc0, 0x00ff, 0x0000, 0x0000, 0x0000,
   0xc000, 0x1fff, 0xf000, 0x1fff, 0x0000, 0xfffe, 0xffff, 0xffff, 0xffff,
   0x07ff, 0x0000, 0xfff0, 0x001f, 0x0000, 0x0000, 0x0000, 0xc000, 0x03ff,
   0xe000, 0x7fff, 0x0000, 0xffff, 0xffff, 0xffff, 0xffff, 0x0fff, 0x0000,
   0xfff8, 0x000f, 0x0000, 0x0000, 0x0000, 0xe000, 0x01ff, 0xe000, 0x7fff,
   0x8000, 0xffff, 0xffff, 0xffff, 0xffff, 0x1fff, 0x0000, 0xfffc, 0x0007,
   0x7ffe, 0x0000, 0x0000, 0x0000, 0x0000, 0xe000, 0xffff, 0xc000, 0xffff,
   0xffff, 0xffff, 0xffff, 0x3fff, 0x0000, 0xfffe, 0x0001, 0x7ffe, 0x0000,
   0x0000, 0xfe00, 0x00ff, 0xc000, 0xffff, 0xe000, 0xffff, 0xffff, 0xffff,
   0xffff, 0x3fff, 0x0000, 0xffff, 0x0001, 0xfffc, 0x0000, 0x0000, 0xff00,
   0x00ff, 0x8000, 0xffff, 0xe000, 0xffff, 0xffff, 0xffff, 0xffff, 0x3fff,
   0x8000, 0xffff, 0x0000, 0xfffc, 0x0000, 0x0000, 0xff80, 0x00ff, 0x0000,
   0xfffe, 0xe000, 0xffff, 0xffff, 0xffff, 0xffff, 0x0fff, 0x8000, 0x7fff,
   0x0000, 0x0000, 0x0000, 0x0000, 0xffe0, 0x007f, 0x0000, 0xfffe, 0xf000,
   0xffff, 0xffff, 0xffff, 0xffff, 0x0fff, 0xc000, 0x7fff, 0x0000, 0x0000,
   0x0000, 0x0000, 0xfff0, 0x003f, 0x0000, 0xffff, 0xf001, 0xffff, 0xffff,
   0x3fff, 0xffff, 0x0fff, 0xc000, 0x7fff, 0x0000, 0xfff8, 0x0001, 0x0000,
   0xfff0, 0x001f, 0x0000, 0xffff, 0xf001, 0xffff, 0xffff, 0x3fff, 0xfffe,
   0x0fff, 0xc000, 0x3fff, 0x0000, 0xfff8, 0x0001, 0x0000, 0xfff8, 0x000f,
   0x0000, 0xffff, 0xf001, 0xffff, 0xffff, 0x3fff, 0xfffe, 0x0fff, 0xc000,
   0x3fff, 0x0000, 0xfff0, 0x0003, 0x0000, 0xfff8, 0x0007, 0x0000, 0xffff,
   0xf001, 0xffff, 0xffff, 0x7fff, 0xfffe, 0x07ff, 0xc000, 0x3fff, 0x0000,
   0xfff0, 0x0003, 0x0000, 0xfff8, 0x0003, 0x0000, 0xfff8, 0xe001, 0xffff,
   0xffff, 0xffff, 0xffff, 0x07ff, 0xc000, 0x3fff, 0x0000, 0x0000, 0x0000,
   0x0000, 0xfff8, 0x0003, 0x0000, 0xfff0, 0xe001, 0xffff, 0xffff, 0xffff,
   0xffff, 0x07ff, 0xc000, 0x7fff, 0x0000, 0x0000, 0x0000, 0x0000, 0xfff8,
   0x0003, 0x0000, 0xffe0, 0xe001, 0x1fff, 0xffe0, 0xffff, 0xffff, 0x07ff,
   0x8000, 0x7fff, 0x0000, 0x0000, 0x0000, 0x0000, 0xfff0, 0x0001, 0x0000,
   0xffe0, 0xc001, 0x07ff, 0xff00, 0xffff, 0xffff, 0x07ff, 0x8000, 0x7fff,
   0x0000, 0x0000, 0x0000, 0x0000, 0xfff0, 0x0001, 0x0000, 0xffc0, 0x0001,
   0x03ff, 0xfc00, 0xffff, 0xdfff, 0x07ff, 0x8000, 0x7fff, 0x0000, 0x0000,
   0x0000, 0x0000, 0xfff0, 0x0001, 0x0000, 0xffc0, 0x0001, 0x00fc, 0xf800,
   0xffff, 0x0fff, 0x07fe, 0x0000, 0x7fff, 0x0000, 0x0000, 0x0000, 0x0000,
   0xfff0, 0x0001, 0x0000, 0xff80, 0x0001, 0x0000, 0xe000, 0xffff, 0x0fff,
   0x01f8, 0x0006, 0x7fff, 0x0000, 0x0000, 0x0000, 0x0000, 0xfff0, 0x0001,
   0x0000, 0xff80, 0x0001, 0x0000, 0x0000, 0xfffb, 0x0fff, 0x01f8, 0x0007,
   0x7fff, 0x0000, 0x0000, 0x0000, 0x0000, 0xfff0, 0x0001, 0x0000, 0xff80,
   0x0001, 0x0000, 0x0000, 0x0f00, 0x1ffe, 0x81f8, 0x000f, 0x7ffe, 0x0000,
   0x0000, 0x0000, 0x0000, 0xfff0, 0x0001, 0x0000, 0xff80, 0x0001, 0x0000,
   0x0000, 0x0000, 0x3ffc, 0xfffe, 0x001f, 0x7ffe, 0x0000, 0x0000, 0x0000,
   0x0000, 0xfff0, 0x0001, 0x0000, 0xffc0, 0x0001, 0x0000, 0x0000, 0x0000,
   0xfffc, 0xffff, 0x003f, 0xfffe, 0x0000, 0x0000, 0x0000, 0x0000, 0xfff0,
   0x0001, 0x0000, 0xffc0, 0x0001, 0x0000, 0x0000, 0x0000, 0xfffc, 0xffff,
   0x007f, 0xfffe, 0x0000, 0x0000, 0x0000, 0x0000, 0xfff0, 0x0001, 0x0000,
   0xffc0, 0x0001, 0x0000, 0x0000, 0x0000, 0xfff8, 0xffff, 0x007f, 0xfffe,
   0x0001, 0x0000, 0x0000, 0x0000, 0xfff0, 0x0001, 0x0000, 0xffff, 0x0001,
   0x0000, 0x0000, 0x0000, 0xfff8, 0xffff, 0x00ff, 0xfffe, 0x0001, 0xffe0,
   0x000f, 0x0000, 0xfff0, 0x0001, 0x0000, 0xffff, 0x0001, 0x0000, 0x0000,
   0x0000, 0xfff0, 0xffff, 0x00ff, 0xfffc, 0x0003, 0xfff0, 0x000f, 0x0000,
   0xffe0, 0x0001, 0x0000, 0xffc0, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc0,
   0xffff, 0x00ff, 0xfff8, 0x000f, 0xfff8, 0x0007, 0x0000, 0xffe0, 0x0003,
   0x0000, 0xffc0, 0x0000, 0x0000, 0x0000, 0x0000, 0xff00, 0xffff, 0x00ff,
   0xfff8, 0x003f, 0xfff8, 0x0001, 0x0000, 0xffc0, 0x0003, 0x0000, 0xffe0,
   0x003f, 0x0000, 0x0000, 0x0000, 0xf800, 0xffff, 0x00ff, 0xfff0, 0x807f,
   0x7fff, 0x0000, 0x0000, 0xffc0, 0x000f, 0x0000, 0xffe0, 0x003f, 0x0000,
   0x0000, 0x0000, 0x8000, 0xffff, 0x00ff, 0xffe0, 0xffff, 0x1fff, 0x0000,
   0x0000, 0xff80, 0x007f, 0x0000, 0x3ff0, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0xfff8, 0x00ff, 0xff80, 0xffff, 0x03ff, 0x0000, 0x0000, 0xff80,
   0x007f, 0x0000, 0x1ff8, 0x0000, 0x0000, 0xfe00, 0x001f, 0x0000, 0xffe0,
   0x00ff, 0xfe00, 0xffff, 0x007f, 0x0000, 0x0000, 0xff00, 0x007f, 0xf800,
   0x0fff, 0x0000, 0x0000, 0xff80, 0x07ff, 0x0000, 0xffc0, 0x00ff, 0x0000,
   0xffff, 0x000f, 0x0000, 0x0000, 0xff00, 0x00ff, 0xff00, 0x07ff, 0x0000,
   0x0000, 0xfffc, 0xffff, 0x0003, 0xff80, 0x00ff, 0x0000, 0x07f0, 0x0000,
   0x0000, 0x0000, 0xff00, 0x01ff, 0xffc0, 0x7fff, 0x0000, 0x8000, 0xffff,
   0xffff, 0x003f, 0xfe00, 0x00ff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0xfe00, 0xffff, 0xffff, 0x3fff, 0x0000, 0xe000, 0xffff, 0xffff, 0x03ff,
   0xfc00, 0x00ff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xf800, 0xffff,
   0xffff, 0x0fff, 0x0000, 0xe000, 0xffff, 0xfc07, 0x3fff, 0xf800, 0x007f,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xe000, 0xffff, 0xffff, 0x03ff,
   0x0000, 0xf000, 0xffff, 0x0003, 0xffff, 0xf003, 0x007f, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x8000, 0xffff, 0xffff, 0x00ff, 0x0000, 0xf000,
   0xffff, 0x0000, 0xfff0, 0x000f, 0x003f, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0xfffe, 0xffff, 0x0001, 0x0000, 0xf000, 0x0fff, 0x0000,
   0xff00, 0x001f, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0xffc0, 0x0fff, 0x0000, 0x0000, 0xf800, 0x01ff, 0x0000, 0xf800, 0x007f,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0xfc00, 0x003f, 0x0000, 0xe000, 0x03ff, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0xff00, 0x001f, 0x0000, 0x0000, 0x1ffe, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x7ff8, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0xfff0, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffe0, 0x0007,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x3ff8, 0x0000, 0x0000, 0x0000, 0xff00, 0x001f, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x3fff,
   0x0000, 0x0000, 0x0000, 0xfc00, 0x003f, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x8000, 0x3fff, 0x0000, 0x0000,
   0x0000, 0xf800, 0x00ff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0xc000, 0x0fff, 0x0000, 0x0000, 0x0000, 0xf000,
   0x01ff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0xe060, 0x07ff, 0x0000, 0x0000, 0x0000, 0xe000, 0x07ff, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xf1ff,
   0x07ff, 0x0000, 0x0000, 0x0000, 0x8000, 0x0fff, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x8000, 0xfcff, 0x01ff, 0x0000,
   0x0000, 0x0000, 0x0000, 0x1ffe, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x8000, 0xfeff, 0x00ff, 0x0000, 0x0000, 0x0000,
   0x0000, 0x1ff8, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0xff7f, 0x007f, 0x0000, 0x03c0, 0x0000, 0x0000, 0x3ff0,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0xff7f, 0x001f, 0x0000, 0x07e0, 0x0000, 0x0000, 0xffe0, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xfffe, 0x0007,
   0x0000, 0x0ff0, 0x0000, 0x0000, 0x0000, 0x0000, 0xf800, 0xffff, 0x0001,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x007f, 0x0000, 0x0000, 0x1ff8,
   0x0000, 0x0000, 0x0000, 0x0000, 0xf800, 0xffff, 0x0001, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x007e, 0x0000, 0x0000, 0x3ff8, 0x0000, 0x0000,
   0x0000, 0x0000, 0xf800, 0xffff, 0x0001, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0078, 0x0000, 0x0000, 0xfffc, 0x0000, 0x0000, 0x0000, 0x0000,
   0xf800, 0xffff, 0x0001, 0x0000, 0xffe0, 0xffff, 0x0003, 0x0000, 0x0030,
   0x0000, 0x0000, 0xfffc, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0xffe0, 0xffff, 0x0003, 0x0000, 0x0020, 0x0100, 0x0000,
   0xfffe, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0xffe0, 0xffff, 0x0003, 0x0000, 0x0020, 0x0380, 0x0000, 0xfffe, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffe0, 0xffff,
   0x0003, 0x0000, 0x0000, 0x0780, 0x0000, 0xffff, 0x0000, 0x0000, 0xf000,
   0x07ff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0f80, 0x0000, 0x7fff, 0x0000, 0x0000, 0xf000, 0x1fff, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xc000, 0x07ff, 0x0fc0,
   0x8000, 0x3fff, 0x0000, 0x0000, 0xe000, 0x1fff, 0x8000, 0xffff, 0x000f,
   0x0000, 0x0000, 0x0000, 0x0000, 0xe000, 0x07ff, 0x0fc0, 0xe000, 0x0fff,
   0xff80, 0x0001, 0xe000, 0x1fff, 0x8000, 0xffff, 0x000f, 0x0000, 0x0000,
   0x0000, 0x0000, 0xe000, 0x07ff, 0x07e0, 0xf000, 0x03ff, 0xff00, 0x001f,
   0xc000, 0x1fff, 0x8000, 0xffff, 0x000f, 0x0000, 0xf000, 0xffff, 0x0001,
   0x0000, 0x0000, 0x07e0, 0xfc00, 0x007f, 0xfe00, 0x007f, 0x0000, 0x0000,
   0x8000, 0xffff, 0x000f, 0x0000, 0xf000, 0xffff, 0x001f, 0x0000, 0x0000,
   0x07e0, 0xfe00, 0x001f, 0xfe00, 0x01ff, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0xf000, 0xffff, 0x001f, 0x0f80, 0x0000, 0x07e0, 0xfe00,
   0x0007, 0xff00, 0x03ff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0xf000, 0xffff, 0x001f, 0x1fc0, 0x0000, 0x03f0, 0xff00, 0x0001, 0xff00,
   0x07ff, 0x0000, 0x7ff8, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xfff0,
   0x001f, 0x3fe0, 0x0000, 0x03f0, 0xff80, 0x0000, 0x0000, 0x0fff, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffe0,
   0x03ff, 0x03f0, 0x3fc0, 0x0000, 0x0000, 0x1ff8, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xfff0, 0x00ff, 0x01f0,
   0x1fc0, 0x0000, 0x0000, 0x3ff0, 0x0000, 0x0000, 0x8000, 0xffff, 0x001f,
   0x0000, 0x0000, 0x0000, 0x0000, 0xfff0, 0x00ff, 0x01f8, 0x0fe0, 0x0000,
   0x0000, 0x7fe0, 0x0000, 0x0000, 0xc000, 0xffff, 0x001f, 0x0000, 0x0000,
   0x0000, 0x0000, 0xfff0, 0x00ff, 0x01f8, 0x0ff0, 0x0000, 0x0000, 0xffe0,
   0x0000, 0x0000, 0xc000, 0xffff, 0x001f, 0x0000, 0xc000, 0xffff, 0x003f,
   0xfff0, 0x007f, 0x01f8, 0x07f8, 0x0000, 0x0000, 0xffc0, 0x0001, 0x0000,
   0x8000, 0xffff, 0x001f, 0x0000, 0xff00, 0xffff, 0x003f, 0xffe0, 0x000f,
   0x01fc, 0x07f8, 0x0000, 0x0000, 0xffc0, 0x0001, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0xff00, 0xffff, 0x003f, 0xffe0, 0x001f, 0x01fc, 0x03fc,
   0x0000, 0x0000, 0xffc0, 0x0001, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0xff00, 0xffff, 0x003f, 0xffc0, 0x000f, 0x00fc, 0x03fe, 0x0000, 0x0000,
   0xffe0, 0x0001, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xfc00, 0x001f,
   0x0000, 0xffc0, 0x0007, 0x00fc, 0x01fe, 0x0000, 0x0000, 0xffe0, 0x0001,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc0,
   0x000f, 0x00fc, 0x01ff, 0x0000, 0x0000, 0xffe0, 0x0003, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc0, 0x0007, 0x80fe,
   0x00ff, 0x0000, 0x0000, 0xffe0, 0x0003, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0xfff0, 0x0007, 0xc06f, 0x007f, 0x0000,
   0x0000, 0xfff0, 0x0003, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0xfff0, 0x0003, 0xe02f, 0x003f, 0x0000, 0x0000, 0xfff8,
   0x0003, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0xfff8, 0x8003, 0xe03f, 0x003f, 0x0000, 0x0000, 0xfffc, 0x0003, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xfff8, 0x8001,
   0xf03f, 0x001f, 0x0000, 0x0000, 0xfffe, 0x0003, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xfff8, 0xc001, 0xf83f, 0x000f,
   0x0000, 0x0000, 0xfffc, 0x0001, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0xff80, 0xe001, 0xfc3f, 0x0007, 0x0000, 0x0000,
   0xfff8, 0x0001, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0xfffc, 0xf000, 0xfe3f, 0x0003, 0x0000, 0x0000, 0xfff8, 0x0001,
   0xfff8, 0x0001, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xff80,
   0xf800, 0xfe7f, 0x0003, 0x0000, 0x0000, 0xfff0, 0x0000, 0xfff8, 0x0001,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x8000, 0xff80, 0xfc00, 0xff7f,
   0x0001, 0x0000, 0x0000, 0x7fe0, 0x0000, 0xfff8, 0x0003, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0xc000, 0xff81, 0xfe00, 0xffff, 0x0000, 0x0000,
   0x0000, 0x3fe0, 0x0000, 0xfff8, 0x0003, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0xe000, 0x7f81, 0xff00, 0xffbf, 0x0000, 0x0000, 0x0000, 0x1fc0,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xf000,
   0xff87, 0xffc0, 0x7f9f, 0x0000, 0x0000, 0x0000, 0x0fc0, 0x0000, 0x0000,
   0x0000, 0xfffc, 0x00ff, 0x0000, 0x0000, 0x0000, 0xf800, 0xffcf, 0xfff1,
   0x3f8f, 0x0000, 0x0000, 0x0000, 0x07c0, 0x0000, 0x0000, 0x0000, 0xfffc,
   0x00ff, 0x0000, 0x0000, 0x0000, 0xfe00, 0xffff, 0xffff, 0x3fc3, 0x0000,
   0x0000, 0x0000, 0x01c0, 0x0000, 0x0000, 0x0000, 0xfffc, 0x00ff, 0x0000,
   0x0000, 0x0000, 0xfe00, 0xffff, 0xffff, 0x1fc1, 0x0000, 0x0000, 0x0000,
   0x00c0, 0x0000, 0x0000, 0x0000, 0xfffc, 0x001f, 0x0000, 0x0000, 0x0000,
   0xf800, 0xfe0f, 0xffff, 0x1fc0, 0x0000, 0x0000, 0x0000, 0x0040, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xff00, 0x0003, 0xf000, 0xffff,
   0x7fff, 0x1fc0, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xff00, 0x003f,
   0x0000, 0x0000, 0x0000, 0xffc0, 0x003f, 0xf000, 0xffff, 0x7fff, 0x0fc0,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0xff00, 0x03ff, 0xf000, 0xffff, 0x3c2f, 0x0fc0, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0xff80, 0x003f, 0x0000, 0x0000, 0x0000, 0xfc00,
   0x1fff, 0xf000, 0xdfff, 0x1001, 0x0fc0, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0xff80, 0x001f, 0x0000, 0x0000, 0x0000, 0xfc00, 0xffff, 0xf80f,
   0x1fff, 0x0000, 0x0fc0, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xff80,
   0x001f, 0x0000, 0x0000, 0x0000, 0x8000, 0xffff, 0xfc0f, 0x0fff, 0x0000,
   0x0fc0, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0xfff8, 0xfc0f, 0x07ff, 0x0000, 0x1f80, 0x0000,
   0x0000, 0x0000, 0x0020, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0xfc00, 0xfe0f, 0x07ff, 0x0000, 0x1f80, 0x0000, 0x07c0, 0x0000,
   0x0070, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0xfe00, 0x03ff, 0x0000, 0x1f80, 0x0000, 0x0ffe, 0x0000, 0x0078, 0x0000,
   0xf800, 0x01ff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xfe00, 0x03ff,
   0x0000, 0x3f80, 0xf000, 0x1fff, 0x0000, 0x00fe, 0x0000, 0xfc00, 0x03ff,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xfe00, 0x03ff, 0x0000, 0xff00,
   0xfe00, 0x0fff, 0x0000, 0x00ff, 0x0000, 0xfc00, 0x03ff, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0xfe00, 0x01ff, 0x0000, 0xff00, 0xffff, 0x0fff,
   0x0000, 0x00ff, 0x0000, 0xfc00, 0x03ff, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0xfe00, 0x01ff, 0x0000, 0xff00, 0xffff, 0x03ff, 0x0000, 0x00ff,
   0x0000, 0xf800, 0x00ff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xfe00,
   0x01ff, 0x0000, 0xff00, 0xffff, 0x00ff, 0x0000, 0x00ff, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xfe00, 0x01ff, 0x0000,
   0xfe00, 0xffff, 0x000f, 0x0000, 0x00fc, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0xfe00, 0x01ff, 0x0000, 0xfe00, 0x7fff,
   0x0000, 0x0000, 0x00c0, 0x0000, 0xfff0, 0x0007, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0xfe00, 0x01ff, 0x0000, 0xfc00, 0x1fff, 0x0000, 0x0000,
   0x0000, 0x0000, 0xfff0, 0x0003, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0xfe00, 0x01ff, 0x0000, 0xf000, 0x00ff, 0x0000, 0x0000, 0x0000, 0x0000,
   0xfff0, 0x0003, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xfe00, 0x03ff,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xfe00, 0x03ff, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0xfe00, 0x03ff, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0xfe00, 0x007f, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0xfe00, 0x03ff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0xfe00, 0x007f, 0x0fe0, 0x0000, 0x0000, 0x0000, 0xff00, 0xfe03,
   0x03ff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0xfff8, 0x000f, 0x0000, 0x0000, 0xfffe, 0xfe03, 0x03ff, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xfff8,
   0x00ff, 0x0000, 0xe000, 0xffff, 0xfc03, 0x03ff, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0xfffc, 0x0000, 0xfff8, 0x00ff, 0x0000,
   0xfe00, 0xffff, 0xfc03, 0x03ff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0xfffc, 0x0000, 0xffc0, 0x00ff, 0x0000, 0xff00, 0x07ff,
   0xfc00, 0x03ff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0xfffe, 0x0000, 0xf800, 0x00ff, 0x0000, 0xff80, 0x000f, 0xfc00, 0x03ff,
   0x0000, 0x0060, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x7ffe, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xfc00, 0x03ff, 0x0000, 0x00f0,
   0x0000, 0xc000, 0x00ff, 0x0000, 0x0000, 0x7ffe, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0xfc00, 0x07ff, 0x0000, 0x00f8, 0x0000, 0xf000,
   0x07ff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0xfc00, 0x07ff, 0x0000, 0x00f8, 0x0000, 0xf000, 0x1fff, 0x0000,
   0x0000, 0x3fff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xfc00,
   0x07ff, 0x0000, 0x00fc, 0x0000, 0xf000, 0xffff, 0x0001, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xfc00, 0x07ff, 0x0000,
   0x00fc, 0x0000, 0xf000, 0xffff, 0x0007, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0xf800, 0x07ff, 0x0000, 0x01fc, 0x0000,
   0xe000, 0xffff, 0x0003, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0xf800, 0x0fff, 0x0000, 0x01fc, 0x0000, 0x0000, 0xffe0,
   0x0000, 0x0000, 0xffe0, 0x001f, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0xf800, 0x0fff, 0x0000, 0x00f8, 0x0000, 0x0000, 0x7f00, 0x0000, 0x0000,
   0xffe0, 0x000f, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xf800, 0x0fff,
   0x0000, 0x0018, 0x0000, 0x0000, 0x7c00, 0x0000, 0x0000, 0xffe0, 0x0007,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xf000, 0x0fff, 0x0000, 0x0018,
   0x0000, 0x0000, 0x3800, 0x0000, 0x0000, 0xffe0, 0x0007, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0xf000, 0x1fff, 0x0000, 0x0018, 0x0000, 0x0000,
   0x2000, 0x0000, 0x0000, 0xfff0, 0x0007, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0xf000, 0x1fff, 0x0000, 0x0018, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xf000,
   0x1fff, 0x0000, 0x0010, 0x0000, 0x0000, 0x0000, 0x0000, 0xc000, 0xffff,
   0x0003, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xf000, 0x1fff, 0x0000,
   0x0010, 0x0000, 0x0000, 0x0000, 0x0000, 0xc000, 0xffff, 0x0003, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0xe000, 0x1fff, 0x0000, 0x0410, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0xfff8, 0x0001, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0xe000, 0x3fff, 0x0000, 0x0c30, 0x0000, 0x0000, 0x0000,
   0x0000, 0xe000, 0xffff, 0x0001, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0xe000, 0x3fff, 0x0000, 0x1820, 0x0000, 0x0000, 0x0000, 0x0000, 0xe000,
   0xffff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xe000, 0x3fff,
   0x0000, 0x0020, 0x0000, 0x0000, 0x2000, 0x0000, 0x0000, 0x7fff, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xe000, 0x7fff, 0x0000, 0x0040,
   0x0000, 0x0000, 0x3000, 0x0000, 0xf000, 0x7fff, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0xe000, 0x7fff, 0x0000, 0x0000, 0x0000, 0x0000,
   0x7800, 0x0000, 0xf000, 0x3fff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0xff00, 0xc003, 0x3fff, 0x0000, 0x0000, 0x0000, 0x0000, 0x3c00, 0x0000,
   0xc000, 0x1fff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xfffe, 0x8003,
   0x1fff, 0x0000, 0x0200, 0x0000, 0x0000, 0x3e00, 0x0000, 0xe000, 0x1fff,
   0x0000, 0x0000, 0x0000, 0x0000, 0xc000, 0xffff, 0x0003, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0e00, 0x0000, 0xe000, 0x0fff, 0x0000, 0x0000,
   0x0000, 0x0000, 0xfc00, 0x1fff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0xf000, 0x07ff, 0x0000, 0x0000, 0x0000, 0x0000,
   0xff00, 0x01ff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0xf000, 0x07ff, 0xfc00, 0x0007, 0x0000, 0x0000, 0xff80, 0x001f,
   0x0000, 0x0000, 0x0000, 0x03c0, 0x0000, 0x0000, 0x0000, 0x0000, 0xf000,
   0x03ff, 0xfe00, 0x00ff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x07c0, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xfe00,
   0x07ff, 0x0000, 0x0000, 0x0000, 0x0000, 0x8000, 0x0fff, 0x0000, 0x0fc0,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xfe00, 0x7fff, 0x0000,
   0x0000, 0x0000, 0x0000, 0x8000, 0x1fff, 0x0000, 0x1fc0, 0x0000, 0x0000,
   0x0000, 0x0000, 0xff00, 0x003f, 0xf000, 0xffff, 0x0007, 0x0000, 0x0000,
   0x0000, 0x8000, 0x1fff, 0x0000, 0x3f80, 0x0000, 0x0000, 0x0000, 0x0000,
   0xff80, 0x003f, 0x0000, 0xfffe, 0x003f, 0x0000, 0x0000, 0x0000, 0x0000,
   0x3fff, 0x0000, 0xff00, 0x0001, 0x0000, 0x0000, 0x0000, 0xff80, 0x001f,
   0x0000, 0xffe0, 0x007f, 0x0000, 0x0000, 0x0000, 0x0000, 0x7fff, 0x0000,
   0xfc00, 0x000f, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xff80,
   0x007f, 0x0000, 0x0000, 0x0000, 0x0000, 0x7ffe, 0x0000, 0xf800, 0x03ff,
   0x003e, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xfc00, 0x007f, 0x0000,
   0x0000, 0x0000, 0x0000, 0xfffe, 0x0001, 0xf000, 0xffff, 0x007f, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0xfffc, 0x0001, 0xc000, 0xffff, 0x0fff, 0x0000, 0x0000, 0xffc0,
   0x001f, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xfff8,
   0x0003, 0x8000, 0xffff, 0x3fff, 0x0000, 0x0000, 0xffc0, 0x000f, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffe0, 0x0003, 0x0000,
   0xffff, 0x7fff, 0x0000, 0x0000, 0xffe0, 0x0003, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0xffc0, 0x0007, 0x0000, 0xfff8, 0x7fff,
   0x0000, 0x0000, 0xffe0, 0x0003, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0xff80, 0x000f, 0x0000, 0xff80, 0x7eff, 0x0000, 0x0000,
   0xfff0, 0x0003, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0xff00, 0x007f, 0x0000, 0x0000, 0x3800, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xff00, 0x00ff,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xfffc, 0x0001, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xfe00, 0x01ff, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0xfffc, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0xfc00, 0x0fff, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x7ffc, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0xf800, 0x3fff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0003, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xe000,
   0x7fff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x8000, 0x000f,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xc000, 0xffff, 0x0003,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xc000, 0x001f, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffff, 0x001f, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0xc000, 0x003f, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0004, 0x0000, 0xfff0, 0x003f, 0x0000, 0x0000, 0x0000, 0xe000,
   0x01ff, 0x8000, 0x007f, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0006,
   0x0000, 0xffc0, 0x01ff, 0x0000, 0x0000, 0x0000, 0xf800, 0x01ff, 0x8000,
   0x007f, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0007, 0x0000, 0xff00,
   0x07ff, 0x0000, 0x0000, 0x0000, 0xff00, 0x00ff, 0x8000, 0x007f, 0x0000,
   0x0000, 0x0000, 0x0000, 0x8000, 0x0003, 0x0000, 0xf800, 0x3fff, 0x0000,
   0x0000, 0x0000, 0xff80, 0x007f, 0x8000, 0x00ff, 0x0000, 0x0000, 0x0000,
   0x0000, 0xc000, 0x0003, 0x0000, 0x8000, 0xffff, 0x0000, 0x0000, 0x0000,
   0xffc0, 0x000f, 0x0000, 0x00ff, 0x0000, 0x0000, 0x0000, 0x0000, 0xc000,
   0x0003, 0x0000, 0x0000, 0xffff, 0x000f, 0x0000, 0x0000, 0xffe0, 0x0007,
   0x0000, 0x00ff, 0x0000, 0x0000, 0x0000, 0x0000, 0xe000, 0x0003, 0x0000,
   0x0000, 0xfffc, 0x01ff, 0x0000, 0x0000, 0xfffe, 0x0001, 0xc000, 0x01ff,
   0x0000, 0x0000, 0x0000, 0x0000, 0xf000, 0x0007, 0x0000, 0x0000, 0xffc0,
   0xffff, 0x0000, 0x0000, 0x3fff, 0x0000, 0xf800, 0x01ff, 0x0000, 0x0000,
   0x0000, 0x0000, 0xf000, 0x000f, 0x0000, 0x0000, 0xfe00, 0xffff, 0x03ff,
   0xf800, 0x0fff, 0x0000, 0xfe00, 0x01ff, 0x0000, 0x0000, 0x0000, 0x0000,
   0xf800, 0x001f, 0x0000, 0x0000, 0xe000, 0xffff, 0xffff, 0xffff, 0x07ff,
   0x0000, 0xff80, 0x01ff, 0x0000, 0x0000, 0x0000, 0x0000, 0xf800, 0x000f,
   0x0000, 0x0000, 0x0000, 0xfffe, 0xffff, 0xffff, 0x01ff, 0x0000, 0xfff0,
   0x01ff, 0x0000, 0x0000, 0x0000, 0x0000, 0xfc00, 0x0007, 0x0000, 0x0000,
   0x0000, 0xff00, 0xffff, 0xffff, 0x000f, 0x8000, 0xffff, 0x01ff, 0x0000,
   0x0000, 0x0000, 0x0000, 0xfc00, 0x0007, 0x03e0, 0x0000, 0x0000, 0x0000,
   0xfffc, 0xffff, 0x0000, 0xf000, 0xffff, 0x01ff, 0x0000, 0x0000, 0x0000,
   0x0000, 0xfe00, 0x0003, 0x0ff8, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0xfc00, 0xfff9, 0x01fd, 0x0000, 0x0000, 0x0000, 0x0000, 0xfe00,
   0x0003, 0x7fff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x7f00,
   0x3fe0, 0x00f8, 0x0000, 0x0000, 0x0000, 0x0000, 0xfe00, 0xf001, 0xffff,
   0x001f, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xfff8, 0x0fe1, 0x0078,
   0x0000, 0x0000, 0x0000, 0x0000, 0xfe00, 0xe000, 0xffff, 0x01ff, 0x0000,
   0x0000, 0x0000, 0x0000, 0xfff0, 0xffff, 0x07f1, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x7e00, 0x8000, 0xffff, 0x0fff, 0x0000, 0x0000, 0x0000,
   0xc000, 0xffff, 0xffff, 0x01f9, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x3e00, 0x0000, 0xfffe, 0xffff, 0x0007, 0x0000, 0xffc0, 0xfc00, 0xffff,
   0xffff, 0x00fc, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0xfff8, 0xffff, 0x07ff, 0xffe0, 0xffff, 0xffff, 0xffff, 0x7fff, 0x003f,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xfff0, 0xffff,
   0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x8fff, 0x001f, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xfff0, 0xffff, 0xffff, 0xffff,
   0xffff, 0xffff, 0xffff, 0xc3ff, 0x000f, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0xfffc, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
   0x7fff, 0xf01c, 0x0003, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0xffc0, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x000f, 0xfc00,
   0x0001, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xc000,
   0xffff, 0xffff, 0xffff, 0xffff, 0x0fff, 0x0000, 0x7e00, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffe0, 0xffff,
   0x1fff, 0x1f00, 0x0000, 0x0000, 0x1fe0, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xf800, 0xffff, 0x0000, 0x0000,
   0x0000, 0x0000, 0x03f8, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x07f0, 0x0000, 0x0000, 0x0000, 0x0000,
   0x003c, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0100, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x00c0, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x00f0, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x00e0, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xf000,
   0x00f1, 0x001f, 0xf9fe, 0x00f8, 0x07c0, 0xfe00, 0xe003, 0x3e03, 0x0060,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x6000, 0x00e1, 0x000e,
   0xb0ff, 0x0070, 0x0380, 0x0c00, 0xc00f, 0x1c01, 0x0030, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x6000, 0x00e1, 0x801e, 0xb0c3, 0x0030,
   0x0780, 0xec00, 0xc01f, 0x3803, 0x0030, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x6000, 0x00e1, 0xc01d, 0xb043, 0x0018, 0x0740, 0x2c00,
   0xa01c, 0x3003, 0x0018, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x6000, 0x00e1, 0xc019, 0xb001, 0x000c, 0x0640, 0x2c00, 0x2038, 0x7003,
   0x001c, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x6000, 0x80e1,
   0xe0b9, 0xb001, 0x000e, 0x2e60, 0x2c00, 0x3038, 0xe017, 0x000c, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xf000, 0xe0e1, 0xe0f0, 0xb001,
   0x000e, 0x3c38, 0x2c00, 0x1c38, 0xc01e, 0x0006, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0xf800, 0xc0ff, 0xe071, 0xb001, 0x001d, 0x1c70,
   0x2c00, 0x3838, 0xc00e, 0x0007, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x6000, 0xc0ff, 0xe1f9, 0xf001, 0x001c, 0x7e70, 0x2c00, 0x3838,
   0x803f, 0x0003, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x6000,
   0x40e1, 0xe07f, 0x3081, 0x0039, 0x1fd0, 0x2c00, 0xe838, 0x800f, 0x0003,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x6000, 0xc0e1, 0xe0e6,
   0xb081, 0x0038, 0x39b0, 0x2c00, 0xd838, 0x801c, 0x0003, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x6000, 0xa0e1, 0xc0e4, 0xb081, 0x0070,
   0x3928, 0x2c00, 0x943c, 0x801c, 0x0003, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x6000, 0xa0e1, 0xc0c0, 0xb083, 0x0070, 0x3028, 0x2c00,
   0x141c, 0x8018, 0x0003, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x6000, 0xb0e1, 0xc1c0, 0xb0c1, 0x00e0, 0x702c, 0x2c00, 0x160e, 0x8038,
   0x0001, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xf000, 0x78f1,
   0x83e0, 0xf8e3, 0x01f0, 0xf81e, 0xfe00, 0x0f07, 0xc07c, 0x0003, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xf000, 0xfbfb, 0x0fe1, 0xf83f,
   0x03f9, 0xf87e, 0xfe03, 0x3f01, 0xf1fc, 0x000f, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000 };



#ifdef	__cplusplus
}
#endif

#endif	/* HACKADAY_H */
