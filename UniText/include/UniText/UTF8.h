#ifndef UTF8_H
#define UTF8_H


#include "unitext_export.h"
#include <stdint.h>


#define UNITEXT__UTF8__STOP_AT_INVALID_BYTE 	0
#define UNITEXT__UTF8__INCLUDE_INVALID_BYTE 	1
#define UNITEXT__UTF8__SKIP_INVALID_BYTE		2


// invalidBytes: what to do with the invalid bytes
uint32_t UNITEXT_EXPORT UniText_UTF8_CountCharacters(uint8_t 		*byteArray, 
													 const uint32_t length, 
													 const int 		invalidBytes
													 );


#endif	// UTF8_H