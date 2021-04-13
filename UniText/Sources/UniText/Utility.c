#include "Utility.h"



uint32_t ___UniText__UTF8_GetNumberOfOctates(uint8_t octate)
{
	return ___UNITEXT__UTF8__IS_OCTATE_1(octate) ? 1 :
		   ___UNITEXT__UTF8__IS_OCTATE_2(octate) ? 2 :
		   ___UNITEXT__UTF8__IS_OCTATE_3(octate) ? 3 :
		   ___UNITEXT__UTF8__IS_OCTATE_4(octate) ? 4 : 0;
}


uint32_t ___UniText_UTF8_ValidateNextOctates(uint8_t 		*currentOctate, 
											 uint32_t 		currentPosition, 
											 const uint32_t byteArrayLength,
											 uint32_t 		*totalCharacterOctates
											)
{
	if(currentPosition >= byteArrayLength)
		return 0;

	*totalCharacterOctates = ___UniText__UTF8_GetNumberOfOctates(*currentOctate);
	if(*totalCharacterOctates <= 1)
		return *totalCharacterOctates;

	uint32_t actualOctates = *totalCharacterOctates;

	for(uint32_t i = 1; i < *totalCharacterOctates; i++)
		if( (currentPosition + i) >= byteArrayLength ||
		   !___UNITEXT__UTF8__IS_TAIL_OCTATE(currentOctate[i]) )
			actualOctates--;

	return actualOctates;
}