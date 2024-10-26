#pragma once

///////////////////////////////////////////////////////////////////////////////
//////////////////////////////// INCLUDES /////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

#include <string>
#include <memory>
#include <iomanip>
#include <stdio.h>
#include <stdint.h>

///////////////////////////////////////////////////////////////////////////////
/////////////////////////// MACROS/DEFINITIONS ////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

// Byte number
#define ZERO                        0
#define ONE                         1
#define TWO                         2
#define THREE                       3
#define FOUR                        4
#define FIVE                        5
#define SIX                         6
#define SEVEN                       7
#define EIGHT                       8
#define NINE                        9
#define TEN                         10
#define ELEVEN                      11
#define TWELVE                      12
#define THIRTEEN                    13
#define FOURTEEN                    14
#define FIFTEEN                     15
#define SIXTEEN                     16
#define SEVENTEEN                   17
#define EIGHTEEN                    18
#define NINETEEN                    19
#define TWENTY                      20
#define TWENTY_ONE                  21
#define TWENTY_TWO                  22
#define TWENTY_THREE                23
#define TWENTY_FOUR                 24
#define TWENTY_FIVE                 25
#define TWENTY_SIX                  26
#define TWENTY_SEVEN                27
#define TWENTY_EIGHT                28
#define TWENTY_NINE                 29
#define THIRTY                      30
#define THIRTY_ONE                  31
#define THIRTY_TWO                  32
#define THIRTY_THREE                33
#define THIRTY_FOUR                 34
#define THIRTY_FIVE                 35
#define THIRTY_SIX                  36
#define THIRTY_SEVEN                37
#define THIRTY_EIGHT                38
#define THIRTY_NINE                 39
#define FORTY                       40
#define FORTY_ONE                   41
#define FORTY_TWO                   42
#define FORTY_THREE                 43
#define FORTY_FOUR                  44
#define FORTY_FIVE                  45
#define FORTY_SIX                   46
#define FORTY_SEVEN                 47
#define FORTY_EIGHT                 48
#define FORTY_NINE                  49
#define FIFTY                       50
#define FIFTY_ONE                   51
#define FIFTY_TWO                   52
#define FIFTY_THREE                 53
#define FIFTY_FOUR                  54
#define FIFTY_FIVE                  55
#define FIFTY_SIX                   56
#define FIFTY_SEVEN                 57
#define FIFTY_EIGHT                 58
#define FIFTY_NINE                  59
#define SIXTY                       60
#define SIXTY_ONE                   61
#define SIXTY_TWO                   62
#define SIXTY_THREE                 63
#define SIXTY_FOUR                  64
#define SIXTY_FIVE                  65
#define SIXTY_SIX                   66
#define SIXTY_SEVEN                 67
#define SIXTY_EIGHT                 68
#define SIXTY_NINE                  69
#define SEVENTY                     70
#define SEVENTY_ONE                 71
#define SEVENTY_TWO                 72
#define SEVENTY_THREE               73
#define SEVENTY_FOUR                74
#define SEVENTY_FIVE                75
#define SEVENTY_SIX                 76
#define SEVENTY_SEVEN               77
#define SEVENTY_EIGHT               78
#define SEVENTY_NINE                79
#define EIGHTY                      80
#define EIGHTY_ONE                  81
#define EIGHTY_TWO                  82
#define EIGHTY_THREE                83
#define EIGHTY_FOUR                 84
#define EIGHTY_FIVE                 85
#define EIGHTY_SIX                  86
#define EIGHTY_SEVEN                87
#define EIGHTY_EIGHT                88
#define EIGHTY_NINE                 89
#define NINTY                       90
#define NINTY_ONE                   91
#define NINTY_TWO                   92
#define NINTY_THREE                 93
#define NINTY_FOUR                  94
#define NINTY_FIVE                  95
#define NINTY_SIX                   96
#define NINTY_SEVEN                 97
#define NINTY_EIGHT                 98
#define NINTY_NINE                  99
#define ONE_HUNDRED                 100
#define ONE_HUNDRED_ONE             101
#define ONE_HUNDRED_TWO             102
#define ONE_HUNDRED_THREE           103
#define ONE_HUNDRED_FOUR            104
#define ONE_HUNDRED_FIVE            105
#define ONE_HUNDRED_SIX             106
#define ONE_HUNDRED_SEVEN           107
#define ONE_HUNDRED_EIGHT           108
#define ONE_HUNDRED_NINE            109
#define ONE_HUNDRED_TEN             110
#define ONE_HUNDRED_ELEVEN          111
#define ONE_HUNDRED_TWELVE          112
#define ONE_HUNDRED_THIRTEEN        113
#define ONE_HUNDRED_FOURTEEN        114
#define ONE_HUNDRED_FIFTEEN         115
#define ONE_HUNDRED_SIXTEEN         116
#define ONE_HUNDRED_SEVENTEEN       117
#define ONE_HUNDRED_EIGHTEEN        118
#define ONE_HUNDRED_NINETEEN        119
#define ONE_HUNDRED_TWENTY          120
#define ONE_HUNDRED_TWENTY_ONE      121
#define ONE_HUNDRED_TWENTY_TWO      122
#define ONE_HUNDRED_TWENTY_THREE    123
#define ONE_HUNDRED_TWENTY_FOUR     124
#define ONE_HUNDRED_TWENTY_FIVE     125
#define ONE_HUNDRED_TWENTY_SIX      126
#define ONE_HUNDRED_TWENTY_SEVEN    127
#define ONE_HUNDRED_TWENTY_EIGHT    128
#define ONE_HUNDRED_TWENTY_NINE     129
#define ONE_HUNDRED_THIRTY          130
#define ONE_HUNDRED_THIRTY_ONE      131
#define ONE_HUNDRED_THIRTY_TWO      132
#define ONE_HUNDRED_THIRTY_THREE    133
#define ONE_HUNDRED_THIRTY_FOUR     134
#define ONE_HUNDRED_THIRTY_FIVE     135
#define ONE_HUNDRED_THIRTY_SIX      136
#define ONE_HUNDRED_THIRTY_SEVEN    137
#define ONE_HUNDRED_THIRTY_EIGHT    138
#define ONE_HUNDRED_THIRTY_NINE     139
#define ONE_HUNDRED_FORTY           140
#define ONE_HUNDRED_FORTY_ONE       141
#define ONE_HUNDRED_FORTY_TWO       142
#define ONE_HUNDRED_FORTY_THREE     143
#define ONE_HUNDRED_FORTY_FOUR      144
#define ONE_HUNDRED_FORTY_FIVE      145
#define ONE_HUNDRED_FORTY_SIX       146
#define ONE_HUNDRED_FORTY_SEVEN     147
#define ONE_HUNDRED_FORTY_EIGHT     148
#define ONE_HUNDRED_FORTY_NINE      149
#define ONE_HUNDRED_FIFTY           150
#define ONE_HUNDRED_FIFTY_ONE       151
#define ONE_HUNDRED_FIFTY_TWO       152
#define ONE_HUNDRED_FIFTY_THREE     153
#define ONE_HUNDRED_FIFTY_FOUR      154
#define ONE_HUNDRED_FIFTY_FIVE      155
#define ONE_HUNDRED_FIFTY_SIX       156
#define ONE_HUNDRED_FIFTY_SEVEN     157
#define ONE_HUNDRED_FIFTY_EIGHT     158
#define ONE_HUNDRED_FIFTY_NINE      159
#define ONE_HUNDRED_SIXTY           160
#define ONE_HUNDRED_SIXTY_ONE       161
#define ONE_HUNDRED_SIXTY_TWO       162
#define ONE_HUNDRED_SIXTY_THREE     163
#define ONE_HUNDRED_SIXTY_FOUR      164
#define ONE_HUNDRED_SIXTY_FIVE      165
#define ONE_HUNDRED_SIXTY_SIX       166
#define ONE_HUNDRED_SIXTY_SEVEN     167
#define ONE_HUNDRED_SIXTY_EIGHT     168
#define ONE_HUNDRED_SIXTY_NINE      169
#define ONE_HUNDRED_SEVENTY         170
#define ONE_HUNDRED_SEVENTY_ONE     171
#define ONE_HUNDRED_SEVENTY_TWO     172
#define ONE_HUNDRED_SEVENTY_THREE   173
#define ONE_HUNDRED_SEVENTY_FOUR    174
#define ONE_HUNDRED_SEVENTY_FIVE    175
#define ONE_HUNDRED_SEVENTY_SIX     176
#define ONE_HUNDRED_SEVENTY_SEVEN   177
#define ONE_HUNDRED_SEVENTY_EIGHT   178
#define ONE_HUNDRED_SEVENTY_NINE    179
#define ONE_HUNDRED_EIGHTY          180
#define ONE_HUNDRED_EIGHTY_ONE      181
#define ONE_HUNDRED_EIGHTY_TWO      182
#define ONE_HUNDRED_EIGHTY_THREE    183
#define ONE_HUNDRED_EIGHTY_FOUR     184
#define ONE_HUNDRED_EIGHTY_FIVE     185
#define ONE_HUNDRED_EIGHTY_SIX      186
#define ONE_HUNDRED_EIGHTY_SEVEN    187
#define ONE_HUNDRED_EIGHTY_EIGHT    188
#define ONE_HUNDRED_EIGHTY_NINE     189
#define ONE_HUNDRED_NINTY           190
#define ONE_HUNDRED_NINTY_ONE       191
#define ONE_HUNDRED_NINTY_TWO       192
#define ONE_HUNDRED_NINTY_THREE     193
#define ONE_HUNDRED_NINTY_FOUR      194
#define ONE_HUNDRED_NINTY_FIVE      195
#define ONE_HUNDRED_NINTY_SIX       196
#define ONE_HUNDRED_NINTY_SEVEN     197
#define ONE_HUNDRED_NINTY_EIGHT     198
#define ONE_HUNDRED_NINTY_NINE      199
#define TWO_HUNDRED                 200
#define TWO_HUNDRED_ONE             201
#define TWO_HUNDRED_TWO             202
#define TWO_HUNDRED_THREE           203
#define TWO_HUNDRED_FOUR            204
#define TWO_HUNDRED_FIVE            205
#define TWO_HUNDRED_SIX             206
#define TWO_HUNDRED_SEVEN           207
#define TWO_HUNDRED_EIGHT           208
#define TWO_HUNDRED_NINE            209
#define TWO_HUNDRED_TEN             210
#define TWO_HUNDRED_ELEVEN          211
#define TWO_HUNDRED_TWELVE          212
#define TWO_HUNDRED_THIRTEEN        213
#define TWO_HUNDRED_FOURTEEN        214
#define TWO_HUNDRED_FIFTEEN         215
#define TWO_HUNDRED_SIXTEEN         216
#define TWO_HUNDRED_SEVENTEEN       217
#define TWO_HUNDRED_EIGHTEEN        218
#define TWO_HUNDRED_NINETEEN        219
#define TWO_HUNDRED_TWENTY          220
#define TWO_HUNDRED_TWENTY_ONE      221
#define TWO_HUNDRED_TWENTY_TWO      222
#define TWO_HUNDRED_TWENTY_THREE    223
#define TWO_HUNDRED_TWENTY_FOUR     224
#define TWO_HUNDRED_TWENTY_FIVE     225
#define TWO_HUNDRED_TWENTY_SIX      226
#define TWO_HUNDRED_TWENTY_SEVEN    227
#define TWO_HUNDRED_TWENTY_EIGHT    228
#define TWO_HUNDRED_TWENTY_NINE     229
#define TWO_HUNDRED_THIRTY          230
#define TWO_HUNDRED_THIRTY_ONE      231
#define TWO_HUNDRED_THIRTY_TWO      232
#define TWO_HUNDRED_THIRTY_THREE    233
#define TWO_HUNDRED_THIRTY_FOUR     234
#define TWO_HUNDRED_THIRTY_FIVE     235
#define TWO_HUNDRED_THIRTY_SIX      236
#define TWO_HUNDRED_THIRTY_SEVEN    237
#define TWO_HUNDRED_THIRTY_EIGHT    238
#define TWO_HUNDRED_THIRTY_NINE     239
#define TWO_HUNDRED_FORTY           240
#define TWO_HUNDRED_FORTY_ONE       241
#define TWO_HUNDRED_FORTY_TWO       242
#define TWO_HUNDRED_FORTY_THREE     243
#define TWO_HUNDRED_FORTY_FOUR      244
#define TWO_HUNDRED_FORTY_FIVE      245
#define TWO_HUNDRED_FORTY_SIX       246
#define TWO_HUNDRED_FORTY_SEVEN     247
#define TWO_HUNDRED_FORTY_EIGHT     248
#define TWO_HUNDRED_FORTY_NINE      249
#define TWO_HUNDRED_FIFTY           250
#define TWO_HUNDRED_FIFTY_ONE       251
#define TWO_HUNDRED_FIFTY_TWO       252
#define TWO_HUNDRED_FIFTY_THREE     253
#define TWO_HUNDRED_FIFTY_FOUR      254
#define TWO_HUNDRED_FIFTY_FIVE      255
#define TWO_HUNDRED_FIFTY_SIX       256
#define TWO_HUNDRED_SIXTY           260
#define TWO_HUNDRED_SIXTY_FIVE      265
#define TWO_HUNDRED_SEVENTY         270
#define TWO_HUNDRED_SEVENTY_FIVE    275
#define TWO_HUNDRED_EIGHTY          280
#define TWO_HUNDRED_EIGHTY_FIVE     285
#define TWO_HUNDRED_NINETY          290
#define TWO_HUNDRED_NINETY_FIVE     295
#define THREE_HUNDRED               300
#define THREE_HUNDRED_FIVE          305
#define THREE_HUNDRED_TEN           310
#define THREE_HUNDRED_FIFTEEN       315
#define THREE_HUNDRED_NINETEEN      319
#define THREE_HUNDRED_TWENTY        320
#define FIVE_HUNDRED                500
#define EIGHT_HUNDRED               800
#define ONE_THOUSAND                1000
#define TWO_THOUSAND                2000
#define THREE_THOUSAND              3000
#define FOUR_THOUSAND               4000
#define THREE_THOUSAND_SIX_HUNDRED  3600
#define THREE_THOUSAND_NEUN_HUNDRED 3900
#define FIVE_THOUSAND               5000
#define EIGHT_THOUSAND              8000
#define TEN_THOUSAND                10000
#define THIRTY_THOUSAND             30000

