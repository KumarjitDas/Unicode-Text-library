#ifndef UTF8_UTILITY_H
#define UTF8_UTILITY_H

#include "defines.h"
#include "common/export.h"
#include "common/defines.h"
#include "common/standard_includes.h"

uint32_t UTF8GetNumberOfOctates(uint8_t octate);

// Returns number of octates if validation is successful, otherwise, 0
uint32_t UTF8ValidateNextOctates(uint8_t        *currentOctate, 
                                 uint32_t        currentPosition, 
                                 const uint32_t  byteArrayLength,
                                 uint32_t       *totalCharacterOctates
                                );

#endif     // UTF8_UTILITY_H