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
uint8_t img_location_crosshairs_18_map[] = {

    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfb,0xde,0xdb,0xde,0x1c,0xe7,0x1c,0xe7,0xdb,0xde,0xfb,0xde,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfb,0xde,0xdb,0xde,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x3c,0xe7,0xdb,0xde,0xdb,0xde,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0xdb,0xde,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0xdb,0xde,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0xdb,0xde,0x7d,0xef,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x7d,0xef,0xdb,0xde,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x00,0x00,0x00,0x00,
    0x00,0x00,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x00,0x00,
    0xfb,0xde,0xdb,0xde,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0xdb,0xde,0xfb,0xde,
    0xdb,0xde,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0xdb,0xde,
    0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xba,0xd6,0xba,0xd6,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,
    0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xba,0xd6,0xba,0xd6,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,
    0xdb,0xde,0x3c,0xe7,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x3c,0xe7,0xdb,0xde,
    0xfb,0xde,0xdb,0xde,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0xdb,0xde,0xfb,0xde,
    0x00,0x00,0xdb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xdb,0xde,0x00,0x00,
    0x00,0x00,0x00,0x00,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0xdb,0xde,0x7d,0xef,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x7d,0xef,0xdb,0xde,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0xdb,0xde,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0xdb,0xde,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfb,0xde,0xdb,0xde,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x3c,0xe7,0xdb,0xde,0xdb,0xde,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfb,0xde,0xdb,0xde,0x1c,0xe7,0x1c,0xe7,0xdb,0xde,0xfb,0xde,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x46,0x46,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0f,0xbd,0xbd,0x0f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x17,0x73,0xc3,0xf8,0xf8,0xc3,0x73,0x17,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x2d,0xc2,0xf5,0xbc,0x88,0x88,0xbc,0xf5,0xc2,0x2d,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x17,0xc2,0xe4,0x55,0x0a,0x14,0x14,0x0a,0x54,0xe4,0xc2,0x17,0x00,0x00,0x00,
    0x00,0x00,0x00,0x73,0xf5,0x55,0x10,0x8c,0xdb,0xdb,0x8c,0x10,0x54,0xf5,0x74,0x00,0x00,0x00,0x00,0x00,0x0f,0xc3,0xbc,0x0a,0x8c,0xf5,0xa1,0xa1,0xf5,0x8c,0x0a,0xbc,0xc3,0x0f,0x00,0x00,
    0x00,0x46,0xbd,0xf8,0x88,0x14,0xdb,0xa1,0x02,0x02,0xa1,0xdb,0x14,0x88,0xf8,0xbd,0x46,0x00,0x00,0x46,0xbd,0xf8,0x88,0x14,0xdb,0xa1,0x02,0x02,0xa1,0xdb,0x14,0x88,0xf8,0xbd,0x46,0x00,
    0x00,0x00,0x0f,0xc3,0xbc,0x0a,0x8c,0xf5,0xa1,0xa1,0xf5,0x8c,0x0a,0xbc,0xc3,0x0f,0x00,0x00,0x00,0x00,0x00,0x73,0xf5,0x54,0x10,0x8c,0xdb,0xdb,0x8c,0x10,0x54,0xf5,0x74,0x00,0x00,0x00,
    0x00,0x00,0x00,0x17,0xc2,0xe4,0x54,0x0a,0x14,0x14,0x0a,0x54,0xe4,0xc3,0x17,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x2d,0xc2,0xf5,0xbc,0x88,0x88,0xbc,0xf5,0xc3,0x2d,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x17,0x74,0xc3,0xf8,0xf8,0xc3,0x74,0x17,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0f,0xbd,0xbd,0x0f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x46,0x46,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

};

const lv_img_dsc_t img_location_crosshairs_18 = {
  .header.magic = LV_IMAGE_HEADER_MAGIC,
  .header.cf = LV_COLOR_FORMAT_RGB565A8,
  .header.flags = 0,
  .header.w = 18,
  .header.h = 18,
  .header.stride = 36,
  .data_size = 972,
  .data = img_location_crosshairs_18_map,
};

