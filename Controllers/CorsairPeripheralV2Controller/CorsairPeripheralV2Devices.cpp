#include "CorsairPeripheralV2Devices.h"

/*-------------------------------------------------------------------------*\
|  Corsair Key Values                                                       |
\*-------------------------------------------------------------------------*/

std::vector<unsigned int> corsair_full_size_values =
{
    /* ESC          F1    F2    F3    F4    F5    F6    F7    F8    F9   F10   F11   F12   PRSC  SCLK  PSBK                         */
        41,         58,   59,   60,   61,   62,   63,   64,   65,   66,   67,   68,   69,   70,   71,   72,
    /* BKTK    1     2     3     4     5     6     7     8     9     0     -     =   BSPC  INS   HOME  PGUP  NMLK  NMDV  NMTM  NMMI */
        53,   30,   31,   32,   33,   34,   35,   36,   37,   38,   39,   45,   46,   42,   73,   74,   75,   83,   84,   85,   86,
    /* TAB     Q     W     E     R     T     Y     U     I     O     P     [     ]     \   DEL   END   PGDN  NM7   NM8   NM9   NMPL */
        43,   20,   26,    8,   21,   23,   28,   24,   12,   18,   19,   47,   48,   49,   76,   77,   78,   95,   96,   97,   87,
    /* CPLK    A     S     D     F     G     H     J     K     L     ;     "     #   ENTR                    NM4   NM5   NM6        */
        57,    4,   22,    7,    9,   10,   11,   13,   14,   15,   51,   52,   50,   40,                     92,   93,   94,
    /* LSFT  ISO\    Z     X     C     V     B     N     M     ,     .     /   RSFT              ARWU        NM1   NM2   NM3   NMER */
       106,  100,   29,   27,    6,   25,    5,   17,   16,   54,   55,   56,  110,               82,         89,   90,   91,   88,
    /* LCTL  LWIN  LALT               SPC              RALT  RFNC  RMNU  RCTL              ARWR  ARWD  ARWR  NM0         NMPD       */
       105,  108,  107,               44,              111,  122,  101,  109,               80,   81,   79,   98,         99,
};

/*-------------------------------------------------------------------------*\
|  KEYMAPS                                                                  |
\*-------------------------------------------------------------------------*/
keyboard_keymap_overlay_values corsair_K60_layout
{
    KEYBOARD_SIZE::KEYBOARD_SIZE_FULL,
    {
        corsair_full_size_values,
        {
            /* Add more regional layout fixes here */
        }
    },
    {
        /*---------------------------------------------------------------------------------------------------------*\
        | Edit Keys                                                                                                 |
        |   Zone,   Row,    Column,     Value,      Key,                        OpCode,                             |
        \*---------------------------------------------------------------------------------------------------------*/
    }
};

/*-------------------------------------------------------------------------*\
|  CORSAIR DEVICES                                                          |
\*-------------------------------------------------------------------------*/

/*-------------------------------------------------------------*\
|  Corsair Dark Core SE 1B1C:1B4B                               |
|                                                               |
|  Zone "Scroll Wheel"                                          |
|       Single                                                  |
|                                                               |
|  Zone "Side Buttons"                                          |
|       Linear                                                  |
|       1 Row, 4 Columns                                        |
|                                                               |
|  Zone "Rear Left"                                             |
|       Single                                                  |
|                                                               |
|  Zone "Logo"                                                  |
|       Single                                                  |
|                                                               |
|  Zone "Rear Right"                                            |
|       Single                                                  |
|                                                               |
|  Zone "DPI & Indicator"                                       |
|       Linear                                                  |
|       1 Row, 4 Columns                                        |
\*-------------------------------------------------------------*/
static const corsair_v2_zone dark_core_se_scroll_zone =
{
    "Scroll Wheel",
    ZONE_TYPE_SINGLE,
    1,
    1
};

static const corsair_v2_zone dark_core_se_button_zone =
{
    "Side Buttons",
    ZONE_TYPE_LINEAR,
    1,
    4
};

