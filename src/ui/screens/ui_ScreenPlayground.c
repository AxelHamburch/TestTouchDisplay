// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.1
// LVGL version: 8.3.6
// Project name: TouchDisplay

#include "../ui.h"

void ui_ScreenPlayground_screen_init(void)
{
    ui_ScreenPlayground = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_ScreenPlayground, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ScreenPlayground, lv_color_hex(0x424344), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ScreenPlayground, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TopScreenPlay = lv_obj_create(ui_ScreenPlayground);
    lv_obj_set_width(ui_TopScreenPlay, lv_pct(100));
    lv_obj_set_height(ui_TopScreenPlay, lv_pct(10));
    lv_obj_set_align(ui_TopScreenPlay, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_TopScreenPlay, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_TopScreenPlay, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_TopScreenPlay, lv_color_hex(0x828284), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_TopScreenPlay, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_TopScreenPlay, LV_BORDER_SIDE_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LabelTopScreenPlayground = lv_label_create(ui_TopScreenPlay);
    lv_obj_set_width(ui_LabelTopScreenPlayground, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelTopScreenPlayground, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_LabelTopScreenPlayground, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelTopScreenPlayground, "ScreenPlayground");
    lv_obj_set_style_text_color(ui_LabelTopScreenPlayground, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelTopScreenPlayground, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LabelTopScreenPlayground, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ButtonGotoScreenPlay1 = lv_btn_create(ui_ScreenPlayground);
    lv_obj_set_width(ui_ButtonGotoScreenPlay1, 100);
    lv_obj_set_height(ui_ButtonGotoScreenPlay1, 50);
    lv_obj_set_x(ui_ButtonGotoScreenPlay1, -62);
    lv_obj_set_y(ui_ButtonGotoScreenPlay1, 206);
    lv_obj_set_align(ui_ButtonGotoScreenPlay1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ButtonGotoScreenPlay1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ButtonGotoScreenPlay1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ButtonGotoScreenPlay1, lv_color_hex(0xCFCFD7), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ButtonGotoScreenPlay1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ButtonGotoScreenPlay1, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LabelButtonGotoScreenPlay1 = lv_label_create(ui_ButtonGotoScreenPlay1);
    lv_obj_set_width(ui_LabelButtonGotoScreenPlay1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelButtonGotoScreenPlay1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_LabelButtonGotoScreenPlay1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelButtonGotoScreenPlay1, "Back");
    lv_obj_set_style_text_color(ui_LabelButtonGotoScreenPlay1, lv_color_hex(0x424344), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelButtonGotoScreenPlay1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LabelButtonGotoScreenPlay1, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label1 = lv_label_create(ui_ScreenPlayground);
    lv_obj_set_width(ui_Label1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label1, -105);
    lv_obj_set_y(ui_Label1, -150);
    lv_obj_set_align(ui_Label1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label1, "RGB LED");
    lv_obj_set_style_text_color(ui_Label1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ButtonLEDgreen = lv_btn_create(ui_ScreenPlayground);
    lv_obj_set_width(ui_ButtonLEDgreen, 56);
    lv_obj_set_height(ui_ButtonLEDgreen, 32);
    lv_obj_set_x(ui_ButtonLEDgreen, 38);
    lv_obj_set_y(ui_ButtonLEDgreen, -150);
    lv_obj_set_align(ui_ButtonLEDgreen, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ButtonLEDgreen, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ButtonLEDgreen, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ButtonLEDgreen, lv_color_hex(0x00FF00), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ButtonLEDgreen, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LabelButtonLEDgreen = lv_label_create(ui_ButtonLEDgreen);
    lv_obj_set_width(ui_LabelButtonLEDgreen, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelButtonLEDgreen, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_LabelButtonLEDgreen, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelButtonLEDgreen, "green");
    lv_obj_set_style_text_color(ui_LabelButtonLEDgreen, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelButtonLEDgreen, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LabelButtonLEDgreen, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ButtonLEDblue = lv_btn_create(ui_ScreenPlayground);
    lv_obj_set_width(ui_ButtonLEDblue, 56);
    lv_obj_set_height(ui_ButtonLEDblue, 32);
    lv_obj_set_x(ui_ButtonLEDblue, 106);
    lv_obj_set_y(ui_ButtonLEDblue, -150);
    lv_obj_set_align(ui_ButtonLEDblue, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ButtonLEDblue, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ButtonLEDblue, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ButtonLEDblue, lv_color_hex(0x0000FF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ButtonLEDblue, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LabelButtonLEDblue = lv_label_create(ui_ButtonLEDblue);
    lv_obj_set_width(ui_LabelButtonLEDblue, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelButtonLEDblue, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_LabelButtonLEDblue, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelButtonLEDblue, "blue");
    lv_obj_set_style_text_color(ui_LabelButtonLEDblue, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelButtonLEDblue, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LabelButtonLEDblue, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ButtonLEDred = lv_btn_create(ui_ScreenPlayground);
    lv_obj_set_width(ui_ButtonLEDred, 56);
    lv_obj_set_height(ui_ButtonLEDred, 32);
    lv_obj_set_x(ui_ButtonLEDred, -30);
    lv_obj_set_y(ui_ButtonLEDred, -150);
    lv_obj_set_align(ui_ButtonLEDred, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ButtonLEDred, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ButtonLEDred, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ButtonLEDred, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ButtonLEDred, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LabelButtonLEDred = lv_label_create(ui_ButtonLEDred);
    lv_obj_set_width(ui_LabelButtonLEDred, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelButtonLEDred, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_LabelButtonLEDred, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelButtonLEDred, "red");
    lv_obj_set_style_text_color(ui_LabelButtonLEDred, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelButtonLEDred, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LabelButtonLEDred, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ButtonGotoScreenStarPlay2 = lv_btn_create(ui_ScreenPlayground);
    lv_obj_set_width(ui_ButtonGotoScreenStarPlay2, 100);
    lv_obj_set_height(ui_ButtonGotoScreenStarPlay2, 50);
    lv_obj_set_x(ui_ButtonGotoScreenStarPlay2, 52);
    lv_obj_set_y(ui_ButtonGotoScreenStarPlay2, 206);
    lv_obj_set_align(ui_ButtonGotoScreenStarPlay2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ButtonGotoScreenStarPlay2, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ButtonGotoScreenStarPlay2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ButtonGotoScreenStarPlay2, lv_color_hex(0xCFCFD7), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ButtonGotoScreenStarPlay2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui_ButtonGotoScreenStarPlay2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ButtonGotoScreenStarPlay2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui_ButtonGotoScreenStarPlay2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui_ButtonGotoScreenStarPlay2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ButtonGotoScreenStarPlay2, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ButtonButtonGotoScreenPlay2 = lv_label_create(ui_ButtonGotoScreenStarPlay2);
    lv_obj_set_width(ui_ButtonButtonGotoScreenPlay2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ButtonButtonGotoScreenPlay2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_ButtonButtonGotoScreenPlay2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_ButtonButtonGotoScreenPlay2, "Back");
    lv_obj_set_style_text_color(ui_ButtonButtonGotoScreenPlay2, lv_color_hex(0x424344), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ButtonButtonGotoScreenPlay2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ButtonButtonGotoScreenPlay2, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel1 = lv_obj_create(ui_ScreenPlayground);
    lv_obj_set_width(ui_Panel1, 111);
    lv_obj_set_height(ui_Panel1, 108);
    lv_obj_set_align(ui_Panel1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    lv_obj_add_event_cb(ui_ButtonGotoScreenPlay1, ui_event_ButtonGotoScreenPlay1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ButtonLEDgreen, ui_event_ButtonLEDgreen, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ButtonLEDblue, ui_event_ButtonLEDblue, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ButtonLEDred, ui_event_ButtonLEDred, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ButtonGotoScreenStarPlay2, ui_event_ButtonGotoScreenStarPlay2, LV_EVENT_ALL, NULL);

}
