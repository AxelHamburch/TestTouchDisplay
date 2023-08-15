// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.1
// LVGL version: 8.3.6
// Project name: TouchDisplay

#include "../ui.h"

void ui_ScreenStart_screen_init(void)
{
    ui_ScreenStart = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_ScreenStart, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ScreenStart, lv_color_hex(0x424344), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ScreenStart, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TopScreenStart = lv_obj_create(ui_ScreenStart);
    lv_obj_set_width(ui_TopScreenStart, lv_pct(100));
    lv_obj_set_height(ui_TopScreenStart, lv_pct(10));
    lv_obj_set_align(ui_TopScreenStart, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_TopScreenStart, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_TopScreenStart, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_TopScreenStart, lv_color_hex(0x828284), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_TopScreenStart, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_TopScreenStart, LV_BORDER_SIDE_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LabelTopScreenStart = lv_label_create(ui_TopScreenStart);
    lv_obj_set_width(ui_LabelTopScreenStart, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelTopScreenStart, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_LabelTopScreenStart, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelTopScreenStart, "ScreenStart");
    lv_obj_set_style_text_color(ui_LabelTopScreenStart, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelTopScreenStart, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LabelTopScreenStart, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ButtonGotoScreenPin = lv_btn_create(ui_ScreenStart);
    lv_obj_set_width(ui_ButtonGotoScreenPin, 100);
    lv_obj_set_height(ui_ButtonGotoScreenPin, 50);
    lv_obj_set_x(ui_ButtonGotoScreenPin, 3);
    lv_obj_set_y(ui_ButtonGotoScreenPin, 205);
    lv_obj_set_align(ui_ButtonGotoScreenPin, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ButtonGotoScreenPin, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ButtonGotoScreenPin, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ButtonGotoScreenPin, lv_color_hex(0x386E41), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ButtonGotoScreenPin, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ButtonGotoScreenPin, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LabelButtonGotoScreenPin = lv_label_create(ui_ButtonGotoScreenPin);
    lv_obj_set_width(ui_LabelButtonGotoScreenPin, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelButtonGotoScreenPin, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_LabelButtonGotoScreenPin, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelButtonGotoScreenPin, "Config");
    lv_obj_set_style_text_font(ui_LabelButtonGotoScreenPin, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ButtonGotoScreenPinDirekt = lv_btn_create(ui_ScreenStart);
    lv_obj_set_width(ui_ButtonGotoScreenPinDirekt, 100);
    lv_obj_set_height(ui_ButtonGotoScreenPinDirekt, 50);
    lv_obj_set_x(ui_ButtonGotoScreenPinDirekt, -101);
    lv_obj_set_y(ui_ButtonGotoScreenPinDirekt, 205);
    lv_obj_set_align(ui_ButtonGotoScreenPinDirekt, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ButtonGotoScreenPinDirekt, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ButtonGotoScreenPinDirekt, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ButtonGotoScreenPinDirekt, lv_color_hex(0x386E41), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ButtonGotoScreenPinDirekt, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ButtonGotoScreenPinDirekt, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LabelButtonGotoScreenPinDirekt = lv_label_create(ui_ButtonGotoScreenPinDirekt);
    lv_obj_set_width(ui_LabelButtonGotoScreenPinDirekt, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelButtonGotoScreenPinDirekt, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_LabelButtonGotoScreenPinDirekt, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelButtonGotoScreenPinDirekt, "direkt");
    lv_obj_set_style_text_font(ui_LabelButtonGotoScreenPinDirekt, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ButtonGotoScreenScan = lv_btn_create(ui_ScreenStart);
    lv_obj_set_width(ui_ButtonGotoScreenScan, 100);
    lv_obj_set_height(ui_ButtonGotoScreenScan, 50);
    lv_obj_set_x(ui_ButtonGotoScreenScan, 107);
    lv_obj_set_y(ui_ButtonGotoScreenScan, 205);
    lv_obj_set_align(ui_ButtonGotoScreenScan, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ButtonGotoScreenScan, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ButtonGotoScreenScan, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ButtonGotoScreenScan, lv_color_hex(0x386E41), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ButtonGotoScreenScan, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ButtonGotoScreenScan, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LabelButtonGotoScreenScan = lv_label_create(ui_ButtonGotoScreenScan);
    lv_obj_set_width(ui_LabelButtonGotoScreenScan, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelButtonGotoScreenScan, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_LabelButtonGotoScreenScan, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelButtonGotoScreenScan, "Scan");
    lv_obj_set_style_text_font(ui_LabelButtonGotoScreenScan, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ImageBlackHole = lv_img_create(ui_ScreenStart);
    lv_img_set_src(ui_ImageBlackHole, &ui_img_black_hole_small_256_schlagschatten_png);
    lv_obj_set_width(ui_ImageBlackHole, LV_SIZE_CONTENT);   /// 256
    lv_obj_set_height(ui_ImageBlackHole, LV_SIZE_CONTENT);    /// 256
    lv_obj_set_align(ui_ImageBlackHole, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ImageBlackHole, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_ImageBlackHole, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_ButtonGotoScreenPlayground = lv_btn_create(ui_ScreenStart);
    lv_obj_set_width(ui_ButtonGotoScreenPlayground, 100);
    lv_obj_set_height(ui_ButtonGotoScreenPlayground, 50);
    lv_obj_set_x(ui_ButtonGotoScreenPlayground, -101);
    lv_obj_set_y(ui_ButtonGotoScreenPlayground, 148);
    lv_obj_set_align(ui_ButtonGotoScreenPlayground, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ButtonGotoScreenPlayground, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ButtonGotoScreenPlayground, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ButtonGotoScreenPlayground, lv_color_hex(0x386E41), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ButtonGotoScreenPlayground, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ButtonGotoScreenPlayground, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LabelButtonGotoScreenPlayground = lv_label_create(ui_ButtonGotoScreenPlayground);
    lv_obj_set_width(ui_LabelButtonGotoScreenPlayground, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelButtonGotoScreenPlayground, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_LabelButtonGotoScreenPlayground, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelButtonGotoScreenPlayground, "Playgr.");
    lv_obj_set_style_text_font(ui_LabelButtonGotoScreenPlayground, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ButtonPayNow = lv_btn_create(ui_ScreenStart);
    lv_obj_set_width(ui_ButtonPayNow, 100);
    lv_obj_set_height(ui_ButtonPayNow, 50);
    lv_obj_set_x(ui_ButtonPayNow, 3);
    lv_obj_set_y(ui_ButtonPayNow, 149);
    lv_obj_set_align(ui_ButtonPayNow, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ButtonPayNow, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ButtonPayNow, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ButtonPayNow, lv_color_hex(0x386E41), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ButtonPayNow, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ButtonPayNow, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LabelButtonPayNowClick = lv_label_create(ui_ButtonPayNow);
    lv_obj_set_width(ui_LabelButtonPayNowClick, LV_SIZE_CONTENT);   /// -714
    lv_obj_set_height(ui_LabelButtonPayNowClick, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_LabelButtonPayNowClick, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelButtonPayNowClick, "Pay");
    lv_obj_set_style_text_font(ui_LabelButtonPayNowClick, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ButtonPayNow0 = lv_btn_create(ui_ScreenStart);
    lv_obj_set_width(ui_ButtonPayNow0, 100);
    lv_obj_set_height(ui_ButtonPayNow0, 50);
    lv_obj_set_x(ui_ButtonPayNow0, 106);
    lv_obj_set_y(ui_ButtonPayNow0, 149);
    lv_obj_set_align(ui_ButtonPayNow0, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ButtonPayNow0, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ButtonPayNow0, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ButtonPayNow0, lv_color_hex(0x386E41), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ButtonPayNow0, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ButtonPayNow0, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LabelButtonPayNow0Click = lv_label_create(ui_ButtonPayNow0);
    lv_obj_set_width(ui_LabelButtonPayNow0Click, LV_SIZE_CONTENT);   /// -714
    lv_obj_set_height(ui_LabelButtonPayNow0Click, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_LabelButtonPayNow0Click, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelButtonPayNow0Click, "Pay0");
    lv_obj_set_style_text_font(ui_LabelButtonPayNow0Click, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_ButtonGotoScreenPin, ui_event_ButtonGotoScreenPin, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ButtonGotoScreenPinDirekt, ui_event_ButtonGotoScreenPinDirekt, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ButtonGotoScreenScan, ui_event_ButtonGotoScreenScan, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ButtonGotoScreenPlayground, ui_event_ButtonGotoScreenPlayground, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ButtonPayNow, ui_event_ButtonPayNow, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ButtonPayNow0, ui_event_ButtonPayNow0, LV_EVENT_ALL, NULL);

}