static const corsair_v2_zone dark_core_se_left_zone =
{
    "Rear Left",
    ZONE_TYPE_SINGLE,
    1,
    1
};

static const corsair_v2_zone dark_core_se_logo_zone =
{
    "Logo",
    ZONE_TYPE_SINGLE,
    1,
    1
};

static const corsair_v2_zone dark_core_se_right_zone =
{
    "Rear Right",
    ZONE_TYPE_SINGLE,
    1,
    1
};

static const corsair_v2_zone dark_core_se_dpi_zone =
{
    "DPI & Indicator Zone",
    ZONE_TYPE_LINEAR,
    1,
    4
};

static const corsair_v2_device dark_core_se_device =
{
    CORSAIR_DARK_CORE_RGB_PID,
    DEVICE_TYPE_MOUSE,
    1,
    12,
    {
        &dark_core_se_scroll_zone,
        &dark_core_se_button_zone,
        &dark_core_se_left_zone,
        &dark_core_se_logo_zone,
        &dark_core_se_right_zone,
        &dark_core_se_dpi_zone
    },
    nullptr
};

/*-------------------------------------------------------------*\
|  Corsair Dark Core Pro SE 1B1C:1B7E                           |
|                                                               |
|  Zone "Scroll Wheel"                                          |
|       Single                                                  |
|                                                               |
|  Zone "Side Buttons"                                          |
|       Linear                                                  |
|       1 Row, 4 Columns                                        |
|                                                               |
|  Zone "Rear Left"                                             |
|       Single                                                  |
|                                                               |
|  Zone "Logo"                                                  |
|       Single                                                  |
|                                                               |
|  Zone "Rear Right"                                            |
|       Single                                                  |
|                                                               |
|  Zone "DPI & Indicator"                                       |
|       Linear                                                  |
|       1 Row, 4 Columns                                        |
\*-------------------------------------------------------------*/
static const corsair_v2_zone dark_core_pro_se_scroll_zone =
{
    "Scroll Wheel",
    ZONE_TYPE_SINGLE,
    1,
    1
};

static const corsair_v2_zone dark_core_pro_se_button_zone =
{
    "Side Buttons",
    ZONE_TYPE_LINEAR,
    1,
    4
};

static const corsair_v2_zone dark_core_pro_se_left_zone =
{
    "Rear Left",
    ZONE_TYPE_SINGLE,
    1,
    1
};

static const corsair_v2_zone dark_core_pro_se_logo_zone =
{
    "Logo",
    ZONE_TYPE_SINGLE,
    1,
    1
};

static const corsair_v2_zone dark_core_pro_se_right_zone =
{
    "Rear Right",
    ZONE_TYPE_SINGLE,
    1,
    1
};

static const corsair_v2_zone dark_core_pro_se_dpi_zone =
{
    "DPI & Indicator Zone",
    ZONE_TYPE_LINEAR,
    1,
    4
};

static const corsair_v2_device dark_core_pro_se_device =
{
    CORSAIR_DARK_CORE_RGB_PRO_PID,
    DEVICE_TYPE_MOUSE,
    1,
    12,
    {
        &dark_core_pro_se_scroll_zone,
        &dark_core_pro_se_button_zone,
        &dark_core_pro_se_left_zone,
        &dark_core_pro_se_logo_zone,
        &dark_core_pro_se_right_zone,
        &dark_core_pro_se_dpi_zone
    },
    nullptr
};

/*-------------------------------------------------------------*\
|  Corsair Ironclaw Wireless 1B1C:1B4C                          |
|                                                               |
|  Zone "Logo"                                                  |
|       Single                                                  |
|                                                               |
|  Zone "Scroll Wheel"                                          |
|       Single                                                  |
|                                                               |
|  Zone "Buttons"                                               |
|       Single                                                  |
|                                                               |
|  Zone "Side"                                                  |
|       Linear                                                  |
|       1 Row, 3 Columns                                        |
\*-------------------------------------------------------------*/
static const corsair_v2_zone ironclaw_logo_zone =
{
    "Logo",
    ZONE_TYPE_SINGLE,
    1,
    1
};

