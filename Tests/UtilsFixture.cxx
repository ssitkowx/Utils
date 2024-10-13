
///////////////////////////////////////////////////////////////////////////////
//////////////////////////////// INCLUDES /////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include "Utils.h"
#include "LoggerHw.h"
#include "UtilsFixture.hxx"

///////////////////////////////////////////////////////////////////////////////
//////////////////////////////// FUNCTIONS ////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

TEST_F (UtilsFixture, CheckAsciTointPositiveConversion)
{
    LOGW (Module, "CheckAsciTointPositiveConversion");

    for (uint8_t charNum = ZERO; charNum < TWENTY_TWO; charNum++)
    {
        const int input  = AsciToint (AsciToInt.ConversionResult.Positive [charNum].first);
        const int output = AsciToInt.ConversionResult.Positive [charNum].second;

        LOGD (Module, "Input asci:", AsciToInt.ConversionResult.Positive [charNum].first, ". Output int ", output);
        EXPECT_EQ (input, output);
    }
}

TEST_F (UtilsFixture, CheckAsciTointNegativeConversion)
{
    LOGW (Module, "CheckAsciTointNegativeConversion");

    for (uint8_t charNum = ZERO; charNum < TEN; charNum++)
    {
        const int input  = AsciToint (AsciToInt.ConversionResult.Negative [charNum]);
        const int output = ZERO;

        LOGD (Module, "Input asci:", AsciToInt.ConversionResult.Negative [charNum], ". Output int ", output);
        EXPECT_EQ (input, output);
    }
}

TEST_F (UtilsFixture, CheckHexInAsciToIntPositiveConversion)
{
    LOGW (Module, "CheckHexInAsciToIntPositiveConversion");

    for (uint8_t charNum = ZERO; charNum < TWO_HUNDRED_FIFTY_FIVE; charNum++)
    {
        const char hex [TWO] = { HexInAsciToIntConversionResult.Positive [charNum].first.at (TWO), HexInAsciToIntConversionResult.Positive [charNum].first.at (THREE) };
        const int  input     = HexInAsciToInt (hex);
        const int  output    = HexInAsciToIntConversionResult.Positive [charNum].second;

        LOGD (Module, "Input asci: 0x", hex [ZERO] , hex [ONE], ". Output int ", output);
        EXPECT_EQ (input, output);
    }
}

TEST_F (UtilsFixture, CheckHexInAsciToIntNegativeConversion)
{
    LOGW (Module, "CheckHexInAsciToIntNegativeConversion");

    for (uint8_t charNum = ZERO; charNum < TEN; charNum++)
    {
        char hex [TWO] = { HexInAsciToIntConversionResult.Negative [charNum].at (TWO), HexInAsciToIntConversionResult.Negative [charNum].at (THREE) };
        const  int input  = HexInAsciToInt (hex);
        const  int output = ZERO;

        LOGD (Module, "Input asci: 0x", hex [ZERO] , hex [ONE], ". Output int ", output);
        EXPECT_EQ (input, output);
    }
}

TEST_F (UtilsFixture, ConvertStringToBinaryAndReverse)
{
    LOGW (Module, "ConvertStringToBinary");

    std::string_view string = "\\x12\\x10\\x08\\x5a\\x10\\xa6\\xff\\xff\\xff\\xff\\xff\\xff\\xff\\xff\\x01\\x18\\x8e\\x02";
    const std::string binaryData = ConvertStringToBinary (string);
    const std::string stringData = ConvertBinaryToString (binaryData);

    LOGI      (Module, "binary string: ", stringData);
    EXPECT_EQ (string, stringData);
}

///////////////////////////////////////////////////////////////////////////////
/////////////////////////////// END OF FILE ///////////////////////////////////
///////////////////////////////////////////////////////////////////////////////