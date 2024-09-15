#ifdef __has_include
    #if __has_include("lvgl.h")
        #ifndef LV_LVGL_H_INCLUDE_SIMPLE
            #define LV_LVGL_H_INCLUDE_SIMPLE
        #endif
    #endif
#endif

#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
#include "lvgl.h"
#elif defined(LV_BUILD_TEST)
#include "../lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_DUST
#define LV_ATTRIBUTE_IMG_DUST
#endif

static const
LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_DUST
uint8_t img_node_router_image_map[] = {

    0x00,0x00,0x00,0x00,0x38,0x38,0x38,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xff,0x00,0xa1,0xa1,0xa1,0x1e,0xa2,0xa2,0xa2,0x17,0xfa,0xfa,0xfa,0x00,0xff,0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xff,0x00,0xfa,0xfa,0xfa,0x00,0xa2,0xa2,0xa2,0x17,0xa1,0xa1,0xa1,0x1e,0xff,0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x37,0x37,0x37,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0xff,0xff,0xff,0x00,0xd8,0xd8,0xd8,0x00,0xad,0xad,0xad,0x3a,0xd1,0xd1,0xd1,0xd1,0xce,0xce,0xce,0xa8,0x87,0x87,0x87,0x09,0x90,0x90,0x90,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x90,0x90,0x90,0x00,0x87,0x87,0x87,0x09,0xce,0xce,0xce,0xa8,0xd1,0xd1,0xd1,0xd1,0xad,0xad,0xad,0x3a,0xd8,0xd8,0xd8,0x00,0xff,0xff,0xff,0x00,0x00,0x00,0x00,0x00,
    0x8d,0x8d,0x8d,0x00,0xb2,0xb2,0xb2,0x00,0xa5,0xa5,0xa5,0x1e,0xd2,0xd2,0xd2,0xca,0xde,0xde,0xde,0xff,0xc9,0xc9,0xc9,0x9a,0x6b,0x6b,0x6b,0x05,0xbf,0xbf,0xbf,0x00,0xbe,0xbe,0xbe,0x00,0xff,0xff,0xff,0x00,0x26,0x26,0x26,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1b,0x1b,0x1b,0x00,0xff,0xff,0xff,0x00,0xa9,0xa9,0xa9,0x00,0xb6,0xb6,0xb6,0x00,0x6c,0x6c,0x6c,0x05,0xca,0xca,0xca,0x9a,0xde,0xde,0xde,0xff,0xd2,0xd2,0xd2,0xca,0xa4,0xa4,0xa4,0x1e,0xb1,0xb1,0xb1,0x00,0x8b,0x8b,0x8b,0x00,
    0x76,0x76,0x76,0x00,0x00,0x00,0x00,0x01,0xcb,0xcb,0xcb,0x8c,0xdf,0xdf,0xdf,0xff,0xd1,0xd1,0xd1,0xbe,0x94,0x94,0x94,0x18,0x46,0x46,0x46,0x03,0xbb,0xbb,0xbb,0x3c,0xb6,0xb6,0xb6,0x24,0xff,0xff,0xff,0x00,0x29,0x29,0x29,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xf4,0xf4,0xf4,0x00,0xa6,0xa6,0xa6,0x19,0xb7,0xb7,0xb7,0x2c,0x00,0x00,0x00,0x00,0x95,0x95,0x95,0x18,0xd1,0xd1,0xd1,0xbe,0xdf,0xdf,0xdf,0xff,0xca,0xca,0xca,0x8c,0x00,0x00,0x00,0x01,0x73,0x73,0x73,0x00,
    0xbb,0xbb,0xbb,0x00,0xb4,0xb4,0xb4,0x2c,0xd9,0xd9,0xd9,0xe6,0xda,0xda,0xda,0xf0,0xb6,0xb6,0xb6,0x40,0xf2,0xf2,0xf2,0x00,0xc0,0xc0,0xc0,0x60,0xda,0xda,0xda,0xf3,0xcd,0xcd,0xcd,0xa8,0x3c,0x3c,0x3c,0x04,0x6e,0x6e,0x6e,0x00,0xa9,0xa9,0xa9,0x00,0xa9,0xa9,0xa9,0x00,0x6e,0x6e,0x6e,0x00,0x2f,0x2f,0x2f,0x04,0xc9,0xc9,0xc9,0xa1,0xd8,0xd8,0xd8,0xe8,0xbd,0xbd,0xbd,0x53,0xe3,0xe3,0xe3,0x00,0xb7,0xb7,0xb7,0x3f,0xda,0xda,0xda,0xef,0xd9,0xd9,0xd9,0xe7,0xb1,0xb1,0xb1,0x2c,0xba,0xba,0xba,0x00,
    0xff,0xff,0xff,0x00,0xc5,0xc5,0xc5,0x74,0xde,0xde,0xde,0xff,0xcf,0xcf,0xcf,0xa6,0x00,0x00,0x00,0x02,0xb1,0xb1,0xb1,0x25,0xd7,0xd7,0xd7,0xdc,0xdc,0xdc,0xdc,0xfd,0xc2,0xc2,0xc2,0x6f,0xff,0xff,0xff,0x00,0x00,0x00,0x00,0x02,0xaa,0xaa,0xaa,0x17,0xaa,0xaa,0xaa,0x17,0x00,0x00,0x00,0x02,0xff,0xff,0xff,0x00,0xc6,0xc6,0xc6,0x7b,0xde,0xde,0xde,0xff,0xd4,0xd4,0xd4,0xd6,0xa2,0xa2,0xa2,0x21,0x00,0x00,0x00,0x02,0xce,0xce,0xce,0xa5,0xde,0xde,0xde,0xff,0xc5,0xc5,0xc5,0x75,0xff,0xff,0xff,0x00,
    0x4f,0x4f,0x4f,0x06,0xcf,0xcf,0xcf,0xb1,0xde,0xde,0xde,0xff,0xc4,0xc4,0xc4,0x5b,0xf4,0xf4,0xf4,0x00,0xc8,0xc8,0xc8,0x79,0xdf,0xdf,0xdf,0xff,0xcf,0xcf,0xcf,0xae,0x5d,0x5d,0x5d,0x08,0xa6,0xa6,0xa6,0x13,0xcb,0xcb,0xcb,0x8b,0xd8,0xd8,0xd8,0xd8,0xd8,0xd8,0xd8,0xd8,0xca,0xca,0xca,0x8c,0xa5,0xa5,0xa5,0x13,0x85,0x85,0x85,0x0c,0xd1,0xd1,0xd1,0xb5,0xde,0xde,0xde,0xff,0xc5,0xc5,0xc5,0x75,0xef,0xef,0xef,0x00,0xc2,0xc2,0xc2,0x5a,0xdd,0xdd,0xdd,0xff,0xd4,0xd4,0xd4,0xb2,0x72,0x72,0x72,0x07,
    0xa6,0xa6,0xa6,0x18,0xd7,0xd7,0xd7,0xd3,0xdb,0xdb,0xdb,0xef,0xba,0xba,0xba,0x2f,0x3e,0x3e,0x3e,0x04,0xd3,0xd3,0xd3,0xb7,0xde,0xde,0xde,0xff,0xc6,0xc6,0xc6,0x56,0xff,0xff,0xff,0x00,0xcb,0xcb,0xcb,0x8c,0xde,0xde,0xde,0xff,0xdc,0xdc,0xdc,0xf3,0xdc,0xdc,0xdc,0xf3,0xde,0xde,0xde,0xff,0xcc,0xcc,0xcc,0x8c,0xff,0xff,0xff,0x00,0xc2,0xc2,0xc2,0x58,0xde,0xde,0xde,0xff,0xd2,0xd2,0xd2,0xb6,0x32,0x32,0x32,0x04,0xb5,0xb5,0xb5,0x2e,0xda,0xda,0xda,0xef,0xd8,0xd8,0xd8,0xd4,0xa9,0xa9,0xa9,0x18,
    0xa5,0xa5,0xa5,0x24,0xd8,0xd8,0xd8,0xe1,0xdd,0xdd,0xdd,0xe2,0xc7,0xc7,0xc7,0x1d,0xa8,0xa8,0xa8,0x10,0xd8,0xd8,0xd8,0xd2,0xda,0xda,0xda,0xf1,0xb4,0xb4,0xb4,0x2e,0xb1,0xb1,0xb1,0x14,0xd9,0xd9,0xd9,0xd8,0xdb,0xdb,0xdb,0xf3,0xbc,0xbc,0xbc,0x51,0xbc,0xbc,0xbc,0x52,0xdb,0xdb,0xdb,0xf3,0xd9,0xd9,0xd9,0xd8,0xb1,0xb1,0xb1,0x14,0xb3,0xb3,0xb3,0x2e,0xda,0xda,0xda,0xf0,0xd8,0xd8,0xd8,0xd2,0xa7,0xa7,0xa7,0x10,0xcb,0xcb,0xcb,0x1d,0xde,0xde,0xde,0xe1,0xd8,0xd8,0xd8,0xe1,0xa5,0xa5,0xa5,0x24,
    0xa5,0xa5,0xa5,0x24,0xd8,0xd8,0xd8,0xe1,0xdd,0xdd,0xdd,0xe2,0xc7,0xc7,0xc7,0x1d,0xa4,0xa4,0xa4,0x10,0xd8,0xd8,0xd8,0xd1,0xda,0xda,0xda,0xf1,0xb4,0xb4,0xb4,0x30,0xaa,0xaa,0xaa,0x14,0xd8,0xd8,0xd8,0xd8,0xdb,0xdb,0xdb,0xf3,0xb9,0xb9,0xb9,0x52,0xb8,0xb8,0xb8,0x52,0xdb,0xdb,0xdb,0xf3,0xd8,0xd8,0xd8,0xd8,0xab,0xab,0xab,0x14,0xb1,0xb1,0xb1,0x2e,0xda,0xda,0xda,0xf0,0xd8,0xd8,0xd8,0xd2,0xa9,0xa9,0xa9,0x10,0xc8,0xc8,0xc8,0x1e,0xdd,0xdd,0xdd,0xe2,0xd8,0xd8,0xd8,0xe1,0xa5,0xa5,0xa5,0x24,
    0xa5,0xa5,0xa5,0x18,0xd7,0xd7,0xd7,0xd3,0xda,0xda,0xda,0xef,0xb4,0xb4,0xb4,0x2f,0x00,0x00,0x00,0x03,0xd0,0xd0,0xd0,0xb4,0xde,0xde,0xde,0xff,0xc2,0xc2,0xc2,0x5b,0xff,0xff,0xff,0x00,0xc7,0xc7,0xc7,0x8b,0xdd,0xdd,0xdd,0xff,0xdb,0xdb,0xdb,0xf1,0xdb,0xdb,0xdb,0xf1,0xdd,0xdd,0xdd,0xff,0xc7,0xc7,0xc7,0x8b,0xff,0xff,0xff,0x00,0xc0,0xc0,0xc0,0x56,0xdd,0xdd,0xdd,0xff,0xd2,0xd2,0xd2,0xb7,0x27,0x27,0x27,0x04,0xb6,0xb6,0xb6,0x31,0xdb,0xdb,0xdb,0xf1,0xd7,0xd7,0xd7,0xd1,0xa0,0xa0,0xa0,0x16,
    0x65,0x65,0x65,0x06,0xd3,0xd3,0xd3,0xb1,0xdd,0xdd,0xdd,0xff,0xc2,0xc2,0xc2,0x5b,0xed,0xed,0xed,0x00,0xc4,0xc4,0xc4,0x73,0xde,0xde,0xde,0xff,0xd0,0xd0,0xd0,0xb4,0x84,0x84,0x84,0x09,0x83,0x83,0x83,0x12,0xc8,0xc8,0xc8,0xa7,0xdf,0xdf,0xdf,0xff,0xdf,0xdf,0xdf,0xff,0xc8,0xc8,0xc8,0xa8,0x83,0x83,0x83,0x12,0x76,0x76,0x76,0x07,0xcf,0xcf,0xcf,0xad,0xde,0xde,0xde,0xff,0xc7,0xc7,0xc7,0x78,0xf2,0xf2,0xf2,0x00,0xc1,0xc1,0xc1,0x60,0xde,0xde,0xde,0xff,0xd1,0xd1,0xd1,0xad,0x4b,0x4b,0x4b,0x05,
    0xff,0xff,0xff,0x00,0xca,0xca,0xca,0x74,0xdf,0xdf,0xdf,0xff,0xce,0xce,0xce,0xa6,0x00,0x00,0x00,0x02,0xa6,0xa6,0xa6,0x20,0xd1,0xd1,0xd1,0xce,0xd3,0xd3,0xd3,0xc4,0xa2,0xa2,0xa2,0x12,0xff,0xff,0xff,0x00,0xca,0xca,0xca,0x95,0xe0,0xe0,0xe0,0xff,0xe0,0xe0,0xe0,0xff,0xcd,0xcd,0xcd,0x95,0xff,0xff,0xff,0x00,0xa0,0xa0,0xa0,0x14,0xd3,0xd3,0xd3,0xcb,0xd4,0xd4,0xd4,0xd7,0xa7,0xa7,0xa7,0x24,0x26,0x26,0x26,0x04,0xd0,0xd0,0xd0,0xae,0xde,0xde,0xde,0xff,0xc8,0xc8,0xc8,0x6e,0xf5,0xf5,0xf5,0x00,
    0xb5,0xb5,0xb5,0x00,0xae,0xae,0xae,0x2b,0xd7,0xd7,0xd7,0xe6,0xda,0xda,0xda,0xf0,0xb6,0xb6,0xb6,0x40,0xed,0xed,0xed,0x00,0xae,0xae,0xae,0x23,0xb3,0xb3,0xb3,0x23,0xef,0xef,0xef,0x00,0xa4,0xa4,0xa4,0x1e,0xd6,0xd6,0xd6,0xda,0xde,0xde,0xde,0xff,0xdd,0xdd,0xdd,0xff,0xd7,0xd7,0xd7,0xda,0xab,0xab,0xab,0x1e,0xff,0xff,0xff,0x00,0xb7,0xb7,0xb7,0x2d,0xba,0xba,0xba,0x2c,0xfd,0xfd,0xfd,0x00,0xb9,0xb9,0xb9,0x4a,0xdb,0xdb,0xdb,0xf4,0xd6,0xd6,0xd6,0xe1,0xa8,0xa8,0xa8,0x26,0xaf,0xaf,0xaf,0x00,
    0x54,0x54,0x54,0x00,0x00,0x00,0x00,0x01,0xc7,0xc7,0xc7,0x8b,0xdf,0xdf,0xdf,0xff,0xd1,0xd1,0xd1,0xbe,0x9e,0x9e,0x9e,0x19,0xb3,0xb3,0xb3,0x00,0xb8,0xb8,0xb8,0x00,0xdc,0xdc,0xdc,0x00,0xbf,0xbf,0xbf,0x5c,0xdd,0xdd,0xdd,0xff,0xce,0xce,0xce,0xc7,0xce,0xce,0xce,0xc7,0xde,0xde,0xde,0xff,0xc3,0xc3,0xc3,0x5c,0xdc,0xdc,0xdc,0x00,0xbd,0xbd,0xbd,0x00,0xbe,0xbe,0xbe,0x00,0xa7,0xa7,0xa7,0x21,0xd3,0xd3,0xd3,0xca,0xde,0xde,0xde,0xff,0xc4,0xc4,0xc4,0x80,0xff,0xff,0xff,0x00,0x39,0x39,0x39,0x00,
    0x73,0x73,0x73,0x00,0xb3,0xb3,0xb3,0x00,0xa8,0xa8,0xa8,0x1d,0xd3,0xd3,0xd3,0xc9,0xdf,0xdf,0xdf,0xff,0xcf,0xcf,0xcf,0x9a,0x74,0x74,0x74,0x05,0x83,0x83,0x83,0x00,0x43,0x43,0x43,0x05,0xce,0xce,0xce,0xaa,0xde,0xde,0xde,0xff,0xc4,0xc4,0xc4,0x6a,0xc4,0xc4,0xc4,0x6a,0xde,0xde,0xde,0xff,0xd1,0xd1,0xd1,0xaa,0x53,0x53,0x53,0x05,0x88,0x88,0x88,0x00,0x7e,0x7e,0x7e,0x07,0xd0,0xd0,0xd0,0xa6,0xdf,0xdf,0xdf,0xff,0xd0,0xd0,0xd0,0xbd,0x9a,0x9a,0x9a,0x16,0xa5,0xa5,0xa5,0x00,0x66,0x66,0x66,0x00,
    0x00,0x00,0x00,0x00,0xff,0xff,0xff,0x00,0xe0,0xe0,0xe0,0x00,0xb4,0xb4,0xb4,0x3a,0xd4,0xd4,0xd4,0xd2,0xce,0xce,0xce,0xa9,0x8b,0x8b,0x8b,0x09,0xad,0xad,0xad,0x00,0xad,0xad,0xad,0x2a,0xd9,0xd9,0xd9,0xe7,0xd8,0xd8,0xd8,0xee,0xa3,0xa3,0xa3,0x45,0xa3,0xa3,0xa3,0x45,0xd8,0xd8,0xd8,0xee,0xda,0xda,0xda,0xe7,0xb3,0xb3,0xb3,0x2a,0xb2,0xb2,0xb2,0x00,0x88,0x88,0x88,0x07,0xcd,0xcd,0xcd,0x9c,0xd2,0xd2,0xd2,0xc2,0xb1,0xb1,0xb1,0x2e,0xcf,0xcf,0xcf,0x00,0xe3,0xe3,0xe3,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x56,0x56,0x56,0x00,0x0f,0x0f,0x0f,0x00,0xff,0xff,0xff,0x00,0xa5,0xa5,0xa5,0x1b,0xa0,0xa0,0xa0,0x14,0xe8,0xe8,0xe8,0x00,0xfb,0xfb,0xfb,0x00,0xc7,0xc7,0xc7,0x70,0xde,0xde,0xde,0xff,0xdd,0xdd,0xdd,0xfc,0xd4,0xd4,0xd4,0xe4,0xd4,0xd4,0xd4,0xe4,0xdd,0xdd,0xdd,0xfc,0xdf,0xdf,0xdf,0xff,0xc7,0xc7,0xc7,0x70,0xfc,0xfc,0xfc,0x00,0xc6,0xc6,0xc6,0x00,0x94,0x94,0x94,0x0c,0x9a,0x9a,0x9a,0x10,0xe7,0xe7,0xe7,0x00,0xff,0xff,0xff,0x00,0x49,0x49,0x49,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x68,0x68,0x68,0x00,0x36,0x36,0x36,0x00,0xa8,0xa8,0xa8,0x00,0xa2,0xa2,0xa2,0x00,0x85,0x85,0x85,0x00,0x7e,0x7e,0x7e,0x0b,0xd1,0xd1,0xd1,0xbc,0xdf,0xdf,0xdf,0xff,0xd5,0xd5,0xd5,0xe7,0xd4,0xd4,0xd4,0xe2,0xd4,0xd4,0xd4,0xe2,0xd5,0xd5,0xd5,0xe7,0xdf,0xdf,0xdf,0xff,0xd3,0xd3,0xd3,0xbc,0x89,0x89,0x89,0x0b,0x92,0x92,0x92,0x00,0x97,0x97,0x97,0x00,0x9d,0x9d,0x9d,0x00,0x00,0x00,0x00,0x00,0x58,0x58,0x58,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x62,0x62,0x62,0x00,0xbf,0xbf,0xbf,0x00,0xb4,0xb4,0xb4,0x39,0xda,0xda,0xda,0xf2,0xd7,0xd7,0xd7,0xdc,0x9f,0x9f,0x9f,0x35,0x8d,0x8d,0x8d,0x1e,0x8d,0x8d,0x8d,0x1e,0x9f,0x9f,0x9f,0x35,0xd7,0xd7,0xd7,0xdc,0xdb,0xdb,0xdb,0xf2,0xba,0xba,0xba,0x39,0xc4,0xc4,0xc4,0x00,0x66,0x66,0x66,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x32,0x32,0x32,0x00,0xff,0xff,0xff,0x00,0xc7,0xc7,0xc7,0x84,0xde,0xde,0xde,0xff,0xcc,0xcc,0xcc,0x97,0xff,0xff,0xff,0x00,0x89,0x89,0x89,0x00,0x89,0x89,0x89,0x00,0xff,0xff,0xff,0x00,0xcc,0xcc,0xcc,0x97,0xdf,0xdf,0xdf,0xff,0xcb,0xcb,0xcb,0x84,0xff,0xff,0xff,0x00,0x3b,0x3b,0x3b,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x99,0x99,0x99,0x00,0x98,0x98,0x98,0x11,0xd4,0xd4,0xd4,0xcd,0xdc,0xdc,0xdc,0xfc,0xbc,0xbc,0xbc,0x4a,0xcd,0xcd,0xcd,0x00,0x85,0x85,0x85,0x00,0x85,0x85,0x85,0x00,0xcd,0xcd,0xcd,0x00,0xbc,0xbc,0xbc,0x4a,0xdc,0xdc,0xdc,0xfc,0xd5,0xd5,0xd5,0xcd,0x98,0x98,0x98,0x11,0x99,0x99,0x99,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x97,0x97,0x97,0x00,0x94,0x94,0x94,0x0e,0xce,0xce,0xce,0xaa,0xce,0xce,0xce,0xac,0x9a,0x9a,0x9a,0x10,0x9e,0x9e,0x9e,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x9e,0x9e,0x9e,0x00,0x9a,0x9a,0x9a,0x10,0xce,0xce,0xce,0xac,0xce,0xce,0xce,0xaa,0x94,0x94,0x94,0x0e,0x97,0x97,0x97,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0x9f,0x9f,0x9f,0x10,0x94,0x94,0x94,0x10,0xe9,0xe9,0xe9,0x00,0xf6,0xf6,0xf6,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xf6,0xf6,0xf6,0x00,0xe8,0xe8,0xe8,0x00,0x94,0x94,0x94,0x10,0x9f,0x9f,0x9f,0x10,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

};

const lv_img_dsc_t img_node_router_image = {
  .header.magic = LV_IMAGE_HEADER_MAGIC,
  .header.cf = LV_COLOR_FORMAT_ARGB8888,
  .header.flags = 0,
  .header.w = 24,
  .header.h = 24,
  .header.stride = 96,
  .data_size = 2304,
  .data = img_node_router_image_map,
};