static const corsair_v2_zone ironclaw_scroll_zone =
{
    "Scroll Wheel",
    ZONE_TYPE_SINGLE,
    1,
    1
};

static const corsair_v2_zone ironclaw_button_zone =
{
    "Buttons",
    ZONE_TYPE_SINGLE,
    1,
    1
};

static const corsair_v2_zone ironclaw_side_zone =
{
    "Side Zone",
    ZONE_TYPE_LINEAR,
    1,
    3
};

static const corsair_v2_device ironclaw_wireless_device =
{
    CORSAIR_IRONCLAW_WIRELESS_PID,
    DEVICE_TYPE_MOUSE,
    1,
    6,
    {
        &ironclaw_logo_zone,
        &ironclaw_scroll_zone,
        &ironclaw_button_zone,
        &ironclaw_side_zone,
        nullptr,
        nullptr
    },
    nullptr
};

/*-------------------------------------------------------------*\
|  Corsair K55 RGB Pro 1B1C:1BA4                                |
|                                                               |
|  Zone "Keyboard"                                              |
|       Linear                                                  |
|       1 Row, 6 Columns                                        |
\*-------------------------------------------------------------*/
static const corsair_v2_zone k55_rgb_pro_zone =
{
    ZONE_EN_KEYBOARD,
    ZONE_TYPE_LINEAR,
    1,
    6
};

static const corsair_v2_device k55_rgb_pro_device =
{
    CORSAIR_K55_RGB_PRO_PID,
    DEVICE_TYPE_KEYBOARD,
    1,
    6,
    {
        &k55_rgb_pro_zone,
        nullptr,
        nullptr,
        nullptr,
        nullptr,
        nullptr
    },
    nullptr
};

/*-------------------------------------------------------------*\
|  Corsair K60 RGB Pro 1B1C:1BA0                                |
|                                                               |
|  Zone "Keyboard"                                              |
|       Matrix                                                  |
|       6 Rows, 21 Columns                                      |
\*-------------------------------------------------------------*/
static const corsair_v2_zone k60_rgb_pro_zone =
{
    ZONE_EN_KEYBOARD,
    ZONE_TYPE_MATRIX,
    6,
    21
};

static const corsair_v2_device k60_rgb_pro_device =
{
    CORSAIR_K60_RGB_PRO_PID,
    DEVICE_TYPE_KEYBOARD,
    6,
    21,
    {
        &k60_rgb_pro_zone,
        nullptr,
        nullptr,
        nullptr,
        nullptr,
        nullptr
    },
    &corsair_K60_layout
};

/*-------------------------------------------------------------*\
|  Corsair K60 RGB Pro Low Profile 1B1C:1BAD                    |
|                                                               |
|  Zone "Keyboard"                                              |
|       Matrix                                                  |
|       6 Rows, 21 Columns                                      |
\*-------------------------------------------------------------*/
static const corsair_v2_zone k60_rgb_pro_lp_zone =
{
    ZONE_EN_KEYBOARD,
    ZONE_TYPE_MATRIX,
    6,
    21
};

static const corsair_v2_device k60_rgb_pro_lp_device =
{
    CORSAIR_K60_RGB_PRO_LP_PID,
    DEVICE_TYPE_KEYBOARD,
    6,
    21,
    {
        &k60_rgb_pro_lp_zone,
        nullptr,
        nullptr,
        nullptr,
        nullptr,
        nullptr
    },
    &corsair_K60_layout
};

/*-------------------------------------------------------------*\
|  Corsair M55 1B1C:1B70                                        |
|                                                               |
|  Zone "Logo"                                                  |
|       Single                                                  |
|                                                               |
|  Zone "Edge"                                                  |
|       Linear                                                  |
|       1 Row, 2 Columns                                        |
\*-------------------------------------------------------------*/
static const corsair_v2_zone m55_mid_zone =
{
    "Middle Button",
    ZONE_TYPE_SINGLE,
    1,
    1
};

