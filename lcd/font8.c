#include "font.h"

/*******************************************************************************
 * Converted via https://lvgl.io/tools/fontconverter
 * Size: 16 px
 * Bpp: 2
 * Opts:
 ******************************************************************************/

#ifndef UBUNTU_MONO
#define UBUNTU_MONO 1
#endif

#if UBUNTU_MONO

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static const uint8_t gylph_bitmap[] = {
    /* U+0020 " " */

    /* U+0021 "!" */
    0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x14, 0x0,
    0x3c, 0x3c,

    /* U+0022 "\"" */
    0xd7, 0xd7, 0xc3, 0x82, 0x0,

    /* U+0023 "#" */
    0x7, 0x1c, 0xa, 0x28, 0xbf, 0xfe, 0xd, 0x34,
    0xc, 0x30, 0x1c, 0x70, 0xbf, 0xfe, 0x28, 0xa0,
    0x34, 0xd0, 0x30, 0xc0,

    /* U+0024 "$" */
    0x2, 0x80, 0xb, 0xf4, 0x2d, 0x10, 0x38, 0x0,
    0x3c, 0x0, 0xf, 0x80, 0x1, 0xf4, 0x0, 0x2c,
    0x0, 0x1c, 0x24, 0x7c, 0x2f, 0xe0, 0x2, 0x80,
    0x2, 0x80,

    /* U+0025 "%" */
    0x3c, 0xd, 0x96, 0x18, 0x97, 0x30, 0x96, 0x90,
    0x3d, 0xc0, 0x3, 0x7c, 0x6, 0x96, 0xc, 0x86,
    0x24, 0x96, 0x70, 0x3c,

    /* U+0026 "&" */
    0xb, 0xc0, 0x2c, 0xa0, 0x24, 0x60, 0x28, 0xd0,
    0xf, 0x40, 0x2b, 0x4c, 0x71, 0xe8, 0x70, 0xb4,
    0x70, 0x78, 0x1f, 0x9d,

    /* U+0027 "'" */
    0xaa, 0xaa, 0x0,

    /* U+0028 "(" */
    0x0, 0x40, 0x3c, 0xb, 0x1, 0xc0, 0x28, 0x3,
    0x40, 0x30, 0x3, 0x0, 0x30, 0x3, 0x40, 0x28,
    0x1, 0xc0, 0xb, 0x0, 0x3c, 0x0, 0x80,

    /* U+0029 ")" */
    0x20, 0x3, 0xc0, 0xe, 0x0, 0x70, 0x2, 0x80,
    0x1c, 0x0, 0xc0, 0xc, 0x0, 0xc0, 0x1c, 0x2,
    0x80, 0x30, 0xe, 0x3, 0xc0, 0x20, 0x0,

    /* U+002A "*" */
    0x1, 0x40, 0x2, 0x80, 0x25, 0x98, 0x2f, 0xf8,
    0x3, 0xc0, 0xe, 0xb0, 0x8, 0x20,

    /* U+002B "+" */
    0x2, 0x80, 0x2, 0x80, 0x2, 0x80, 0x7f, 0xfd,
    0x2, 0x80, 0x2, 0x80, 0x2, 0x80, 0x0, 0x0,

    /* U+002C "," */
    0x1d, 0x2e, 0xd, 0x2c, 0x50,

    /* U+002D "-" */
    0x0, 0xff, 0x14,

    /* U+002E "." */
    0x14, 0x3c, 0x3c,

    /* U+002F "/" */
    0x0, 0xa0, 0xd, 0x0, 0xc0, 0x2c, 0x3, 0x40,
    0x30, 0xb, 0x0, 0xe0, 0xc, 0x1, 0xc0, 0x38,
    0x3, 0x40, 0x70, 0xa, 0x0,

    /* U+0030 "0" */
    0xb, 0xe0, 0x2d, 0x74, 0x34, 0x1c, 0x32, 0x8c,
    0x33, 0xcc, 0x30, 0xc, 0x30, 0xc, 0x34, 0x1c,
    0x2d, 0x78, 0xb, 0xe0,

    /* U+0031 "1" */
    0x7, 0x0, 0xbc, 0xa, 0x70, 0x0, 0xc0, 0x3,
    0x0, 0xc, 0x0, 0x30, 0x0, 0xc0, 0x7, 0x41,
    0xff, 0xc0,

    /* U+0032 "2" */
    0x1f, 0xe0, 0x39, 0x74, 0x0, 0x28, 0x0, 0x38,
    0x0, 0x70, 0x1, 0xc0, 0x7, 0x40, 0xd, 0x0,
    0x2c, 0x0, 0x3f, 0xfc,

    /* U+0033 "3" */
    0x1f, 0xe0, 0x15, 0x74, 0x0, 0x38, 0x0, 0x74,
    0x7, 0xe0, 0x0, 0x78, 0x0, 0x1c, 0x0, 0x1c,
    0x15, 0x78, 0x2f, 0xe0,

    /* U+0034 "4" */
    0x0, 0x74, 0x1, 0xf4, 0x3, 0x34, 0xd, 0x34,
    0x18, 0x34, 0x30, 0x34, 0x7f, 0xfd, 0x0, 0x34,
    0x0, 0x34, 0x0, 0x34,

    /* U+0035 "5" */
    0x3f, 0xf0, 0xd0, 0x3, 0x0, 0xc, 0x0, 0x3f,
    0x80, 0x7, 0x80, 0x7, 0x0, 0x1c, 0x55, 0xe2,
    0xfe, 0x0,

    /* U+0036 "6" */
    0x1, 0xb8, 0xb, 0x50, 0x1c, 0x0, 0x3f, 0xe0,
    0x38, 0x78, 0x30, 0x1c, 0x34, 0xc, 0x38, 0x1c,
    0x2d, 0x78, 0xb, 0xe0,

    /* U+0037 "7" */
    0xff, 0xf4, 0x2, 0xc0, 0xd, 0x0, 0xb0, 0x3,
    0x40, 0x1c, 0x0, 0xe0, 0x3, 0x40, 0x1c, 0x0,
    0x70, 0x0,

    /* U+0038 "8" */
    0xb, 0xe0, 0x2d, 0x78, 0x34, 0x1c, 0x38, 0x28,
    0xf, 0xb0, 0x1d, 0xb4, 0x34, 0x1c, 0x30, 0xc,
    0x38, 0x2c, 0xb, 0xe0,

    /* U+0039 "9" */
    0xb, 0xe0, 0x2d, 0x74, 0x34, 0x1c, 0x30, 0xc,
    0x38, 0x1c, 0xf, 0xfc, 0x0, 0x2c, 0x0, 0x34,
    0x6, 0xe0, 0x2e, 0x40,

    /* U+003A ":" */
    0x3c, 0x3c, 0x14, 0x0, 0x0, 0x14, 0x3c, 0x3c,

    /* U+003B ";" */
    0x3c, 0x3c, 0x14, 0x0, 0x0, 0x4, 0x3c, 0x3c,
    0x1c, 0xf0, 0x0,

    /* U+003C "<" */
    0x0, 0x4, 0x0, 0xbc, 0xb, 0x90, 0x3c, 0x0,
    0x2f, 0x40, 0x2, 0xf4, 0x0, 0x1c, 0x0, 0x0,

    /* U+003D "=" */
    0x7f, 0xfd, 0x0, 0x0, 0x0, 0x0, 0x7f, 0xfd,
    0x0, 0x0,

    /* U+003E ">" */
    0x10, 0x0, 0x3e, 0x0, 0x6, 0xe4, 0x0, 0x2d,
    0x1, 0xb8, 0x1f, 0x80, 0x34, 0x0, 0x0, 0x0,

    /* U+003F "?" */
    0x3f, 0x81, 0x1d, 0x0, 0xd0, 0x1c, 0x7, 0x0,
    0xd0, 0x4, 0x0, 0x0, 0x1e, 0x0, 0xd0,

    /* U+0040 "@" */
    0x7, 0xf0, 0xd, 0x1c, 0x28, 0xd, 0x34, 0xbd,
    0x32, 0xcd, 0x73, 0x4d, 0x73, 0x4d, 0x73, 0x4d,
    0x32, 0x8d, 0x34, 0xfd, 0x2c, 0x0, 0xe, 0x0,
    0x3, 0xf8, 0x0, 0x0,

    /* U+0041 "A" */
    0x3, 0xc0, 0x6, 0x90, 0x9, 0x60, 0xc, 0x30,
    0x1c, 0x34, 0x28, 0x28, 0x3f, 0xfc, 0x30, 0xc,
    0x70, 0xd, 0xa0, 0xa,

    /* U+0042 "B" */
    0x3f, 0xe0, 0x34, 0x78, 0x30, 0x28, 0x30, 0x34,
    0x3f, 0xe0, 0x34, 0x78, 0x30, 0xc, 0x30, 0xc,
    0x34, 0x7c, 0x3f, 0xe0,

    /* U+0043 "C" */
    0x2, 0xf8, 0xe, 0x58, 0x38, 0x0, 0x34, 0x0,
    0x30, 0x0, 0x30, 0x0, 0x34, 0x0, 0x38, 0x0,
    0x1e, 0x58, 0x7, 0xf8,

    /* U+0044 "D" */
    0x3f, 0xd0, 0x35, 0xb4, 0x30, 0x2c, 0x30, 0xc,
    0x30, 0xd, 0x30, 0xd, 0x30, 0xc, 0x30, 0x2c,
    0x35, 0xb4, 0x3f, 0xd0,

    /* U+0045 "E" */
    0xbf, 0xf2, 0xc0, 0xb, 0x0, 0x2c, 0x0, 0xbf,
    0xd2, 0xc0, 0xb, 0x0, 0x2c, 0x0, 0xb0, 0x2,
    0xff, 0xd0,

    /* U+0046 "F" */
    0xbf, 0xf2, 0xc0, 0xb, 0x0, 0x2c, 0x0, 0xbf,
    0xe2, 0xc0, 0xb, 0x0, 0x2c, 0x0, 0xb0, 0x2,
    0xc0, 0x0,

    /* U+0047 "G" */
    0x2, 0xf8, 0xe, 0x58, 0x38, 0x0, 0x34, 0x0,
    0x30, 0x0, 0x30, 0xd, 0x34, 0xd, 0x38, 0xd,
    0x1e, 0x5d, 0x7, 0xfc,

    /* U+0048 "H" */
    0x70, 0xd, 0x70, 0xd, 0x70, 0xd, 0x70, 0xd,
    0x7f, 0xfd, 0x70, 0xd, 0x70, 0xd, 0x70, 0xd,
    0x70, 0xd, 0x70, 0xd,

    /* U+0049 "I" */
    0xbf, 0xe0, 0xa0, 0xa, 0x0, 0xa0, 0xa, 0x0,
    0xa0, 0xa, 0x0, 0xa0, 0xa, 0xb, 0xfe,

    /* U+004A "J" */
    0xf, 0xf8, 0x0, 0xa0, 0x2, 0x80, 0xa, 0x0,
    0x28, 0x0, 0xa0, 0x2, 0x80, 0xa, 0x24, 0x74,
    0xbf, 0x40,

    /* U+004B "K" */
    0xd0, 0x73, 0x43, 0x4d, 0x38, 0x37, 0xc0, 0xfc,
    0x3, 0xb8, 0xd, 0x38, 0x34, 0x74, 0xd0, 0xb3,
    0x40, 0xe0,

    /* U+004C "L" */
    0xb0, 0x2, 0xc0, 0xb, 0x0, 0x2c, 0x0, 0xb0,
    0x2, 0xc0, 0xb, 0x0, 0x2c, 0x0, 0xb0, 0x2,
    0xff, 0xd0,

    /* U+004D "M" */
    0x38, 0x2c, 0x3c, 0x3c, 0x3c, 0x3c, 0x36, 0x5c,
    0x33, 0xcc, 0x73, 0xcd, 0x70, 0xd, 0x70, 0xd,
    0x70, 0xd, 0x70, 0xd,

    /* U+004E "N" */
    0x34, 0xc, 0x3c, 0xc, 0x3e, 0xc, 0x37, 0xc,
    0x32, 0x8c, 0x30, 0xcc, 0x30, 0xac, 0x30, 0x7c,
    0x30, 0x3c, 0x30, 0x1c,

    /* U+004F "O" */
    0xb, 0xe0, 0x2d, 0x78, 0x30, 0x1c, 0x70, 0xd,
    0xb0, 0xe, 0xb0, 0xe, 0x70, 0xd, 0x30, 0x1c,
    0x2d, 0x78, 0xb, 0xe0,

    /* U+0050 "P" */
    0xbf, 0x83, 0x87, 0xcd, 0x3, 0x34, 0xc, 0xd0,
    0xb3, 0xff, 0xe, 0x0, 0x34, 0x0, 0xd0, 0x3,
    0x40, 0x0,

    /* U+0051 "Q" */
    0xb, 0xe0, 0x2d, 0x78, 0x34, 0x1c, 0x70, 0xd,
    0x70, 0xd, 0xb0, 0xe, 0x70, 0xd, 0x70, 0xd,
    0x34, 0x1c, 0x2d, 0x78, 0x7, 0xd0, 0x1, 0xc0,
    0x0, 0xbc, 0x0, 0x4,

    /* U+0052 "R" */
    0x3f, 0xd0, 0x34, 0x74, 0x30, 0x2c, 0x30, 0x2c,
    0x30, 0x38, 0x3f, 0xe0, 0x34, 0xe0, 0x30, 0x70,
    0x30, 0x28, 0x30, 0xc,

    /* U+0053 "S" */
    0xb, 0xf4, 0x2d, 0x54, 0x34, 0x0, 0x2c, 0x0,
    0xf, 0x80, 0x1, 0xb4, 0x0, 0x2c, 0x0, 0xc,
    0x24, 0x7c, 0x2f, 0xe0,

    /* U+0054 "T" */
    0x7f, 0xfd, 0x2, 0x80, 0x2, 0x80, 0x2, 0x80,
    0x2, 0x80, 0x2, 0x80, 0x2, 0x80, 0x2, 0x80,
    0x2, 0x80, 0x2, 0x80,

    /* U+0055 "U" */
    0x30, 0xc, 0x30, 0xc, 0x30, 0xc, 0x30, 0xc,
    0x30, 0xc, 0x30, 0xc, 0x30, 0xc, 0x34, 0x1c,
    0x3d, 0x7c, 0xb, 0xe0,

    /* U+0056 "V" */
    0xa0, 0xa, 0x70, 0xd, 0x30, 0xc, 0x34, 0x1c,
    0x28, 0x28, 0x1c, 0x34, 0xd, 0x70, 0xa, 0xa0,
    0x7, 0xd0, 0x3, 0xc0,

    /* U+0057 "W" */
    0x70, 0xd, 0x70, 0xd, 0x70, 0xd, 0x70, 0xd,
    0x73, 0xcd, 0x33, 0xcc, 0x36, 0x9c, 0x3c, 0x7c,
    0x3c, 0x3c, 0x38, 0x2c,

    /* U+0058 "X" */
    0x34, 0xc, 0x2c, 0x38, 0xd, 0x70, 0xb, 0xd0,
    0x3, 0xc0, 0x7, 0xd0, 0xd, 0xb0, 0x1c, 0x34,
    0x38, 0x2c, 0x70, 0xd,

    /* U+0059 "Y" */
    0xb0, 0xe, 0x34, 0xc, 0x28, 0x28, 0xc, 0x30,
    0xa, 0xa0, 0x3, 0xc0, 0x2, 0x80, 0x2, 0x80,
    0x2, 0x80, 0x2, 0x80,

    /* U+005A "Z" */
    0x3f, 0xfc, 0x0, 0x2c, 0x0, 0x70, 0x0, 0xe0,
    0x2, 0xc0, 0x3, 0x40, 0xa, 0x0, 0x1c, 0x0,
    0x38, 0x0, 0x3f, 0xfd,

    /* U+005B "[" */
    0xbf, 0x28, 0xa, 0x2, 0x80, 0xa0, 0x28, 0xa,
    0x2, 0x80, 0xa0, 0x28, 0xa, 0x2, 0x80, 0xa0,
    0x2f, 0xc0,

    /* U+005C "\\" */
    0xa0, 0x7, 0x0, 0x30, 0x3, 0x80, 0x1c, 0x0,
    0xc0, 0xe, 0x0, 0xb0, 0x3, 0x0, 0x34, 0x2,
    0xc0, 0x1c, 0x0, 0xd0, 0xa,

    /* U+005D "]" */
    0x3f, 0x80, 0xa0, 0x28, 0xa, 0x2, 0x80, 0xa0,
    0x28, 0xa, 0x2, 0x80, 0xa0, 0x28, 0xa, 0x2,
    0x8f, 0xe0,

    /* U+005E "^" */
    0x3, 0xc0, 0x7, 0xd0, 0xd, 0x70, 0x1c, 0x34,
    0x34, 0x1c, 0x10, 0x4,

    /* U+005F "_" */
    0xff, 0xff, 0x0, 0x0,

    /* U+0060 "`" */
    0x10, 0x34, 0xc, 0x0,

    /* U+0061 "a" */
    0xf, 0xe0, 0x11, 0xe0, 0x1, 0xc2, 0xff, 0x3d,
    0x2c, 0xd0, 0x73, 0x92, 0xc2, 0xfe,

    /* U+0062 "b" */
    0x50, 0x3, 0x40, 0xd, 0x0, 0x34, 0x0, 0xff,
    0x83, 0xd7, 0x8d, 0x7, 0x34, 0xd, 0xd0, 0x37,
    0x41, 0xce, 0x5e, 0x2f, 0xe0,

    /* U+0063 "c" */
    0x7, 0xfc, 0x1e, 0x54, 0x38, 0x0, 0x30, 0x0,
    0x30, 0x0, 0x38, 0x0, 0x1e, 0x54, 0x7, 0xfc,

    /* U+0064 "d" */
    0x0, 0x8, 0x0, 0x70, 0x1, 0xc0, 0x7, 0xb,
    0xfc, 0xb5, 0xf3, 0x41, 0xdc, 0x7, 0x70, 0x1c,
    0xd0, 0x72, 0xd6, 0xc2, 0xfe,

    /* U+0065 "e" */
    0xb, 0xe0, 0x2d, 0x3c, 0x30, 0xc, 0x7f, 0xfc,
    0x70, 0x0, 0x34, 0x0, 0x2d, 0x54, 0x7, 0xf8,

    /* U+0066 "f" */
    0x7, 0xf4, 0x34, 0x41, 0xc0, 0x3f, 0xfc, 0x2c,
    0x0, 0x70, 0x1, 0xc0, 0x7, 0x0, 0x1c, 0x0,
    0x70, 0x1, 0xc0, 0x0,

    /* U+0067 "g" */
    0xb, 0xf8, 0xb5, 0xb3, 0x41, 0xdc, 0x7, 0x70,
    0x1c, 0xd0, 0x72, 0xd7, 0xc2, 0xff, 0x0, 0x2c,
    0x51, 0xd2, 0xfd, 0x0,

    /* U+0068 "h" */
    0x50, 0xd, 0x0, 0xd0, 0xd, 0x0, 0xff, 0x8e,
    0x5d, 0xd0, 0xbd, 0x7, 0xd0, 0x7d, 0x7, 0xd0,
    0x7d, 0x7,

    /* U+0069 "i" */
    0x7, 0x0, 0xb, 0x40, 0x0, 0x0, 0x3f, 0x40,
    0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40,
    0x3, 0x40, 0x2, 0xd4, 0x0, 0xfc,

    /* U+006A "j" */
    0x3, 0x80, 0x3c, 0x0, 0x3, 0xfc, 0x1, 0xc0,
    0xc, 0x0, 0xc0, 0xc, 0x0, 0xc0, 0xc, 0x0,
    0xc0, 0xc, 0x56, 0xc7, 0xf0,

    /* U+006B "k" */
    0x90, 0x3, 0x40, 0xd, 0x0, 0x34, 0x0, 0xd0,
    0xb3, 0x4b, 0xd, 0xb0, 0x3f, 0x0, 0xee, 0x3,
    0x4e, 0xd, 0xe, 0x34, 0x1d,

    /* U+006C "l" */
    0x3f, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40,
    0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40,
    0x3, 0x40, 0x3, 0xd4, 0x0, 0xfc,

    /* U+006D "m" */
    0x3e, 0xb8, 0x73, 0x8d, 0x72, 0x8d, 0x72, 0x8d,
    0x72, 0x8d, 0x70, 0xd, 0x70, 0xd, 0x70, 0xd,

    /* U+006E "n" */
    0xbf, 0x8e, 0x1e, 0xd0, 0xbd, 0x7, 0xd0, 0x7d,
    0x7, 0xd0, 0x7d, 0x7,

    /* U+006F "o" */
    0xb, 0xe0, 0x2d, 0x78, 0x34, 0x1c, 0x70, 0xd,
    0x70, 0xd, 0x34, 0x1c, 0x2d, 0x78, 0xb, 0xe0,

    /* U+0070 "p" */
    0xbf, 0x83, 0x87, 0x8d, 0x7, 0x34, 0xd, 0xd0,
    0x37, 0x41, 0xcf, 0x5e, 0x3f, 0xe0, 0xd0, 0x3,
    0x40, 0xd, 0x0, 0x0,

    /* U+0071 "q" */
    0xb, 0xf8, 0xb4, 0xb3, 0x41, 0xdc, 0x7, 0x70,
    0x1c, 0xd0, 0x72, 0xd7, 0xc2, 0xff, 0x0, 0x1c,
    0x0, 0x70, 0x1, 0xc0,

    /* U+0072 "r" */
    0x2f, 0xf1, 0xd0, 0x47, 0x0, 0x1c, 0x0, 0x70,
    0x1, 0xc0, 0x7, 0x0, 0x1c, 0x0,

    /* U+0073 "s" */
    0x2f, 0xdb, 0x44, 0xa0, 0x3, 0xe0, 0x7, 0xd0,
    0xb, 0x91, 0xbb, 0xf8,

    /* U+0074 "t" */
    0x4, 0x0, 0x70, 0x1, 0xc0, 0x3f, 0xfc, 0x2c,
    0x0, 0x70, 0x1, 0xc0, 0x7, 0x0, 0x1c, 0x0,
    0x39, 0x40, 0x7f, 0x0,

    /* U+0075 "u" */
    0xd0, 0x7d, 0x7, 0xd0, 0x7d, 0x7, 0xd0, 0x7e,
    0x7, 0x75, 0xb2, 0xfe,

    /* U+0076 "v" */
    0x70, 0xd, 0x34, 0x1c, 0x28, 0x2c, 0x1c, 0x34,
    0xd, 0x70, 0xa, 0xa0, 0x7, 0xc0, 0x3, 0xc0,

    /* U+0077 "w" */
    0xa0, 0xa, 0xa0, 0xa, 0x72, 0x89, 0x73, 0xcd,
    0x36, 0xdc, 0x39, 0x6c, 0x3c, 0x3c, 0x28, 0x28,

    /* U+0078 "x" */
    0x34, 0x1c, 0x1c, 0x34, 0xb, 0xa0, 0x3, 0xc0,
    0x7, 0xd0, 0xd, 0x70, 0x28, 0x38, 0x30, 0xd,

    /* U+0079 "y" */
    0x34, 0xc, 0x38, 0x1c, 0x2c, 0x28, 0xc, 0x34,
    0xe, 0x30, 0x7, 0x70, 0x3, 0xe0, 0x2, 0xc0,
    0x1, 0xc0, 0x7, 0x40, 0x7d, 0x0,

    /* U+007A "z" */
    0xbf, 0xe0, 0x1d, 0x3, 0x80, 0xb0, 0x1c, 0x3,
    0x80, 0xb0, 0xf, 0xff,

    /* U+007B "{" */
    0x7, 0xf0, 0xe0, 0xc, 0x0, 0xc0, 0xc, 0x1,
    0xc0, 0xb8, 0x1, 0xc0, 0xc, 0x0, 0xc0, 0xc,
    0x0, 0xd0, 0xe, 0x0, 0x7f,

    /* U+007C "|" */
    0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa,

    /* U+007D "}" */
    0xfd, 0x0, 0xb0, 0x3, 0x0, 0x30, 0x3, 0x0,
    0x34, 0x2, 0xe0, 0x34, 0x3, 0x0, 0x30, 0x3,
    0x0, 0x70, 0xb, 0xf, 0xd0,

    /* U+007E "~" */
    0x0, 0x0, 0x2f, 0x48, 0x31, 0xfc, 0x0, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 128, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 128, .box_w = 4, .box_h = 10, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 10, .adv_w = 128, .box_w = 4, .box_h = 5, .ofs_x = 2, .ofs_y = 6},
    {.bitmap_index = 15, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 35, .adv_w = 128, .box_w = 8, .box_h = 13, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 61, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 81, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 101, .adv_w = 128, .box_w = 2, .box_h = 5, .ofs_x = 3, .ofs_y = 6},
    {.bitmap_index = 104, .adv_w = 128, .box_w = 6, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 127, .adv_w = 128, .box_w = 6, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 150, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 164, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 180, .adv_w = 128, .box_w = 4, .box_h = 5, .ofs_x = 2, .ofs_y = -3},
    {.bitmap_index = 185, .adv_w = 128, .box_w = 4, .box_h = 3, .ofs_x = 2, .ofs_y = 3},
    {.bitmap_index = 188, .adv_w = 128, .box_w = 4, .box_h = 3, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 191, .adv_w = 128, .box_w = 6, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 212, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 232, .adv_w = 128, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 250, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 270, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 290, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 310, .adv_w = 128, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 328, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 348, .adv_w = 128, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 366, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 386, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 406, .adv_w = 128, .box_w = 4, .box_h = 8, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 414, .adv_w = 128, .box_w = 4, .box_h = 11, .ofs_x = 2, .ofs_y = -3},
    {.bitmap_index = 425, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 441, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 451, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 467, .adv_w = 128, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 482, .adv_w = 128, .box_w = 8, .box_h = 14, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 510, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 530, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 550, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 570, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 590, .adv_w = 128, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 608, .adv_w = 128, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 626, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 646, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 666, .adv_w = 128, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 681, .adv_w = 128, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 699, .adv_w = 128, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 717, .adv_w = 128, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 735, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 755, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 775, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 795, .adv_w = 128, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 813, .adv_w = 128, .box_w = 8, .box_h = 14, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 841, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 861, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 881, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 901, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 921, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 941, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 961, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 981, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1001, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1021, .adv_w = 128, .box_w = 5, .box_h = 14, .ofs_x = 2, .ofs_y = -3},
    {.bitmap_index = 1039, .adv_w = 128, .box_w = 6, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1060, .adv_w = 128, .box_w = 5, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1078, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 1090, .adv_w = 128, .box_w = 8, .box_h = 2, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 1094, .adv_w = 128, .box_w = 4, .box_h = 4, .ofs_x = 2, .ofs_y = 8},
    {.bitmap_index = 1098, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1112, .adv_w = 128, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1133, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1149, .adv_w = 128, .box_w = 7, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1170, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1186, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1206, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1226, .adv_w = 128, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1244, .adv_w = 128, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1266, .adv_w = 128, .box_w = 6, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1287, .adv_w = 128, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1308, .adv_w = 128, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1330, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1346, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1358, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1374, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1394, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1414, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1428, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1440, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1460, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1472, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1488, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1504, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1520, .adv_w = 128, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1542, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1554, .adv_w = 128, .box_w = 6, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1575, .adv_w = 128, .box_w = 2, .box_h = 14, .ofs_x = 3, .ofs_y = -3},
    {.bitmap_index = 1582, .adv_w = 128, .box_w = 6, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1603, .adv_w = 128, .box_w = 8, .box_h = 4, .ofs_x = 0, .ofs_y = 2}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
        {
                {
                        .range_start = 32, .range_length = 95, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY,
                        .glyph_id_start = 1, .unicode_list = 0, .glyph_id_ofs_list = 0, .list_length = 0
                }
        };



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

/*Store all the custom data of the font*/
static lv_font_fmt_txt_dsc_t font_dsc = {
        .glyph_bitmap = gylph_bitmap,
        .glyph_dsc = glyph_dsc,
        .cmaps = cmaps,
        .cmap_num = 1,
        .bpp = 2,

        .kern_scale = 0,
        .kern_dsc = 0,
        .kern_classes = 0,
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
const lv_font_t ubuntu_mono8 = {
        .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
//        .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
//        .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
        .line_height = 16,          /*The maximum line height required by the font*/
        .base_line = 4,             /*Baseline measured from the bottom of the line*/
};

#endif /*#if UBUNTU_MONO*/

