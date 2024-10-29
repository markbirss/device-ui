#pragma once
#define LGFX_USE_V1

#include <LovyanGFX.hpp>
#include <lgfx/v1/platforms/esp32s3/Bus_RGB.hpp>
#include <lgfx/v1/platforms/esp32s3/Panel_RGB.hpp>

//#ifndef IO_EXPANDER
//#define IO_EXPANDER 0x40
//#endif

//#ifdef CUSTOM_TOUCH_DRIVER
//#include <bb_captouch.h>

#include <TAMC_GT911.h>

#define TOUCH_GT911
#define TOUCH_GT911_SCL 18
#define TOUCH_GT911_SDA 17
#define TOUCH_GT911_INT -1
#define TOUCH_GT911_RST 38
#define TOUCH_GT911_ROTATION ROTATION_NORMAL
#define TOUCH_MAP_X1 480
#define TOUCH_MAP_X2 0
#define TOUCH_MAP_Y1 480
#define TOUCH_MAP_Y2 0

#define TOUCH_SDA 17
#define TOUCH_SCL 18
#define TOUCH_INT -1
#define TOUCH_RST 38

//TAMC_GT911 ts = TAMC_GT911(TOUCH_GT911_SDA, TOUCH_GT911_SCL, TOUCH_GT911_INT, TOUCH_GT911_RST, max(TOUCH_MAP_X1, TOUCH_MAP_X2), max(TOUCH_MAP_Y1, TOUCH_MAP_Y2));



class LGFX_INDICATOR : public lgfx::LGFX_Device
{
    lgfx::Panel_ST7701 _panel_instance;
    lgfx::Bus_RGB _bus_instance;
    lgfx::Light_PWM _light_instance;
    lgfx::Touch_GT911  _touch_instance;

  public:
    const uint16_t screenWidth = 480;
    const uint16_t screenHeight = 480;

    bool hasButton(void) { return true; }

    LGFX_INDICATOR(void)
    {
        {
            auto cfg = _panel_instance.config();
            cfg.memory_width = 480;
            cfg.memory_height = 480;
            cfg.panel_width = screenWidth;
            cfg.panel_height = screenHeight;
            cfg.offset_x = 0;
            cfg.offset_y = 0;
            //cfg.offset_rotation = 2;
            _panel_instance.config(cfg);
        }

        {
            auto cfg = _panel_instance.config_detail();
            cfg.pin_cs = 1;
            cfg.pin_sclk = 12;
            cfg.pin_mosi = 11;
            cfg.use_psram = 1;
            _panel_instance.config_detail(cfg);
        }

        {
            auto cfg = _bus_instance.config();
            cfg.panel = &_panel_instance;
            cfg.pin_d0  = GPIO_NUM_6;  // B0
            cfg.pin_d1  = GPIO_NUM_7;  // B1
            cfg.pin_d2  = GPIO_NUM_15; // B2
            cfg.pin_d3  = GPIO_NUM_16; // B3
            cfg.pin_d4  = GPIO_NUM_8;  // B4
            cfg.pin_d5  = GPIO_NUM_0;  // G0
            cfg.pin_d6  = GPIO_NUM_9;  // G1
            cfg.pin_d7  = GPIO_NUM_14; // G2
            cfg.pin_d8  = GPIO_NUM_47; // G3
            cfg.pin_d9  = GPIO_NUM_48; // G4
            cfg.pin_d10 = GPIO_NUM_3;  // G5
            cfg.pin_d11 = GPIO_NUM_39; // R0
            cfg.pin_d12 = GPIO_NUM_40; // R1
            cfg.pin_d13 = GPIO_NUM_41; // R2
            cfg.pin_d14 = GPIO_NUM_42; // R3
            cfg.pin_d15 = GPIO_NUM_2; // R4

            cfg.pin_henable = GPIO_NUM_45;
            cfg.pin_vsync   = GPIO_NUM_4;
            cfg.pin_hsync   = GPIO_NUM_5;
            cfg.pin_pclk    = GPIO_NUM_21;
            cfg.freq_write  = 14000000;

            cfg.hsync_polarity    = 0;
            cfg.hsync_front_porch = 10;
            cfg.hsync_pulse_width = 8;
            cfg.hsync_back_porch  = 50;
            cfg.vsync_polarity    = 0;
            cfg.vsync_front_porch = 10;
            cfg.vsync_pulse_width = 8;
            cfg.vsync_back_porch  = 20;
            cfg.pclk_idle_high    = 0;
            cfg.de_idle_high      = 1;

            _bus_instance.config(cfg);
        }
        _panel_instance.setBus(&_bus_instance);

        {
            auto cfg = _light_instance.config();
            cfg.pin_bl = 45;
            _light_instance.config(cfg);
        }
        _panel_instance.light(&_light_instance);

        {
            auto cfg = _touch_instance.config();
            //cfg.pin_cs = GPIO_NUM_NC;
            cfg.x_min = 0;
            cfg.x_max = 480;
            cfg.y_min = 0;
            cfg.y_max = 480;
            cfg.bus_shared = false;
            cfg.offset_rotation = 0;

            cfg.i2c_port   = 1;

            cfg.pin_int = GPIO_NUM_NC;
            cfg.pin_sda = GPIO_NUM_17;
            cfg.pin_scl = GPIO_NUM_18;
            cfg.pin_rst = GPIO_NUM_38;

            cfg.freq = 400000;
            _touch_instance.config(cfg);
            _panel_instance.setTouch(&_touch_instance);

        }

        setPanel(&_panel_instance);
    }
};