static const corsair_v2_zone m55_logo_zone =
{
    "Logo",
    ZONE_TYPE_SINGLE,
    1,
    1
};

static const corsair_v2_device m55_device =
{
    CORSAIR_M55_RGB_PRO_PID,
    DEVICE_TYPE_MOUSE,
    1,
    2,
    {
        &m55_mid_zone,
        &m55_logo_zone,
        nullptr,
        nullptr,
        nullptr,
        nullptr
    },
    nullptr
};

/*-------------------------------------------------------------*\
|  Corsair M65 Ultra RGB 1B1C:1BB5                              |
|                                                               |
|  Zone "Logo"                                                  |
|       Single                                                  |
|                                                               |
|  Zone "DPI"                                                   |
|       Single                                                  |
\*-------------------------------------------------------------*/
static const corsair_v2_zone m65_ultra_rgb_logo_zone =
{
    "Logo",
    ZONE_TYPE_SINGLE,
    1,
    1
};

static const corsair_v2_zone m65_ultra_rgb_dpi_zone =
{
    "DPI",
    ZONE_TYPE_SINGLE,
    1,
    1
};

static const corsair_v2_device m65_ultra_rgb_device =
{
    CORSAIR_M65_ULTRA_RGB_PID,
    //false,
    DEVICE_TYPE_MOUSE,
    //CORSAIR_V2_TYPE_SW_COLOUR_BLOCK,
    1,
    2,
    {
        &m65_ultra_rgb_logo_zone,
        &m65_ultra_rgb_dpi_zone,
        nullptr,
        nullptr,
        nullptr,
        nullptr
    },
    nullptr
};

/*-------------------------------------------------------------*\
|  Corsair MM700 1B1C:1B9B                                      |
|                                                               |
|  Zone "Logo"                                                  |
|       Single                                                  |
|                                                               |
|  Zone "Edge"                                                  |
|       Linear                                                  |
|       1 Row, 2 Columns                                        |
\*-------------------------------------------------------------*/
static const corsair_v2_zone mm700_right_zone =
{
    "Right",
    ZONE_TYPE_SINGLE,
    1,
    1
};

static const corsair_v2_zone mm700_logo_zone =
{
    "Logo",
    ZONE_TYPE_SINGLE,
    1,
    1
};

static const corsair_v2_zone mm700_left_zone =
{
    "Left",
    ZONE_TYPE_SINGLE,
    1,
    1
};

static const corsair_v2_device mm700_device =
{
    CORSAIR_MM700_PID,
    DEVICE_TYPE_MOUSEMAT,
    1,
    3,
    {
        &mm700_left_zone,
        &mm700_right_zone,
        &mm700_logo_zone,
        nullptr,
        nullptr,
        nullptr
    },
    nullptr
};

/*-------------------------------------------------------------------------*\
|  DEVICE MASTER LIST                                                       |
\*-------------------------------------------------------------------------*/
const corsair_v2_device* corsair_v2_device_list_data[] =
{
/*-----------------------------------------------------------------*\
|  KEYBOARDS                                                        |
\*-----------------------------------------------------------------*/
    &k55_rgb_pro_device,
    &k60_rgb_pro_device,
    &k60_rgb_pro_lp_device,

/*-----------------------------------------------------------------*\
|  MICE                                                             |
\*-----------------------------------------------------------------*/
    &dark_core_se_device,
    &dark_core_pro_se_device,
    &ironclaw_wireless_device,
    &m55_device,
    &m65_ultra_rgb_device,

/*-----------------------------------------------------------------*\
|  MOUSEMATS                                                        |
\*-----------------------------------------------------------------*/
    &mm700_device,
};

const unsigned int CORSAIR_V2_DEVICE_COUNT = (sizeof(corsair_v2_device_list_data) / sizeof(corsair_v2_device_list_data[ 0 ]));
const corsair_v2_device** corsair_v2_device_list = corsair_v2_device_list_data;