#define FIRST_BYTE                  ZERO
#define SECOND_BYTE                 ONE
#define THIRD_BYTE                  TWO
#define FOURTH_BYTE                 THREE
#define FIFTH_BYTE                  FOUR
#define SIXTH_BYTE                  FIVE
#define SEVENTH_BYTE                SIX
#define EIGHTH_BYTE                 SEVEN
#define NINTH_BYTE                  EIGHT
#define TENTH_BYTE                  NINE
#define ELEVENTH_BYTE               TEN
#define TWELFTH_BYTE                ELEVEN
#define THIRTEENTH_BYTE             TWELVE
#define FOURTEENTH_BYTE             THIRTEEN
#define FIFTEENTH_BYTE              FOURTEEN
#define SIXTEENTH_BYTE              FIFTEEN
#define SEVENTEENTH_BYTE            SIXTEEN
#define EIGHTEENTH_BYTE             SEVENTEEN
#define NINETEENTH_BYTE             EIGHTEEN
#define TWENTYTH_BYTE               NINETEEN
#define TWENTYFIRST_BYTE            TWENTY
#define TWENTY_FOURTH_BYTE          TWENTY_THREE
#define THIRTY_BYTES                THIRTY
#define THIRTY_SECOND_BYTE          THIRTY_ONE

