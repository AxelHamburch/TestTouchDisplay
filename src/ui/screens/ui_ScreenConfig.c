// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.1
// LVGL version: 8.3.6
// Project name: TouchDisplaySmall

#include "../ui.h"

void ui_ScreenConfig_screen_init(void)
{
    ui_ScreenConfig = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_ScreenConfig, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ScreenConfig, lv_color_hex(0x0D3E6E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ScreenConfig, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TopScreenConfig = lv_obj_create(ui_ScreenConfig);
    lv_obj_set_width(ui_TopScreenConfig, lv_pct(100));
    lv_obj_set_height(ui_TopScreenConfig, lv_pct(10));
    lv_obj_set_align(ui_TopScreenConfig, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_TopScreenConfig, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_TopScreenConfig, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_TopScreenConfig, lv_color_hex(0xCFCFD7), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_TopScreenConfig, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_TopScreenConfig, LV_BORDER_SIDE_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LabelTopScreenConfig = lv_label_create(ui_TopScreenConfig);
    lv_obj_set_width(ui_LabelTopScreenConfig, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelTopScreenConfig, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_LabelTopScreenConfig, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelTopScreenConfig, "Set up config");
    lv_obj_set_style_text_color(ui_LabelTopScreenConfig, lv_color_hex(0x0D3E6E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelTopScreenConfig, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui_LabelTopScreenConfig, 3, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui_LabelTopScreenConfig, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LabelTopScreenConfig, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LabelGeneralSetup = lv_label_create(ui_ScreenConfig);
    lv_obj_set_width(ui_LabelGeneralSetup, LV_SIZE_CONTENT);   /// -95
    lv_obj_set_height(ui_LabelGeneralSetup, LV_SIZE_CONTENT);    /// 3
    lv_obj_set_x(ui_LabelGeneralSetup, -83);
    lv_obj_set_y(ui_LabelGeneralSetup, -170);
    lv_obj_set_align(ui_LabelGeneralSetup, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelGeneralSetup, "General Setup");
    lv_obj_set_style_text_color(ui_LabelGeneralSetup, lv_color_hex(0xCFCFD7), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelGeneralSetup, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_decor(ui_LabelGeneralSetup, LV_TEXT_DECOR_UNDERLINE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LabelGeneralSetup, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TextAreaConfigHost = lv_textarea_create(ui_ScreenConfig);
    lv_obj_set_width(ui_TextAreaConfigHost, 200);
    lv_obj_set_height(ui_TextAreaConfigHost, LV_SIZE_CONTENT);    /// 39
    lv_obj_set_x(ui_TextAreaConfigHost, 48);
    lv_obj_set_y(ui_TextAreaConfigHost, -130);
    lv_obj_set_align(ui_TextAreaConfigHost, LV_ALIGN_CENTER);
    lv_textarea_set_placeholder_text(ui_TextAreaConfigHost, "legend.lnbits.com");
    lv_textarea_set_one_line(ui_TextAreaConfigHost, true);

    ui_LabelConfigHost = lv_label_create(ui_ScreenConfig);
    lv_obj_set_width(ui_LabelConfigHost, LV_SIZE_CONTENT);   /// -95
    lv_obj_set_height(ui_LabelConfigHost, LV_SIZE_CONTENT);    /// 3
    lv_obj_set_x(ui_LabelConfigHost, -105);
    lv_obj_set_y(ui_LabelConfigHost, -130);
    lv_obj_set_align(ui_LabelConfigHost, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelConfigHost, "LNbitsHost:");
    lv_obj_set_style_text_color(ui_LabelConfigHost, lv_color_hex(0xCFCFD7), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelConfigHost, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TextAreaConfigDeviceID = lv_textarea_create(ui_ScreenConfig);
    lv_obj_set_width(ui_TextAreaConfigDeviceID, 200);
    lv_obj_set_height(ui_TextAreaConfigDeviceID, LV_SIZE_CONTENT);    /// 39
    lv_obj_set_x(ui_TextAreaConfigDeviceID, 48);
    lv_obj_set_y(ui_TextAreaConfigDeviceID, -88);
    lv_obj_set_align(ui_TextAreaConfigDeviceID, LV_ALIGN_CENTER);
    lv_textarea_set_placeholder_text(ui_TextAreaConfigDeviceID, "DeviceID");
    lv_textarea_set_one_line(ui_TextAreaConfigDeviceID, true);

    ui_LabelConfigDeviceID = lv_label_create(ui_ScreenConfig);
    lv_obj_set_width(ui_LabelConfigDeviceID, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelConfigDeviceID, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LabelConfigDeviceID, -105);
    lv_obj_set_y(ui_LabelConfigDeviceID, -88);
    lv_obj_set_align(ui_LabelConfigDeviceID, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelConfigDeviceID, "DeviceID:");
    lv_obj_set_style_text_color(ui_LabelConfigDeviceID, lv_color_hex(0xCFCFD7), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelConfigDeviceID, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TextAreaConfigDeviceKey = lv_textarea_create(ui_ScreenConfig);
    lv_obj_set_width(ui_TextAreaConfigDeviceKey, 200);
    lv_obj_set_height(ui_TextAreaConfigDeviceKey, LV_SIZE_CONTENT);    /// 39
    lv_obj_set_x(ui_TextAreaConfigDeviceKey, 48);
    lv_obj_set_y(ui_TextAreaConfigDeviceKey, -46);
    lv_obj_set_align(ui_TextAreaConfigDeviceKey, LV_ALIGN_CENTER);
    lv_textarea_set_placeholder_text(ui_TextAreaConfigDeviceKey, "DeviceKey");
    lv_textarea_set_one_line(ui_TextAreaConfigDeviceKey, true);

    ui_LabelConfigDeviceKey = lv_label_create(ui_ScreenConfig);
    lv_obj_set_width(ui_LabelConfigDeviceKey, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelConfigDeviceKey, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LabelConfigDeviceKey, -105);
    lv_obj_set_y(ui_LabelConfigDeviceKey, -46);
    lv_obj_set_align(ui_LabelConfigDeviceKey, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelConfigDeviceKey, "DeviceKey:");
    lv_obj_set_style_text_color(ui_LabelConfigDeviceKey, lv_color_hex(0xCFCFD7), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelConfigDeviceKey, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TextAreaConfigCurrency = lv_textarea_create(ui_ScreenConfig);
    lv_obj_set_width(ui_TextAreaConfigCurrency, 200);
    lv_obj_set_height(ui_TextAreaConfigCurrency, LV_SIZE_CONTENT);    /// 39
    lv_obj_set_x(ui_TextAreaConfigCurrency, 48);
    lv_obj_set_y(ui_TextAreaConfigCurrency, -4);
    lv_obj_set_align(ui_TextAreaConfigCurrency, LV_ALIGN_CENTER);
    lv_textarea_set_placeholder_text(ui_TextAreaConfigCurrency, "sat, USD, EUR, ..");
    lv_textarea_set_one_line(ui_TextAreaConfigCurrency, true);

    ui_LabelConfigCurrency = lv_label_create(ui_ScreenConfig);
    lv_obj_set_width(ui_LabelConfigCurrency, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelConfigCurrency, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LabelConfigCurrency, -105);
    lv_obj_set_y(ui_LabelConfigCurrency, -7);
    lv_obj_set_align(ui_LabelConfigCurrency, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelConfigCurrency, "Currency:");
    lv_obj_set_style_text_color(ui_LabelConfigCurrency, lv_color_hex(0xCFCFD7), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelConfigCurrency, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TextAreaConfigPin = lv_textarea_create(ui_ScreenConfig);
    lv_obj_set_width(ui_TextAreaConfigPin, 200);
    lv_obj_set_height(ui_TextAreaConfigPin, LV_SIZE_CONTENT);    /// 39
    lv_obj_set_x(ui_TextAreaConfigPin, 48);
    lv_obj_set_y(ui_TextAreaConfigPin, 43);
    lv_obj_set_align(ui_TextAreaConfigPin, LV_ALIGN_CENTER);
    lv_textarea_set_max_length(ui_TextAreaConfigPin, 6);
    lv_textarea_set_placeholder_text(ui_TextAreaConfigPin, "Config PIN");
    lv_textarea_set_one_line(ui_TextAreaConfigPin, true);
    lv_obj_set_style_text_color(ui_TextAreaConfigPin, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_TextAreaConfigPin, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_TextAreaConfigPin, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_TextAreaConfigPin, lv_color_hex(0x934646), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_TextAreaConfigPin, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LabelConfigPin = lv_label_create(ui_ScreenConfig);
    lv_obj_set_width(ui_LabelConfigPin, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelConfigPin, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LabelConfigPin, -105);
    lv_obj_set_y(ui_LabelConfigPin, 40);
    lv_obj_set_align(ui_LabelConfigPin, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelConfigPin, "ConfigPIN:");
    lv_obj_set_style_text_color(ui_LabelConfigPin, lv_color_hex(0xCFCFD7), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelConfigPin, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ButtonConfigSave = lv_btn_create(ui_ScreenConfig);
    lv_obj_set_width(ui_ButtonConfigSave, 120);
    lv_obj_set_height(ui_ButtonConfigSave, 41);
    lv_obj_set_x(ui_ButtonConfigSave, 86);
    lv_obj_set_y(ui_ButtonConfigSave, 91);
    lv_obj_set_align(ui_ButtonConfigSave, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ButtonConfigSave, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ButtonConfigSave, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ButtonConfigSave, lv_color_hex(0xCFCFD7), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ButtonConfigSave, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui_ButtonConfigSave, lv_color_hex(0x131212), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ButtonConfigSave, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_ButtonConfigSave, lv_color_hex(0x939393), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_ButtonConfigSave, 255, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_LabelButtonConfigSave = lv_label_create(ui_ButtonConfigSave);
    lv_obj_set_width(ui_LabelButtonConfigSave, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelButtonConfigSave, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_LabelButtonConfigSave, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelButtonConfigSave, "Save+Exit");
    lv_obj_set_style_text_color(ui_LabelButtonConfigSave, lv_color_hex(0x0D3E6E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelButtonConfigSave, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LabelButtonConfigSave, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ButtonGoSwitches = lv_btn_create(ui_ScreenConfig);
    lv_obj_set_width(ui_ButtonGoSwitches, 120);
    lv_obj_set_height(ui_ButtonGoSwitches, 41);
    lv_obj_set_x(ui_ButtonGoSwitches, -70);
    lv_obj_set_y(ui_ButtonGoSwitches, 207);
    lv_obj_set_align(ui_ButtonGoSwitches, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ButtonGoSwitches, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ButtonGoSwitches, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ButtonGoSwitches, lv_color_hex(0xCFCFD7), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ButtonGoSwitches, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui_ButtonGoSwitches, lv_color_hex(0x131212), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ButtonGoSwitches, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_ButtonGoSwitches, lv_color_hex(0x939393), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_ButtonGoSwitches, 255, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_LabelButtonGoSwitches = lv_label_create(ui_ButtonGoSwitches);
    lv_obj_set_width(ui_LabelButtonGoSwitches, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelButtonGoSwitches, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_LabelButtonGoSwitches, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelButtonGoSwitches, "Switch");
    lv_obj_set_style_text_color(ui_LabelButtonGoSwitches, lv_color_hex(0x0D3E6E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelButtonGoSwitches, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LabelButtonGoSwitches, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LabelConfigMoreOptions = lv_label_create(ui_ScreenConfig);
    lv_obj_set_width(ui_LabelConfigMoreOptions, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelConfigMoreOptions, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LabelConfigMoreOptions, -71);
    lv_obj_set_y(ui_LabelConfigMoreOptions, 170);
    lv_obj_set_align(ui_LabelConfigMoreOptions, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelConfigMoreOptions, "More options");
    lv_obj_set_style_text_color(ui_LabelConfigMoreOptions, lv_color_hex(0xCFCFD7), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelConfigMoreOptions, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_KeyboardText = lv_keyboard_create(ui_ScreenConfig);
    lv_obj_set_width(ui_KeyboardText, 320);
    lv_obj_set_height(ui_KeyboardText, 170);
    lv_obj_set_align(ui_KeyboardText, LV_ALIGN_BOTTOM_MID);
    lv_obj_add_flag(ui_KeyboardText, LV_OBJ_FLAG_HIDDEN);     /// Flags

    ui_KeyboardNumber = lv_keyboard_create(ui_ScreenConfig);
    lv_keyboard_set_mode(ui_KeyboardNumber, LV_KEYBOARD_MODE_NUMBER);
    lv_obj_set_width(ui_KeyboardNumber, 320);
    lv_obj_set_height(ui_KeyboardNumber, 170);
    lv_obj_set_align(ui_KeyboardNumber, LV_ALIGN_BOTTOM_MID);
    lv_obj_add_flag(ui_KeyboardNumber, LV_OBJ_FLAG_HIDDEN);     /// Flags

    lv_obj_add_event_cb(ui_TextAreaConfigHost, ui_event_TextAreaConfigHost, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_TextAreaConfigDeviceID, ui_event_TextAreaConfigDeviceID, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_TextAreaConfigDeviceKey, ui_event_TextAreaConfigDeviceKey, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_TextAreaConfigCurrency, ui_event_TextAreaConfigCurrency, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_TextAreaConfigPin, ui_event_TextAreaConfigPin, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ButtonConfigSave, ui_event_ButtonConfigSave, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ButtonGoSwitches, ui_event_ButtonGoSwitches, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_KeyboardText, ui_event_KeyboardText, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_KeyboardNumber, ui_event_KeyboardNumber, LV_EVENT_ALL, NULL);

}
