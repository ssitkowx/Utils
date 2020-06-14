
///////////////////////////////////////////////////////////////////////////////
//////////////////////////////// INCLUDES /////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include "Utils.h"
#include "UtilsFixture.hxx"

///////////////////////////////////////////////////////////////////////////////
//////////////////////////////// FUNCTIONS ////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

TEST_F (UtilsFixture, CheckAsciTointPositiveConversion)
{
    std::cout << "CheckAsciTointPositiveConversion" << std::endl;

    for (uint8_t charNum = ZERO; charNum < TWENTY_TWO; charNum++)
    {
        int input  = AsciToint (AsciToInt.ConversionResult.Positive [charNum].first);
        int output = AsciToInt.ConversionResult.Positive [charNum].second;

        std::cout << "Input asci: " << AsciToInt.ConversionResult.Positive [charNum].first << " Output int " << output << std::endl;
        EXPECT_EQ (input, output);
    }
}

TEST_F (UtilsFixture, CheckAsciTointNegativeConversion)
{
    std::cout << "CheckAsciTointNegativeConversion" << std::endl;

    for (uint8_t charNum = ZERO; charNum < TEN; charNum++)
    {
        int input  = AsciToint (AsciToInt.ConversionResult.Negative [charNum]);
        int output = ZERO;

        std::cout << "Input asci: " << AsciToInt.ConversionResult.Negative [charNum] << " Output int " << output << std::endl;
        EXPECT_EQ (input, output);
    }
}

TEST_F (UtilsFixture, CheckHexInAsciToIntPositiveConversion)
{
    std::cout << "CheckHexInAsciToIntPositiveConversion" << std::endl;

    for (uint8_t charNum = ZERO; charNum < TWO_HUNDRED_FIFTY_FIVE; charNum++)
    {
        char hex [TWO] = { HexInAsciToIntConversionResult.Positive [charNum].first.at (TWO), HexInAsciToIntConversionResult.Positive [charNum].first.at (THREE) };
        int input  = HexInAsciToInt (hex);
        int output = HexInAsciToIntConversionResult.Positive [charNum].second;

        std::cout << "Input asci: 0x" << hex [ZERO] << hex [ONE] << " Output int " << output << std::endl;
        EXPECT_EQ (input, output);
    }
}

TEST_F (UtilsFixture, CheckHexInAsciToIntNegativeConversion)
{
    std::cout << "CheckHexInAsciToIntNegativeConversion" << std::endl;

    for (uint8_t charNum = ZERO; charNum < TEN; charNum++)
    {
        char hex [TWO] = { HexInAsciToIntConversionResult.Negative [charNum].at (TWO), HexInAsciToIntConversionResult.Negative [charNum].at (THREE) };
        int input  = HexInAsciToInt (hex);
        int output = ZERO;

        std::cout << "Input asci: 0x" << hex [ZERO] << hex [ONE] << " Output int " << output << std::endl;
        EXPECT_EQ (input, output);
    }
}

///////////////////////////////////////////////////////////////////////////////
/////////////////////////////// END OF FILE ///////////////////////////////////
///////////////////////////////////////////////////////////////////////////////