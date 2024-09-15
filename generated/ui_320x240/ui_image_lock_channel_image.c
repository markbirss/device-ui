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
uint8_t img_lock_channel_image_map[] = {

    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xdb,0xde,0xbe,0xf7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xdf,0xff,0xdb,0xde,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0xc6,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xb6,0xb5,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xdb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xdb,0xde,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xbe,0xf7,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0xbe,0xf7,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0xba,0xd6,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0xba,0xd6,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0xfb,0xde,0xdb,0xde,0x1c,0xe7,0xdb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xdb,0xde,0x1c,0xe7,0xdb,0xde,0xfb,0xde,0x00,0x00,0x00,0x00,
    0x00,0x00,0xba,0xd6,0xdb,0xde,0x3c,0xe7,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x3c,0xe7,0xdb,0xde,0xba,0xd6,0x00,0x00,
    0x00,0x00,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0x00,0x00,
    0x00,0x00,0xfb,0xde,0xdb,0xde,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0xdb,0xde,0xfb,0xde,0x00,0x00,
    0x00,0x00,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xdb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x00,0x00,
    0x00,0x00,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x00,0x00,
    0x00,0x00,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x00,0x00,
    0x00,0x00,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x00,0x00,
    0x00,0x00,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x00,0x00,
    0x00,0x00,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x00,0x00,
    0x00,0x00,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x00,0x00,
    0x00,0x00,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x00,0x00,
    0x00,0x00,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x00,0x00,
    0x00,0x00,0xfb,0xde,0xdb,0xde,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0xdb,0xde,0xfb,0xde,0x00,0x00,
    0x00,0x00,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x00,0x00,
    0x00,0x00,0xba,0xd6,0xdb,0xde,0x3c,0xe7,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x3c,0xe7,0xba,0xd6,0xba,0xd6,0x00,0x00,
    0x00,0x00,0x00,0x00,0xfb,0xde,0xdb,0xde,0x1c,0xe7,0xdb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xdb,0xde,0x1c,0xe7,0xba,0xd6,0xdb,0xde,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0xba,0xd6,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0xba,0xd6,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x1a,0x1a,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x59,0xb6,0xdd,0xdd,0xb6,0x59,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x86,0xfa,0xff,0xea,0xea,0xff,0xfa,0x86,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x59,0xfa,0xec,0x73,0x28,0x28,0x73,0xec,0xfa,0x59,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xb6,0xff,0x71,0x00,0x00,0x00,0x00,0x71,0xff,0xb6,0x07,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x02,0x2c,0xdf,0xee,0x43,0x1c,0x1f,0x1f,0x1c,0x43,0xee,0xe0,0x2c,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x37,0xa5,0xda,0xfd,0xfd,0xe6,0xe2,0xe2,0xe2,0xe2,0xe6,0xfd,0xfd,0xda,0xa5,0x37,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x37,0xdd,0xff,0xf0,0xe2,0xe1,0xe1,0xe1,0xe2,0xe2,0xe1,0xe1,0xe1,0xe2,0xf0,0xff,0xdd,0x37,0x00,0x00,0x00,0x00,0x00,0x04,0xa6,0xff,0xa8,0x32,0x20,0x1e,0x2d,0x2d,0x1e,0x1e,0x2d,0x2d,0x1e,0x20,0x32,0xa7,0xff,0xa6,0x04,0x00,0x00,
    0x00,0x00,0x15,0xd6,0xf0,0x32,0x00,0x00,0x09,0xa9,0xa9,0x08,0x08,0xa9,0xa9,0x09,0x00,0x00,0x32,0xf0,0xd6,0x15,0x00,0x00,0x00,0x00,0x1d,0xe1,0xe4,0x20,0x00,0x20,0x86,0xf3,0xf3,0x8e,0x8e,0xf3,0xf3,0x86,0x20,0x00,0x20,0xe4,0xe1,0x1d,0x00,0x00,
    0x00,0x00,0x1f,0xe2,0xe2,0x1f,0x00,0x6d,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x6d,0x00,0x1f,0xe2,0xe2,0x1f,0x00,0x00,0x00,0x00,0x1f,0xe2,0xe2,0x1f,0x00,0x20,0x86,0xf1,0xf1,0x8e,0x8e,0xf1,0xf1,0x86,0x20,0x00,0x1f,0xe2,0xe2,0x1f,0x00,0x00,
    0x00,0x00,0x1f,0xe2,0xe2,0x1f,0x00,0x00,0x18,0xe1,0xe1,0x17,0x16,0xe1,0xe2,0x18,0x00,0x00,0x1f,0xe2,0xe2,0x1f,0x00,0x00,0x00,0x00,0x1f,0xe2,0xe2,0x1f,0x00,0x20,0x85,0xf1,0xf1,0x8e,0x8e,0xf1,0xf1,0x86,0x20,0x00,0x1f,0xe2,0xe2,0x1f,0x00,0x00,
    0x00,0x00,0x1f,0xe2,0xe2,0x1f,0x00,0x6d,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x6d,0x00,0x1f,0xe2,0xe2,0x1f,0x00,0x00,0x00,0x00,0x1d,0xe1,0xe4,0x20,0x00,0x20,0x86,0xf3,0xf3,0x8e,0x8e,0xf3,0xf3,0x86,0x20,0x00,0x20,0xe4,0xe1,0x1d,0x00,0x00,
    0x00,0x00,0x15,0xd6,0xf0,0x32,0x00,0x00,0x09,0xa9,0xa9,0x08,0x08,0xa9,0xa9,0x09,0x00,0x00,0x32,0xf0,0xd6,0x15,0x00,0x00,0x00,0x00,0x04,0xa6,0xff,0xa7,0x32,0x20,0x1e,0x2d,0x2d,0x1e,0x1e,0x2d,0x2d,0x1e,0x20,0x32,0xa7,0xff,0xa6,0x04,0x00,0x00,
    0x00,0x00,0x00,0x37,0xdd,0xff,0xf0,0xe4,0xe2,0xe1,0xe1,0xe2,0xe2,0xe1,0xe1,0xe2,0xe4,0xf0,0xff,0xdd,0x38,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x37,0xa6,0xd6,0xe1,0xe2,0xe2,0xe2,0xe2,0xe2,0xe2,0xe2,0xe2,0xe1,0xd6,0xa6,0x38,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x04,0x15,0x1d,0x1f,0x1f,0x1f,0x1f,0x1f,0x1f,0x1f,0x1f,0x1d,0x15,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

};

const lv_img_dsc_t img_lock_channel_image = {
  .header.magic = LV_IMAGE_HEADER_MAGIC,
  .header.cf = LV_COLOR_FORMAT_RGB565A8,
  .header.flags = 0,
  .header.w = 24,
  .header.h = 24,
  .header.stride = 48,
  .data_size = 1728,
  .data = img_lock_channel_image_map,
};

