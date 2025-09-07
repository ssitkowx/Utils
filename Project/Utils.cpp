
///////////////////////////////////////////////////////////////////////////////
//////////////////////////////// INCLUDES /////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

#include "Utils.hpp"

///////////////////////////////////////////////////////////////////////////////
//////////////////////////////// FUNCTIONS ////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

uint8_t AsciToint (const char v_asci)
{
    if (v_asci >= '0' && v_asci <= '9') return v_asci - '0';
    if (v_asci >= 'A' && v_asci <= 'F') return v_asci - 'A' + 10;
    if (v_asci >= 'a' && v_asci <= 'f') return v_asci - 'a' + 10;

    return 0;
}

uint64_t Pack8In64Bits (const uint8_t * const vData)
{
    return static_cast <uint64_t> ((uint64_t)*vData +
                                  ((uint64_t)*(vData + 1) << 8)  +
                                  ((uint64_t)*(vData + 2) << 16) +
                                  ((uint64_t)*(vData + 3) << 24) +
                                  ((uint64_t)*(vData + 4) << 32) +
                                  ((uint64_t)*(vData + 5) << 40) +
                                  ((uint64_t)*(vData + 6) << 48) +
                                  ((uint64_t)*(vData + 7) << 56));
}

uint8_t HexInAsciToInt (const char v_hexInAsci [2])
{
    char lowByte  = AsciToint (v_hexInAsci [1]);
    if (lowByte > 15) { return 0; }

    char highByte = AsciToint (v_hexInAsci [0]);
    if (highByte > 15) { return 0; }

    return ((highByte << 4) + lowByte);
}

void Unpack32In8Bits (const uint32_t vValue, uint8_t * const vData)
{
    *(vData)     = ((vValue >> 0)  & 0xFF);
    *(vData + 1) = ((vValue >> 8)  & 0xFF);
    *(vData + 2) = ((vValue >> 16) & 0xFF);
    *(vData + 3) = ((vValue >> 24) & 0xFF);
}

std::string ConvertBinaryToHexString (std::string_view vData)
{
    std::ostringstream stream;
    for (unsigned char number : vData)
    {
        stream << "\\x" << std::hex << std::setw (2) << std::setfill ('0') << (int)number;
    }
    return stream.str ();
}

std::string ConvertHexStringToBinary (std::string_view vData)
{
    std::string binary;
    binary.reserve (vData.size() / 4);

    for (size_t i = 0; i + 3 < vData.size(); )
    {
        if (vData[i] == '\\' && vData[i+1] == 'x')
        {
            std::string hexByte = std::string (vData.substr (i + 2, 2));
            char        byte    = static_cast<char>(std::stoi(hexByte, nullptr, 16));
            binary.push_back (byte);
            i += 4;
        }
        else { ++i; }
    }

    return binary;
}


///////////////////////////////////////////////////////////////////////////////
/////////////////////////////// END OF FILE ///////////////////////////////////
///////////////////////////////////////////////////////////////////////////////