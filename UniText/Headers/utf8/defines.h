#ifndef UTF8_DIFINES_H
#define UTF8_DIFINES_H

#include "common/defines.h"

#define UTF8_STOP_AT_INVALID_BYTE   0
#define UTF8_INCLUDE_INVALID_BYTE   1
#define UTF8_SKIP_INVALID_BYTE      2

#define UTF8_OCTATE_1_ID        0x00                // In bits: 0xxx-xxxx
#define UTF8_OCTATE_2_ID        0xC0                // In bits: 110x-xxxx
#define UTF8_OCTATE_3_ID        0xE0                // In bits: 1110-xxxx
#define UTF8_OCTATE_4_ID        0xF0                // In bits: 1111-0xxx

#define UTF8_OCTATE_1_AND       0x80                // In bits: 1000-0000
#define UTF8_OCTATE_2_AND       0xE0                // In bits: 1110-0000
#define UTF8_OCTATE_3_AND       0xF0                // In bits: 1111-0000
#define UTF8_OCTATE_4_AND       0xF8                // In bits: 1111-1000

#define UTF8_TAIL_OCTATE_ID     0x80                // In bits: 10xx-xxxx
#define UTF8_TAIL_OCTATE_AND    0xC0                // In bits: 1100-0000

#define UTF8_IS_OCTATE_1(X)     (((X) & UTF8_OCTATE_1_AND) == UTF8_OCTATE_1_ID)
#define UTF8_IS_OCTATE_2(X)     (((X) & UTF8_OCTATE_2_AND) == UTF8_OCTATE_2_ID)
#define UTF8_IS_OCTATE_3(X)     (((X) & UTF8_OCTATE_3_AND) == UTF8_OCTATE_3_ID)
#define UTF8_IS_OCTATE_4(X)     (((X) & UTF8_OCTATE_4_AND) == UTF8_OCTATE_4_ID)
#define UTF8_IS_TAIL_OCTATE(X)  (((X) & UTF8_TAIL_OCTATE_AND) == UTF8_TAIL_OCTATE_ID)

#define UTF8_VALID_BYTE    TRUE
#define UTF8_INVALID_BYTE  FALSE

#endif    // UTF8_DIFINES_H