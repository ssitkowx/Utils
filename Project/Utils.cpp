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

uint8_t HexInAsciToInt (const char v_hexInAsci [TWO])
{
    char lowByte  = AsciToint (v_hexInAsci [SECOND_BYTE]);
    if ((lowByte < ZERO) || (lowByte > FIFTEEN)) return ZERO;

    char highByte = AsciToint (v_hexInAsci [FIRST_BYTE]);
    if ((highByte < ZERO) || (highByte > FIFTEEN)) return ZERO;

    return ((highByte << FOUR_BITS) + lowByte);
}

///////////////////////////////////////////////////////////////////////////////
/////////////////////////////// END OF FILE ///////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

