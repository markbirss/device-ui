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
uint8_t img_groups_lock_image_map[] = {

    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x27,0x27,0x27,0x00,0xfb,0xfb,0xfb,0x00,0xa6,0xa6,0xa6,0x00,0xff,0xff,0xff,0x00,0x7d,0x7d,0x7d,0x0b,0xb1,0xb1,0xb1,0x1e,0xb2,0xb2,0xb2,0x1e,0x88,0x88,0x88,0x0c,0xff,0xff,0xff,0x00,0xa5,0xa5,0xa5,0x00,0xfa,0xfa,0xfa,0x00,0x26,0x26,0x26,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x2b,0x2b,0x2b,0x00,0xff,0xff,0xff,0x00,0xd2,0xd2,0xd2,0x00,0x9a,0x9a,0x9a,0x17,0xc1,0xc1,0xc1,0x71,0xd2,0xd2,0xd2,0xbc,0xda,0xda,0xda,0xdb,0xda,0xda,0xda,0xdb,0xd3,0xd3,0xd3,0xbd,0xc0,0xc0,0xc0,0x71,0x99,0x99,0x99,0x17,0xd2,0xd2,0xd2,0x00,0xff,0xff,0xff,0x00,0x2c,0x2c,0x2c,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfd,0xfd,0xfd,0x00,0xd3,0xd3,0xd3,0x00,0xb2,0xb2,0xb2,0x2c,0xd1,0xd1,0xd1,0xbf,0xdd,0xdd,0xdd,0xff,0xdd,0xdd,0xdd,0xfe,0xdb,0xdb,0xdb,0xe9,0xdb,0xdb,0xdb,0xe9,0xdd,0xdd,0xdd,0xfe,0xdd,0xdd,0xdd,0xff,0xd1,0xd1,0xd1,0xc0,0xb1,0xb1,0xb1,0x2c,0xd2,0xd2,0xd2,0x00,0xfb,0xfb,0xfb,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3e,0x3e,0x3e,0x00,0xa8,0xa8,0xa8,0x00,0x9c,0x9c,0x9c,0x17,0xd1,0xd1,0xd1,0xbf,0xe0,0xe0,0xe0,0xff,0xd4,0xd4,0xd4,0xc8,0xbf,0xbf,0xbf,0x58,0xb7,0xb7,0xb7,0x26,0xb7,0xb7,0xb7,0x26,0xc0,0xc0,0xc0,0x58,0xd4,0xd4,0xd4,0xc8,0xe0,0xe0,0xe0,0xff,0xd1,0xd1,0xd1,0xbf,0x9c,0x9c,0x9c,0x17,0xa9,0xa9,0xa9,0x00,0x3f,0x3f,0x3f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xff,0x00,0xc2,0xc2,0xc2,0x72,0xde,0xde,0xde,0xff,0xd3,0xd3,0xd3,0xc8,0xac,0xac,0xac,0x23,0xdf,0xdf,0xdf,0x00,0xb8,0xb8,0xb8,0x00,0xb8,0xb8,0xb8,0x00,0xdf,0xdf,0xdf,0x00,0xac,0xac,0xac,0x23,0xd3,0xd3,0xd3,0xc8,0xde,0xde,0xde,0xff,0xc2,0xc2,0xc2,0x72,0xff,0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x87,0x87,0x87,0x00,0x7f,0x7f,0x7f,0x0a,0xd2,0xd2,0xd2,0xbe,0xdd,0xdd,0xdd,0xfe,0xbd,0xbd,0xbd,0x58,0xde,0xde,0xde,0x00,0xff,0xff,0xff,0x00,0x2f,0x2f,0x2f,0x00,0x2f,0x2f,0x2f,0x00,0xff,0xff,0xff,0x00,0xdf,0xdf,0xdf,0x00,0xbd,0xbd,0xbd,0x58,0xdd,0xdd,0xdd,0xfe,0xd2,0xd2,0xd2,0xbe,0x80,0x80,0x80,0x0a,0x88,0x88,0x88,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xaf,0xaf,0xaf,0x00,0xb0,0xb0,0xb0,0x1a,0xd9,0xd9,0xd9,0xdd,0xda,0xda,0xda,0xe9,0xb2,0xb2,0xb2,0x26,0xb3,0xb3,0xb3,0x00,0x2c,0x2c,0x2c,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x2c,0x2c,0x2c,0x00,0xb2,0xb2,0xb2,0x00,0xb1,0xb1,0xb1,0x26,0xda,0xda,0xda,0xe9,0xd9,0xd9,0xd9,0xdd,0xb0,0xb0,0xb0,0x1a,0xaf,0xaf,0xaf,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7e,0x7e,0x7e,0x00,0x66,0x66,0x66,0x00,0xad,0xad,0xad,0x00,0xb0,0xb0,0xb0,0x1d,0xda,0xda,0xda,0xe2,0xdc,0xdc,0xdc,0xe2,0xbd,0xbd,0xbd,0x1d,0xc2,0xc2,0xc2,0x00,0xc6,0xc6,0xc6,0x00,0xc6,0xc6,0xc6,0x00,0xc6,0xc6,0xc6,0x00,0xc6,0xc6,0xc6,0x00,0xc2,0xc2,0xc2,0x00,0xbd,0xbd,0xbd,0x1d,0xdc,0xdc,0xdc,0xe2,0xda,0xda,0xda,0xe2,0xb0,0xb0,0xb0,0x1d,0xad,0xad,0xad,0x00,0x67,0x67,0x67,0x00,0x7f,0x7f,0x7f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0xca,0xca,0xca,0x00,0xb1,0xb1,0xb1,0x00,0x00,0x00,0x00,0x02,0xa7,0xa7,0xa7,0x15,0xbd,0xbd,0xbd,0x3a,0xda,0xda,0xda,0xe6,0xdc,0xdc,0xdc,0xe6,0xc4,0xc4,0xc4,0x3a,0xc6,0xc6,0xc6,0x1d,0xc6,0xc6,0xc6,0x1f,0xc6,0xc6,0xc6,0x1f,0xc6,0xc6,0xc6,0x1f,0xc6,0xc6,0xc6,0x1f,0xc6,0xc6,0xc6,0x1d,0xc4,0xc4,0xc4,0x3a,0xdc,0xdc,0xdc,0xe6,0xda,0xda,0xda,0xe6,0xbd,0xbd,0xbd,0x3a,0xa7,0xa7,0xa7,0x15,0x00,0x00,0x00,0x02,0xb1,0xb1,0xb1,0x00,0xca,0xca,0xca,0x00,0x00,0x00,0x00,0x00,
    0x85,0x85,0x85,0x00,0xb1,0xb1,0xb1,0x00,0x9f,0x9f,0x9f,0x14,0xc6,0xc6,0xc6,0x8c,0xd7,0xd7,0xd7,0xd7,0xdd,0xdd,0xdd,0xe6,0xdf,0xdf,0xdf,0xfd,0xe0,0xe0,0xe0,0xfd,0xdd,0xdd,0xdd,0xe6,0xdd,0xdd,0xdd,0xe2,0xdd,0xdd,0xdd,0xe2,0xdd,0xdd,0xdd,0xe2,0xdd,0xdd,0xdd,0xe2,0xdd,0xdd,0xdd,0xe2,0xdd,0xdd,0xdd,0xe2,0xdd,0xdd,0xdd,0xe6,0xe0,0xe0,0xe0,0xfd,0xdf,0xdf,0xdf,0xfd,0xdd,0xdd,0xdd,0xe6,0xd7,0xd7,0xd7,0xd7,0xc6,0xc6,0xc6,0x8c,0x9e,0x9e,0x9e,0x14,0xb1,0xb1,0xb1,0x00,0x86,0x86,0x86,0x00,
    0x6c,0x6c,0x6c,0x00,0x00,0x00,0x00,0x02,0xc7,0xc7,0xc7,0x8c,0xde,0xde,0xde,0xff,0xdb,0xdb,0xdb,0xf3,0xd8,0xd8,0xd8,0xe2,0xd7,0xd7,0xd7,0xe1,0xd7,0xd7,0xd7,0xe1,0xd8,0xd8,0xd8,0xe2,0xd8,0xd8,0xd8,0xe2,0xd8,0xd8,0xd8,0xe2,0xd8,0xd8,0xd8,0xe2,0xd8,0xd8,0xd8,0xe2,0xd8,0xd8,0xd8,0xe2,0xd8,0xd8,0xd8,0xe2,0xd8,0xd8,0xd8,0xe2,0xd7,0xd7,0xd7,0xe1,0xd7,0xd7,0xd7,0xe1,0xd8,0xd8,0xd8,0xe2,0xdb,0xdb,0xdb,0xf4,0xde,0xde,0xde,0xff,0xc7,0xc7,0xc7,0x8c,0x00,0x00,0x00,0x02,0x6d,0x6d,0x6d,0x00,
    0xae,0xae,0xae,0x00,0xaf,0xaf,0xaf,0x17,0xd8,0xd8,0xd8,0xd7,0xdb,0xdb,0xdb,0xf3,0xb7,0xb7,0xb7,0x56,0xa6,0xa6,0xa6,0x1d,0xa5,0xa5,0xa5,0x20,0xa5,0xa5,0xa5,0x20,0xa9,0xa9,0xa9,0x1f,0xa9,0xa9,0xa9,0x1f,0xa9,0xa9,0xa9,0x1f,0xa9,0xa9,0xa9,0x1f,0xa9,0xa9,0xa9,0x1f,0xa9,0xa9,0xa9,0x1f,0xa9,0xa9,0xa9,0x1f,0xa9,0xa9,0xa9,0x1f,0xa5,0xa5,0xa5,0x20,0xa5,0xa5,0xa5,0x20,0xa6,0xa6,0xa6,0x1d,0xb7,0xb7,0xb7,0x56,0xda,0xda,0xda,0xf3,0xd8,0xd8,0xd8,0xd7,0xaf,0xaf,0xaf,0x17,0xaf,0xaf,0xaf,0x00,
    0xcf,0xcf,0xcf,0x00,0xce,0xce,0xce,0x1f,0xde,0xde,0xde,0xe2,0xd7,0xd7,0xd7,0xe2,0x9f,0x9f,0x9f,0x1d,0xa4,0xa4,0xa4,0x00,0xa4,0xa4,0xa4,0x00,0xa4,0xa4,0xa4,0x00,0xa8,0xa8,0xa8,0x00,0xa8,0xa8,0xa8,0x00,0xa5,0xa5,0xa5,0x00,0xa7,0xa7,0xa7,0x00,0xa7,0xa7,0xa7,0x00,0xa5,0xa5,0xa5,0x00,0xa8,0xa8,0xa8,0x00,0xa8,0xa8,0xa8,0x00,0xa4,0xa4,0xa4,0x00,0xa4,0xa4,0xa4,0x00,0xa4,0xa4,0xa4,0x00,0x9f,0x9f,0x9f,0x1d,0xd7,0xd7,0xd7,0xe2,0xde,0xde,0xde,0xe2,0xce,0xce,0xce,0x1f,0xcf,0xcf,0xcf,0x00,
    0xcf,0xcf,0xcf,0x00,0xcf,0xcf,0xcf,0x1f,0xdf,0xdf,0xdf,0xe2,0xd7,0xd7,0xd7,0xe2,0xa3,0xa3,0xa3,0x1f,0xa2,0xa2,0xa2,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x59,0x59,0x59,0x00,0x6d,0x6d,0x6d,0x00,0xff,0xff,0xff,0x00,0xa5,0xa5,0xa5,0x13,0xa5,0xa5,0xa5,0x13,0xff,0xff,0xff,0x00,0x6d,0x6d,0x6d,0x00,0x5a,0x5a,0x5a,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xa2,0xa2,0xa2,0x00,0xa3,0xa3,0xa3,0x1f,0xd7,0xd7,0xd7,0xe2,0xdf,0xdf,0xdf,0xe2,0xcf,0xcf,0xcf,0x1f,0xcf,0xcf,0xcf,0x00,
    0xcf,0xcf,0xcf,0x00,0xcf,0xcf,0xcf,0x1f,0xdf,0xdf,0xdf,0xe2,0xd7,0xd7,0xd7,0xe2,0xa3,0xa3,0xa3,0x1f,0xa2,0xa2,0xa2,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x47,0x47,0x47,0x00,0xff,0xff,0xff,0x00,0xbb,0xbb,0xbb,0x56,0xd5,0xd5,0xd5,0xcf,0xd5,0xd5,0xd5,0xcf,0xbb,0xbb,0xbb,0x56,0xff,0xff,0xff,0x00,0x48,0x48,0x48,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xa2,0xa2,0xa2,0x00,0xa3,0xa3,0xa3,0x1f,0xd7,0xd7,0xd7,0xe2,0xdf,0xdf,0xdf,0xe2,0xcf,0xcf,0xcf,0x1f,0xcf,0xcf,0xcf,0x00,
    0xcf,0xcf,0xcf,0x00,0xcf,0xcf,0xcf,0x1f,0xdf,0xdf,0xdf,0xe2,0xd7,0xd7,0xd7,0xe2,0xa3,0xa3,0xa3,0x1f,0xa2,0xa2,0xa2,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x93,0x93,0x93,0x00,0x92,0x92,0x92,0x13,0xd2,0xd2,0xd2,0xcf,0xe1,0xe1,0xe1,0xff,0xe1,0xe1,0xe1,0xff,0xd2,0xd2,0xd2,0xcf,0x93,0x93,0x93,0x13,0x94,0x94,0x94,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xa2,0xa2,0xa2,0x00,0xa3,0xa3,0xa3,0x1f,0xd7,0xd7,0xd7,0xe2,0xdf,0xdf,0xdf,0xe2,0xcf,0xcf,0xcf,0x1f,0xcf,0xcf,0xcf,0x00,
    0xcf,0xcf,0xcf,0x00,0xcf,0xcf,0xcf,0x1f,0xdf,0xdf,0xdf,0xe2,0xd7,0xd7,0xd7,0xe2,0xa3,0xa3,0xa3,0x1f,0xa2,0xa2,0xa2,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x9f,0x9f,0x9f,0x00,0x9e,0x9e,0x9e,0x13,0xd5,0xd5,0xd5,0xcf,0xe1,0xe1,0xe1,0xff,0xe1,0xe1,0xe1,0xff,0xd5,0xd5,0xd5,0xcf,0x9f,0x9f,0x9f,0x13,0x9f,0x9f,0x9f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xa2,0xa2,0xa2,0x00,0xa3,0xa3,0xa3,0x1f,0xd7,0xd7,0xd7,0xe2,0xdf,0xdf,0xdf,0xe2,0xcf,0xcf,0xcf,0x1f,0xcf,0xcf,0xcf,0x00,
    0xcf,0xcf,0xcf,0x00,0xcf,0xcf,0xcf,0x1f,0xdf,0xdf,0xdf,0xe2,0xd7,0xd7,0xd7,0xe2,0xa3,0xa3,0xa3,0x1f,0xa2,0xa2,0xa2,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x73,0x73,0x73,0x00,0xff,0xff,0xff,0x00,0xbd,0xbd,0xbd,0x56,0xd5,0xd5,0xd5,0xcf,0xd5,0xd5,0xd5,0xcf,0xbd,0xbd,0xbd,0x56,0xff,0xff,0xff,0x00,0x73,0x73,0x73,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xa2,0xa2,0xa2,0x00,0xa3,0xa3,0xa3,0x1f,0xd7,0xd7,0xd7,0xe2,0xdf,0xdf,0xdf,0xe2,0xcf,0xcf,0xcf,0x1f,0xcf,0xcf,0xcf,0x00,
    0xcf,0xcf,0xcf,0x00,0xcf,0xcf,0xcf,0x1f,0xdf,0xdf,0xdf,0xe2,0xd7,0xd7,0xd7,0xe2,0xa3,0xa3,0xa3,0x1f,0xa2,0xa2,0xa2,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7c,0x7c,0x7c,0x00,0x69,0x69,0x69,0x00,0xff,0xff,0xff,0x00,0xa6,0xa6,0xa6,0x13,0xa4,0xa4,0xa4,0x13,0xff,0xff,0xff,0x00,0x69,0x69,0x69,0x00,0x7c,0x7c,0x7c,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xa2,0xa2,0xa2,0x00,0xa3,0xa3,0xa3,0x1f,0xd7,0xd7,0xd7,0xe2,0xdf,0xdf,0xdf,0xe2,0xcf,0xcf,0xcf,0x1f,0xcf,0xcf,0xcf,0x00,
    0xce,0xce,0xce,0x00,0xce,0xce,0xce,0x1f,0xde,0xde,0xde,0xe2,0xd7,0xd7,0xd7,0xe2,0x9f,0x9f,0x9f,0x1d,0xb3,0xb3,0xb3,0x00,0xc6,0xc6,0xc6,0x00,0xc6,0xc6,0xc6,0x00,0xc6,0xc6,0xc6,0x00,0xc6,0xc6,0xc6,0x00,0xc1,0xc1,0xc1,0x00,0xba,0xba,0xba,0x00,0xba,0xba,0xba,0x00,0xc1,0xc1,0xc1,0x00,0xc6,0xc6,0xc6,0x00,0xc6,0xc6,0xc6,0x00,0xc6,0xc6,0xc6,0x00,0xc6,0xc6,0xc6,0x00,0xb3,0xb3,0xb3,0x00,0x9f,0x9f,0x9f,0x1d,0xd7,0xd7,0xd7,0xe2,0xde,0xde,0xde,0xe2,0xce,0xce,0xce,0x1f,0xce,0xce,0xce,0x00,
    0xa9,0xa9,0xa9,0x00,0xaa,0xaa,0xaa,0x17,0xd7,0xd7,0xd7,0xd7,0xdc,0xdc,0xdc,0xf3,0xc0,0xc0,0xc0,0x56,0xc3,0xc3,0xc3,0x1d,0xc6,0xc6,0xc6,0x1f,0xc6,0xc6,0xc6,0x1f,0xc6,0xc6,0xc6,0x1f,0xc6,0xc6,0xc6,0x1f,0xc6,0xc6,0xc6,0x1f,0xc6,0xc6,0xc6,0x1f,0xc6,0xc6,0xc6,0x1f,0xc6,0xc6,0xc6,0x1f,0xc6,0xc6,0xc6,0x1f,0xc6,0xc6,0xc6,0x1f,0xc6,0xc6,0xc6,0x1f,0xc6,0xc6,0xc6,0x1f,0xc3,0xc3,0xc3,0x1d,0xc0,0xc0,0xc0,0x56,0xdb,0xdb,0xdb,0xf4,0xd7,0xd7,0xd7,0xd7,0xaa,0xaa,0xaa,0x17,0xa9,0xa9,0xa9,0x00,
    0x69,0x69,0x69,0x00,0x00,0x00,0x00,0x02,0xc6,0xc6,0xc6,0x8b,0xde,0xde,0xde,0xff,0xdd,0xdd,0xdd,0xf3,0xdd,0xdd,0xdd,0xe2,0xdd,0xdd,0xdd,0xe2,0xdd,0xdd,0xdd,0xe2,0xdd,0xdd,0xdd,0xe2,0xdd,0xdd,0xdd,0xe2,0xdd,0xdd,0xdd,0xe2,0xdd,0xdd,0xdd,0xe2,0xdd,0xdd,0xdd,0xe2,0xdd,0xdd,0xdd,0xe2,0xdd,0xdd,0xdd,0xe2,0xdd,0xdd,0xdd,0xe2,0xdd,0xdd,0xdd,0xe2,0xdd,0xdd,0xdd,0xe2,0xdd,0xdd,0xdd,0xe2,0xdd,0xdd,0xdd,0xf4,0xde,0xde,0xde,0xff,0xc7,0xc7,0xc7,0x8b,0x00,0x00,0x00,0x02,0x6a,0x6a,0x6a,0x00,
    0x7c,0x7c,0x7c,0x00,0xb3,0xb3,0xb3,0x00,0x9f,0x9f,0x9f,0x14,0xca,0xca,0xca,0x8a,0xd8,0xd8,0xd8,0xd6,0xd9,0xd9,0xd9,0xe1,0xd8,0xd8,0xd8,0xe0,0xd8,0xd8,0xd8,0xe0,0xd8,0xd8,0xd8,0xe0,0xd8,0xd8,0xd8,0xe0,0xd8,0xd8,0xd8,0xe0,0xd8,0xd8,0xd8,0xe0,0xd8,0xd8,0xd8,0xe0,0xd8,0xd8,0xd8,0xe0,0xd8,0xd8,0xd8,0xe0,0xd8,0xd8,0xd8,0xe0,0xd8,0xd8,0xd8,0xe0,0xd8,0xd8,0xd8,0xe0,0xd9,0xd9,0xd9,0xe1,0xd8,0xd8,0xd8,0xd6,0xca,0xca,0xca,0x8a,0x9f,0x9f,0x9f,0x14,0xb3,0xb3,0xb3,0x00,0x7c,0x7c,0x7c,0x00,
    0x00,0x00,0x00,0x00,0xc9,0xc9,0xc9,0x00,0xb0,0xb0,0xb0,0x00,0x00,0x00,0x00,0x02,0xab,0xab,0xab,0x1a,0xaa,0xaa,0xaa,0x24,0xa8,0xa8,0xa8,0x23,0xa9,0xa9,0xa9,0x23,0xa9,0xa9,0xa9,0x23,0xa9,0xa9,0xa9,0x23,0xa9,0xa9,0xa9,0x23,0xa9,0xa9,0xa9,0x23,0xa9,0xa9,0xa9,0x23,0xa9,0xa9,0xa9,0x23,0xa9,0xa9,0xa9,0x23,0xa9,0xa9,0xa9,0x23,0xa9,0xa9,0xa9,0x23,0xa8,0xa8,0xa8,0x23,0xaa,0xaa,0xaa,0x24,0xab,0xab,0xab,0x1a,0x00,0x00,0x00,0x02,0xb0,0xb0,0xb0,0x00,0xc9,0xc9,0xc9,0x00,0x00,0x00,0x00,0x00,

};

const lv_img_dsc_t img_groups_lock_image = {
  .header.magic = LV_IMAGE_HEADER_MAGIC,
  .header.cf = LV_COLOR_FORMAT_ARGB8888,
  .header.flags = 0,
  .header.w = 24,
  .header.h = 24,
  .header.stride = 96,
  .data_size = 2304,
  .data = img_groups_lock_image_map,
};

