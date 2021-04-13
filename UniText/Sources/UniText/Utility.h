#ifndef UTILITY_H
#define UTILITY_H


#include "UniText/UniText.h"
#include "UniText/UTF8.h"

#include <stdint.h>


#define ___UNITEXT__UTF8__OCTATE_1_ID		0x00				// In bits: 0xxx-xxxx
#define ___UNITEXT__UTF8__OCTATE_2_ID		0xC0				// In bits: 110x-xxxx
#define ___UNITEXT__UTF8__OCTATE_3_ID		0xE0				// In bits: 1110-xxxx
#define ___UNITEXT__UTF8__OCTATE_4_ID		0xF0				// In bits: 1111-0xxx

#define ___UNITEXT__UTF8__OCTATE_1_AND		0x80				// In bits: 1000-0000
#define ___UNITEXT__UTF8__OCTATE_2_AND		0xE0				// In bits: 1110-0000
#define ___UNITEXT__UTF8__OCTATE_3_AND		0xF0				// In bits: 1111-0000
#define ___UNITEXT__UTF8__OCTATE_4_AND		0xF8				// In bits: 1111-1000

#define ___UNITEXT__UTF8__TAIL_OCTATE_ID	0x80				// In bits: 10xx-xxxx
#define ___UNITEXT__UTF8__TAIL_OCTATE_AND	0xC0				// In bits: 1100-0000

#define ___UNITEXT__UTF8__IS_OCTATE_1(X) \
	( ( (X) & ___UNITEXT__UTF8__OCTATE_1_AND) == ___UNITEXT__UTF8__OCTATE_1_ID)

#define ___UNITEXT__UTF8__IS_OCTATE_2(X) \
	( ( (X) & ___UNITEXT__UTF8__OCTATE_2_AND) == ___UNITEXT__UTF8__OCTATE_2_ID)

#define ___UNITEXT__UTF8__IS_OCTATE_3(X) \
	( ( (X) & ___UNITEXT__UTF8__OCTATE_3_AND) == ___UNITEXT__UTF8__OCTATE_3_ID)

#define ___UNITEXT__UTF8__IS_OCTATE_4(X) \
	( ( (X) & ___UNITEXT__UTF8__OCTATE_4_AND) == ___UNITEXT__UTF8__OCTATE_4_ID)

#define ___UNITEXT__UTF8__IS_TAIL_OCTATE(X) \
	( ( (X) & ___UNITEXT__UTF8__TAIL_OCTATE_AND) == ___UNITEXT__UTF8__TAIL_OCTATE_ID)

#define ___UNITEXT__UTF8__VALID_BYTE 	1
#define ___UNITEXT__UTF8__INVALID_BYTE 	2


uint32_t ___UniText__UTF8_GetNumberOfOctates(uint8_t octate);

// Returns number of octates if validation is successful, otherwise, 0
uint32_t ___UniText_UTF8_ValidateNextOctates(uint8_t 		*currentOctate, 
											 uint32_t 		currentPosition, 
											 const uint32_t byteArrayLength,
											 uint32_t 		*totalCharacterOctates
											);


#endif 	// UTILITY_H