#define ZERO_BYTES                  ZERO
#define ONE_BYTE                    ONE
#define TWO_BYTES                   TWO
#define THREE_BYTES                 THREE
#define FOUR_BYTES                  FOUR
#define FIVE_BYTES                  FIVE
#define SIX_BYTES                   SIX
#define SEVEN_BYTES                 SEVEN
#define EIGHT_BYTES                 EIGHT
#define TEN_BYTES                   TEN
#define FIFTEEN_BYTES               FIFTEEN
#define EIGHTEEN_BYTES              EIGHTEEN
#define TWENTY_BYTES                TWENTY
#define THIRTY_TWO_BYTES            THIRTY_TWO
#define FIFTY_BYTES                 FIFTY
#define FORTY_BYTES                 FORTY
#define SIXTY_FOUR_BYTES            SIXTY_FOUR
#define ONE_HUNDRED_BYTES           ONE_HUNDRED
#define EIGHT_HUNDRED_BYTES         EIGHT_HUNDRED
#define ONE_THOUSAND_BYTES          ONE_THOUSAND
#define TWO_THOUSAND_BYTES          TWO_THOUSAND
#define THREE_THOUSAND_BYTES        THREE_THOUSAND
#define FOUR_THOUSAND_BYTES         FOUR_THOUSAND
#define FIVE_THOUSAND_BYTES         FIVE_THOUSAND
#define EIGHT_THOUSAND_BYTES        EIGHT_THOUSAND
#define THIRTY_THOUSAND_BYTES       THIRTY_THOUSAND

