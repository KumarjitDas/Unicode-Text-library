#ifndef UTF8_H
#define UTF8_H

#include "defines.h"
#include "common/export.h"
#include "common/defines.h"
#include "common/standard_includes.h"

// invalidBytes: what to do with the invalid bytes
uint32_t UNITEXT_EXPORT
UTF8CountCharactersEncoded(uint8_t *byte_array, const uint32_t  length, const int invalid_bytes);

// invalidBytes: what to do with the invalid bytes
uint32_t UNITEXT_EXPORT
UTF8CountCharactersDecoded(uint8_t *byte_array, const uint32_t  length, const int invalid_bytes);

// invalidBytes: what to do with the invalid bytes
uint32_t UNITEXT_EXPORT
UTF8CountCharacters(uint8_t *byte_array, const uint32_t  length, const int invalid_bytes, const int is_encoded);

#endif    // UTF8_H