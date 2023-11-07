
///////////////////////////////////////////////////////////////////////////////
//////////////////////////////// INCLUDES /////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

#include "Utils.h"

///////////////////////////////////////////////////////////////////////////////
//////////////////////////////// FUNCTIONS ////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

uint8_t AsciToint (const char v_asci)
{
    if (v_asci >= '0' && v_asci <= '9') return v_asci - '0';
    if (v_asci >= 'A' && v_asci <= 'F') return v_asci - 'A' + 10;
    if (v_asci >= 'a' && v_asci <= 'f') return v_asci - 'a' + 10;

    return ZERO;
}

uint64_t Pack8In64Bits (const uint8_t * const vData)
{
    return static_cast <uint64_t> ((uint64_t)*vData +
                                  ((uint64_t)*(vData + ONE)   << EIGHT)       +
                                  ((uint64_t)*(vData + TWO)   << SIXTEEN)     +
                                  ((uint64_t)*(vData + THREE) << TWENTY_FOUR) +
                                  ((uint64_t)*(vData + FOUR)  << THIRTY_TWO)  +
                                  ((uint64_t)*(vData + FIVE)  << FORTY)       +
                                  ((uint64_t)*(vData + SIX)   << FORTY_EIGHT) +
                                  ((uint64_t)*(vData + SEVEN) << FIFTY_SIX));
}

uint8_t HexInAsciToInt (const char v_hexInAsci [TWO])
{
    char lowByte  = AsciToint (v_hexInAsci [SECOND_BYTE]);
    if (lowByte > FIFTEEN) { return ZERO; }

    char highByte = AsciToint (v_hexInAsci [FIRST_BYTE]);
    if (highByte > FIFTEEN) { return ZERO; }

    return ((highByte << FOUR_BITS) + lowByte);
}

void Unpack32In8Bits (const uint32_t vValue, uint8_t * const vData)
{
    *(vData)         = ((vValue >> ZERO)        & 0xFF);
    *(vData + ONE)   = ((vValue >> EIGHT)       & 0xFF);
    *(vData + TWO)   = ((vValue >> SIXTEEN)     & 0xFF);
    *(vData + THREE) = ((vValue >> TWENTY_FOUR) & 0xFF);
}

///////////////////////////////////////////////////////////////////////////////
/////////////////////////////// END OF FILE ///////////////////////////////////
///////////////////////////////////////////////////////////////////////////////