#define ONE_BIT                     ONE
#define TWO_BITS                    TWO
#define THREE_BITS                  THREE
#define FOUR_BITS                   FOUR
#define FIVE_BITS                   FIVE
#define SIX_BITS                    SIX
#define SEVEN_BITS                  SEVEN
#define NINE_BITS                   NINE
#define ELEVEN_BITS                 ELEVEN
#define EIGHTEEN_BITS               EIGHTEEN
#define TWENTY_NINE_BITS            TWENTY_NINE

#define FIRST_BIT                   ONE
#define SECOND_BIT                  TWO
#define THIRD_BIT                   FOUR
#define FOURTH_BIT                  EIGHT
#define FIFTH_BIT                   SIXTEEN
#define SIXTH_BIT                   THIRTY_TWO
#define SEVENTH_BIT                 SIXTY_FOUR
#define EIGHTH_BIT                  ONE_HUNDRED_TWENTY_EIGHT

#define EIGHT_BITS                  EIGHT
#define SIXTEEN_BITS                SIXTEEN
#define TWENTY_FOUR_BITS            TWENTY_FOUR

// bit masks
#define MASK_BIT_POS_0              FIRST_BIT
#define MASK_BIT_POS_1              SECOND_BIT
#define MASK_BIT_POS_2              THIRD_BIT
#define MASK_BIT_POS_3              FOURTH_BIT
#define MASK_BIT_POS_4              FIFTH_BIT
#define MASK_BIT_POS_5              SIXTH_BIT
#define MASK_BIT_POS_6              SEVENTH_BIT
#define MASK_BIT_POS_7              EIGHTH_BIT

