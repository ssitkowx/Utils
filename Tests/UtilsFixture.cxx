
///////////////////////////////////////////////////////////////////////////////
//////////////////////////////// INCLUDES /////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include "Utils.hpp"
#include "UtilsFixture.hxx"

///////////////////////////////////////////////////////////////////////////////
//////////////////////////////// FUNCTIONS ////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

TEST_F (UtilsFixture, CheckAsciTointPositiveConversion)
{
    std::cout << Module << " CheckAsciTointPositiveConversion\n";

    for (uint8_t charNum = 0; charNum < 24; charNum++)
    {
        const int input  = AsciToint (AsciToInt.ConversionResult.Positive [charNum].first);
        const int output = AsciToInt.ConversionResult.Positive [charNum].second;

        std::cout << Module << " Input asci: " << AsciToInt.ConversionResult.Positive [charNum].first << ". Output int " << output  << std::endl;
        EXPECT_EQ (input, output);
    }
}

TEST_F (UtilsFixture, CheckAsciTointNegativeConversion)
{
    std::cout << Module << " CheckAsciTointNegativeConversion\n";

    for (uint8_t charNum = 0; charNum < 10; charNum++)
    {
        const int input  = AsciToint (AsciToInt.ConversionResult.Negative [charNum]);
        const int output = 0;

        std::cout << Module << " Input asci: " << AsciToInt.ConversionResult.Negative [charNum] << ". Output int " << output << std::endl;
        EXPECT_EQ (input, output);
    }
}

TEST_F (UtilsFixture, CheckHexInAsciToIntPositiveConversion)
{
    std::cout << Module << "CheckHexInAsciToIntPositiveConversion\n";

    for (uint8_t charNum = 0; charNum < 255; charNum++)
    {
        const char hex [2] = { HexInAsciToIntConversionResult.Positive [charNum].first.at (2), HexInAsciToIntConversionResult.Positive [charNum].first.at (3) };
        const int  input   = HexInAsciToInt (hex);
        const int  output  = HexInAsciToIntConversionResult.Positive [charNum].second;

        std::cout << Module << " Input asci: 0x" << hex [0] << hex [1] << ". Output int " << output << std::endl;
        EXPECT_EQ (input, output);
    }
}

TEST_F (UtilsFixture, CheckHexInAsciToIntNegativeConversion)
{
    std::cout << Module << " CheckHexInAsciToIntNegativeConversion";

    for (uint8_t charNum = 0; charNum < 10; charNum++)
    {
        char      hex [2] = { HexInAsciToIntConversionResult.Negative [charNum].at (2), HexInAsciToIntConversionResult.Negative [charNum].at (3) };
        const int input   = HexInAsciToInt (hex);
        const int output  = 0;

        std::cout << Module << " Input asci: 0x" << hex [0] << hex [1] <<". Output int " << output << std::endl;
        EXPECT_EQ (input, output);
    }
}

TEST_F (UtilsFixture, ConvertStringToBinaryAndReverse)
{
    std::cout << Module << " ConvertHexStringToBinary\n";

    std::string_view  string     = "\\x12\\x10\\x08\\x5a\\x10\\xa6\\xff\\xff\\xff\\xff\\xff\\xff\\xff\\xff\\x01\\x18\\x8e\\x02";
    const std::string binaryData = ConvertHexStringToBinary (string);
    const std::string stringData = ConvertBinaryToHexString (binaryData);

    std::cout << Module << " binary string: " << stringData << std::endl;
    EXPECT_EQ (string, stringData);
}

///////////////////////////////////////////////////////////////////////////////
/////////////////////////////// END OF FILE ///////////////////////////////////
///////////////////////////////////////////////////////////////////////////////