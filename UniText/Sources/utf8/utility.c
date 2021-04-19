#include "utf8/utility.h"

uint32_t UTF8GetNumberOfOctates(uint8_t octate)
{
    return UTF8_IS_OCTATE_1(octate) ? 1 :
           UTF8_IS_OCTATE_2(octate) ? 2 :
           UTF8_IS_OCTATE_3(octate) ? 3 :
           UTF8_IS_OCTATE_4(octate) ? 4 : 0;
}

uint32_t UTF8ValidateNextOctates(uint8_t        *currentOctate, 
                                 uint32_t        currentPosition, 
                                 const uint32_t  byteArrayLength,
                                 uint32_t       *totalCharacterOctates
                                )
{
    if(currentPosition >= byteArrayLength)
        return 0;

    *totalCharacterOctates = UTF8GetNumberOfOctates(*currentOctate);
    if(*totalCharacterOctates <= 1)
        return *totalCharacterOctates;

    uint32_t actualOctates = *totalCharacterOctates;

    for(uint32_t i = 1; i < *totalCharacterOctates; i++)
        if( (currentPosition + i) >= byteArrayLength ||
           !UTF8_IS_TAIL_OCTATE(currentOctate[i]) )
            actualOctates--;

    return actualOctates;
}