#define REQ_BUF_LEN                 ONE_BYTE

#define MASK_LOW_BYTE               0x00FF
#define MASK_HIGH_BYTE              0xFF00

///////////////////////////////////////////////////////////////////////////////
/////////////////////////// CLASSES/STRUCTURES ////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

uint8_t     AsciToint                (const char v_asci);
uint64_t    Pack8In64Bits            (const uint8_t * const vData);
uint8_t     HexInAsciToInt           (const char vHexInAsci [TWO]);
void        Unpack32In8Bits          (const uint32_t vValue, uint8_t * const vData);
std::string ConvertBinaryToHexString (std::string_view vData);
std::string ConvertHexStringToBinary (std::string_view vData);

template <class... TArgs>
std::string Format (const std::string & v_format, const TArgs &... v_args)
{
    // Based on https://stackoverflow.com/a/26221725
    // Find buffer size needed, extra space for trailing '\0'

    size_t size = snprintf (nullptr, FIRST_BYTE, v_format.c_str (), v_args...) + ONE_BYTE;
    std::unique_ptr <char []> buf (new char [size]);
    size_t written = snprintf (buf.get (), size, v_format.c_str (), v_args...);
    if (written <= ZERO) { return {}; }

    return std::string (buf.get (), buf.get () + size - ONE_BYTE);     // remove '\0'
}

///////////////////////////////////////////////////////////////////////////////
/////////////////////////////// END OF FILE ///////////////////////////////////
///////////////////////////////////////////////////////////////////////////////