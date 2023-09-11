// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.1
// LVGL version: 8.3.6
// Project name: TouchDisplaySmall

#include "../ui.h"

void ui_ScreenPIN_screen_init(void)
{
    ui_ScreenPIN = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_ScreenPIN, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ScreenPIN, lv_color_hex(0x0D3E6E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ScreenPIN, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TopScreenPIN = lv_obj_create(ui_ScreenPIN);
    lv_obj_set_width(ui_TopScreenPIN, lv_pct(100));
    lv_obj_set_height(ui_TopScreenPIN, lv_pct(10));
    lv_obj_set_align(ui_TopScreenPIN, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_TopScreenPIN, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_TopScreenPIN, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_TopScreenPIN, lv_color_hex(0xCFCFD7), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_TopScreenPIN, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_TopScreenPIN, LV_BORDER_SIDE_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LabelTopScreenPIN = lv_label_create(ui_TopScreenPIN);
    lv_obj_set_width(ui_LabelTopScreenPIN, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelTopScreenPIN, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_LabelTopScreenPIN, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelTopScreenPIN, "Enter SECRET PIN");
    lv_obj_set_style_text_color(ui_LabelTopScreenPIN, lv_color_hex(0x0D3E6E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelTopScreenPIN, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui_LabelTopScreenPIN, 3, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui_LabelTopScreenPIN, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LabelTopScreenPIN, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LabelPINValue = lv_label_create(ui_ScreenPIN);
    lv_obj_set_width(ui_LabelPINValue, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelPINValue, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LabelPINValue, 0);
    lv_obj_set_y(ui_LabelPINValue, 70);
    lv_obj_set_align(ui_LabelPINValue, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_LabelPINValue, "ENTER PIN");
    lv_obj_set_style_text_color(ui_LabelPINValue, lv_color_hex(0xCFCFD7), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelPINValue, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui_LabelPINValue, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui_LabelPINValue, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LabelPINValue, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ButtonPin1 = lv_btn_create(ui_ScreenPIN);
    lv_obj_set_width(ui_ButtonPin1, 80);
    lv_obj_set_height(ui_ButtonPin1, 80);
    lv_obj_set_x(ui_ButtonPin1, -90);
    lv_obj_set_y(ui_ButtonPin1, -85);
    lv_obj_set_align(ui_ButtonPin1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ButtonPin1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ButtonPin1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ButtonPin1, lv_color_hex(0xCFCFD7), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ButtonPin1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LabelButtonPin1 = lv_label_create(ui_ButtonPin1);
    lv_obj_set_width(ui_LabelButtonPin1, LV_SIZE_CONTENT);   /// -43
    lv_obj_set_height(ui_LabelButtonPin1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_LabelButtonPin1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelButtonPin1, "1");
    lv_obj_set_style_text_color(ui_LabelButtonPin1, lv_color_hex(0x0D3E6E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelButtonPin1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LabelButtonPin1, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ButtonPin2 = lv_btn_create(ui_ScreenPIN);
    lv_obj_set_width(ui_ButtonPin2, 80);
    lv_obj_set_height(ui_ButtonPin2, 80);
    lv_obj_set_x(ui_ButtonPin2, 0);
    lv_obj_set_y(ui_ButtonPin2, -85);
    lv_obj_set_align(ui_ButtonPin2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ButtonPin2, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ButtonPin2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ButtonPin2, lv_color_hex(0xCFCFD7), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ButtonPin2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LabelButtonPin2 = lv_label_create(ui_ButtonPin2);
    lv_obj_set_width(ui_LabelButtonPin2, LV_SIZE_CONTENT);   /// -43
    lv_obj_set_height(ui_LabelButtonPin2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_LabelButtonPin2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelButtonPin2, "2");
    lv_obj_set_style_text_color(ui_LabelButtonPin2, lv_color_hex(0x0D3E6E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelButtonPin2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LabelButtonPin2, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ButtonPin3 = lv_btn_create(ui_ScreenPIN);
    lv_obj_set_width(ui_ButtonPin3, 80);
    lv_obj_set_height(ui_ButtonPin3, 80);
    lv_obj_set_x(ui_ButtonPin3, 90);
    lv_obj_set_y(ui_ButtonPin3, -85);
    lv_obj_set_align(ui_ButtonPin3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ButtonPin3, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ButtonPin3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ButtonPin3, lv_color_hex(0xCFCFD7), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ButtonPin3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LabelButtonPin3 = lv_label_create(ui_ButtonPin3);
    lv_obj_set_width(ui_LabelButtonPin3, LV_SIZE_CONTENT);   /// -43
    lv_obj_set_height(ui_LabelButtonPin3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_LabelButtonPin3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelButtonPin3, "3");
    lv_obj_set_style_text_color(ui_LabelButtonPin3, lv_color_hex(0x0D3E6E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelButtonPin3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LabelButtonPin3, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ButtonPin4 = lv_btn_create(ui_ScreenPIN);
    lv_obj_set_width(ui_ButtonPin4, 80);
    lv_obj_set_height(ui_ButtonPin4, 80);
    lv_obj_set_x(ui_ButtonPin4, -90);
    lv_obj_set_y(ui_ButtonPin4, 6);
    lv_obj_set_align(ui_ButtonPin4, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ButtonPin4, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ButtonPin4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ButtonPin4, lv_color_hex(0xCFCFD7), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ButtonPin4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LabelButtonPin4 = lv_label_create(ui_ButtonPin4);
    lv_obj_set_width(ui_LabelButtonPin4, LV_SIZE_CONTENT);   /// -43
    lv_obj_set_height(ui_LabelButtonPin4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_LabelButtonPin4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelButtonPin4, "4");
    lv_obj_set_style_text_color(ui_LabelButtonPin4, lv_color_hex(0x0D3E6E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelButtonPin4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LabelButtonPin4, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ButtonPin5 = lv_btn_create(ui_ScreenPIN);
    lv_obj_set_width(ui_ButtonPin5, 80);
    lv_obj_set_height(ui_ButtonPin5, 80);
    lv_obj_set_x(ui_ButtonPin5, 0);
    lv_obj_set_y(ui_ButtonPin5, 6);
    lv_obj_set_align(ui_ButtonPin5, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ButtonPin5, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ButtonPin5, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ButtonPin5, lv_color_hex(0xCFCFD7), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ButtonPin5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LabelButtonPin5 = lv_label_create(ui_ButtonPin5);
    lv_obj_set_width(ui_LabelButtonPin5, LV_SIZE_CONTENT);   /// -43
    lv_obj_set_height(ui_LabelButtonPin5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_LabelButtonPin5, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelButtonPin5, "5");
    lv_obj_set_style_text_color(ui_LabelButtonPin5, lv_color_hex(0x0D3E6E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelButtonPin5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LabelButtonPin5, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ButtonPin6 = lv_btn_create(ui_ScreenPIN);
    lv_obj_set_width(ui_ButtonPin6, 80);
    lv_obj_set_height(ui_ButtonPin6, 80);
    lv_obj_set_x(ui_ButtonPin6, 90);
    lv_obj_set_y(ui_ButtonPin6, 6);
    lv_obj_set_align(ui_ButtonPin6, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ButtonPin6, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ButtonPin6, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ButtonPin6, lv_color_hex(0xCFCFD7), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ButtonPin6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LabelButtonPin6 = lv_label_create(ui_ButtonPin6);
    lv_obj_set_width(ui_LabelButtonPin6, LV_SIZE_CONTENT);   /// -43
    lv_obj_set_height(ui_LabelButtonPin6, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_LabelButtonPin6, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelButtonPin6, "6");
    lv_obj_set_style_text_color(ui_LabelButtonPin6, lv_color_hex(0x0D3E6E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelButtonPin6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LabelButtonPin6, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ButtonPin7 = lv_btn_create(ui_ScreenPIN);
    lv_obj_set_width(ui_ButtonPin7, 80);
    lv_obj_set_height(ui_ButtonPin7, 80);
    lv_obj_set_x(ui_ButtonPin7, -90);
    lv_obj_set_y(ui_ButtonPin7, 96);
    lv_obj_set_align(ui_ButtonPin7, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ButtonPin7, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ButtonPin7, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ButtonPin7, lv_color_hex(0xCFCFD7), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ButtonPin7, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LabelButtonPin7 = lv_label_create(ui_ButtonPin7);
    lv_obj_set_width(ui_LabelButtonPin7, LV_SIZE_CONTENT);   /// -43
    lv_obj_set_height(ui_LabelButtonPin7, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_LabelButtonPin7, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelButtonPin7, "7");
    lv_obj_set_style_text_color(ui_LabelButtonPin7, lv_color_hex(0x0D3E6E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelButtonPin7, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LabelButtonPin7, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ButtonPin8 = lv_btn_create(ui_ScreenPIN);
    lv_obj_set_width(ui_ButtonPin8, 80);
    lv_obj_set_height(ui_ButtonPin8, 80);
    lv_obj_set_x(ui_ButtonPin8, 0);
    lv_obj_set_y(ui_ButtonPin8, 96);
    lv_obj_set_align(ui_ButtonPin8, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ButtonPin8, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ButtonPin8, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ButtonPin8, lv_color_hex(0xCFCFD7), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ButtonPin8, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LabelButtonPin8 = lv_label_create(ui_ButtonPin8);
    lv_obj_set_width(ui_LabelButtonPin8, LV_SIZE_CONTENT);   /// -43
    lv_obj_set_height(ui_LabelButtonPin8, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_LabelButtonPin8, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelButtonPin8, "8");
    lv_obj_set_style_text_color(ui_LabelButtonPin8, lv_color_hex(0x0D3E6E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelButtonPin8, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LabelButtonPin8, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ButtonPin9 = lv_btn_create(ui_ScreenPIN);
    lv_obj_set_width(ui_ButtonPin9, 80);
    lv_obj_set_height(ui_ButtonPin9, 80);
    lv_obj_set_x(ui_ButtonPin9, 90);
    lv_obj_set_y(ui_ButtonPin9, 96);
    lv_obj_set_align(ui_ButtonPin9, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ButtonPin9, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ButtonPin9, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ButtonPin9, lv_color_hex(0xCFCFD7), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ButtonPin9, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LabelButtonPin9 = lv_label_create(ui_ButtonPin9);
    lv_obj_set_width(ui_LabelButtonPin9, LV_SIZE_CONTENT);   /// -43
    lv_obj_set_height(ui_LabelButtonPin9, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_LabelButtonPin9, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelButtonPin9, "9");
    lv_obj_set_style_text_color(ui_LabelButtonPin9, lv_color_hex(0x0D3E6E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelButtonPin9, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LabelButtonPin9, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ButtonPin10 = lv_btn_create(ui_ScreenPIN);
    lv_obj_set_width(ui_ButtonPin10, 80);
    lv_obj_set_height(ui_ButtonPin10, 80);
    lv_obj_set_x(ui_ButtonPin10, 0);
    lv_obj_set_y(ui_ButtonPin10, 186);
    lv_obj_set_align(ui_ButtonPin10, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ButtonPin10, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ButtonPin10, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ButtonPin10, lv_color_hex(0xCFCFD7), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ButtonPin10, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LabelButtonPin10 = lv_label_create(ui_ButtonPin10);
    lv_obj_set_width(ui_LabelButtonPin10, LV_SIZE_CONTENT);   /// -43
    lv_obj_set_height(ui_LabelButtonPin10, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_LabelButtonPin10, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelButtonPin10, "0");
    lv_obj_set_style_text_color(ui_LabelButtonPin10, lv_color_hex(0x0D3E6E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelButtonPin10, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LabelButtonPin10, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ButtonPin11 = lv_btn_create(ui_ScreenPIN);
    lv_obj_set_width(ui_ButtonPin11, 80);
    lv_obj_set_height(ui_ButtonPin11, 80);
    lv_obj_set_x(ui_ButtonPin11, -90);
    lv_obj_set_y(ui_ButtonPin11, 186);
    lv_obj_set_align(ui_ButtonPin11, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ButtonPin11, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ButtonPin11, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ButtonPin11, lv_color_hex(0xCFCFD7), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ButtonPin11, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LabelButtonPin11 = lv_label_create(ui_ButtonPin11);
    lv_obj_set_width(ui_LabelButtonPin11, LV_SIZE_CONTENT);   /// -43
    lv_obj_set_height(ui_LabelButtonPin11, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_LabelButtonPin11, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelButtonPin11, "C");
    lv_obj_set_style_text_color(ui_LabelButtonPin11, lv_color_hex(0x0D3E6E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelButtonPin11, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LabelButtonPin11, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ButtonPin12 = lv_btn_create(ui_ScreenPIN);
    lv_obj_set_width(ui_ButtonPin12, 80);
    lv_obj_set_height(ui_ButtonPin12, 80);
    lv_obj_set_x(ui_ButtonPin12, 90);
    lv_obj_set_y(ui_ButtonPin12, 186);
    lv_obj_set_align(ui_ButtonPin12, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ButtonPin12, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ButtonPin12, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ButtonPin12, lv_color_hex(0xCFCFD7), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ButtonPin12, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LabelButtonPin12 = lv_label_create(ui_ButtonPin12);
    lv_obj_set_width(ui_LabelButtonPin12, LV_SIZE_CONTENT);   /// -43
    lv_obj_set_height(ui_LabelButtonPin12, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LabelButtonPin12, -1);
    lv_obj_set_y(ui_LabelButtonPin12, 0);
    lv_obj_set_align(ui_LabelButtonPin12, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelButtonPin12, "OK");
    lv_obj_set_style_text_color(ui_LabelButtonPin12, lv_color_hex(0x0D3E6E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelButtonPin12, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LabelButtonPin12, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_ButtonPin1, ui_event_ButtonPin1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ButtonPin2, ui_event_ButtonPin2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ButtonPin3, ui_event_ButtonPin3, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ButtonPin4, ui_event_ButtonPin4, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ButtonPin5, ui_event_ButtonPin5, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ButtonPin6, ui_event_ButtonPin6, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ButtonPin7, ui_event_ButtonPin7, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ButtonPin8, ui_event_ButtonPin8, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ButtonPin9, ui_event_ButtonPin9, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ButtonPin10, ui_event_ButtonPin10, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ButtonPin11, ui_event_ButtonPin11, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ButtonPin12, ui_event_ButtonPin12, LV_EVENT_ALL, NULL);

}
