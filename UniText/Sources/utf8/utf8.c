#include "utf8/utility.h"
#include "utf8/utf8.h"

uint32_t UTF8CountCharactersEncoded(uint8_t *byte_array, const uint32_t  length, const int invalid_bytes)
{
	uint32_t character_count = 0;
	uint32_t total_octates = 0;
	uint32_t actual_octates = 0;

	for(uint32_t i = 0; i < length;)
	{
		actual_octates = UTF8ValidateNextOctates(byte_array + i, i, length, &total_octates);

		if(actual_octates == 0 || actual_octates != total_octates)
		{
			if(invalid_bytes == UTF8_STOP_AT_INVALID_BYTE)
				break;
			if(invalid_bytes == UTF8_SKIP_INVALID_BYTE)
			{
				i++;
				continue;
			}
			if(invalid_bytes == UTF8_INCLUDE_INVALID_BYTE)
				character_count++;
		}
		else character_count++;

		i += actual_octates == 0 ? 1 : actual_octates;
	}

	return character_count;
}