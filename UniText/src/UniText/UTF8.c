#include "UniText/UTF8.h"
#include "Utility.h"


uint32_t UniText_UTF8_CountCharacters(uint8_t 			*byteArray, 
									  const uint32_t 	length, 
									  const int 		invalidBytes
									 )
{
	uint32_t characterCount = 0;
	uint32_t totalOctates = 0;
	uint32_t actualOctates = 0;

	for(uint32_t i = 0; i < length;)
	{
		actualOctates = ___UniText_UTF8_ValidateNextOctates(byteArray + i, i, length, &totalOctates);

		if(actualOctates == 0 || actualOctates != totalOctates)
		{
			if(invalidBytes == UNITEXT__UTF8__STOP_AT_INVALID_BYTE)
				break;
			if(invalidBytes == UNITEXT__UTF8__SKIP_INVALID_BYTE)
			{
				i++;
				continue;
			}
			if(invalidBytes == UNITEXT__UTF8__INCLUDE_INVALID_BYTE)
				characterCount++;
		}
		else
		{
			characterCount++;
		}

		i += actualOctates == 0 ? 1 : actualOctates;
	}

	return characterCount;
}