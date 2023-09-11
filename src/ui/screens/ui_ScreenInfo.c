// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.1
// LVGL version: 8.3.6
// Project name: TouchDisplaySmall

#include "../ui.h"

void ui_ScreenInfo_screen_init(void)
{
    ui_ScreenInfo = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_ScreenInfo, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ScreenInfo, lv_color_hex(0x0D3E6E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ScreenInfo, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TopScreenPlay1 = lv_obj_create(ui_ScreenInfo);
    lv_obj_set_width(ui_TopScreenPlay1, lv_pct(100));
    lv_obj_set_height(ui_TopScreenPlay1, lv_pct(10));
    lv_obj_set_align(ui_TopScreenPlay1, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_TopScreenPlay1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_TopScreenPlay1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_TopScreenPlay1, lv_color_hex(0xCFCFD7), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_TopScreenPlay1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_TopScreenPlay1, LV_BORDER_SIDE_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LabelTopScreenPlayground1 = lv_label_create(ui_TopScreenPlay1);
    lv_obj_set_width(ui_LabelTopScreenPlayground1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelTopScreenPlayground1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_LabelTopScreenPlayground1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelTopScreenPlayground1, "Info");
    lv_obj_set_style_text_color(ui_LabelTopScreenPlayground1, lv_color_hex(0x0D3E6E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelTopScreenPlayground1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui_LabelTopScreenPlayground1, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui_LabelTopScreenPlayground1, 23, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LabelTopScreenPlayground1, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ButtonGotoScreenPlay2 = lv_btn_create(ui_ScreenInfo);
    lv_obj_set_width(ui_ButtonGotoScreenPlay2, 120);
    lv_obj_set_height(ui_ButtonGotoScreenPlay2, 41);
    lv_obj_set_x(ui_ButtonGotoScreenPlay2, -70);
    lv_obj_set_y(ui_ButtonGotoScreenPlay2, 207);
    lv_obj_set_align(ui_ButtonGotoScreenPlay2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ButtonGotoScreenPlay2, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ButtonGotoScreenPlay2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ButtonGotoScreenPlay2, lv_color_hex(0xCFCFD7), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ButtonGotoScreenPlay2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ButtonGotoScreenPlay2, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LabelButtonGotoScreenPlay2 = lv_label_create(ui_ButtonGotoScreenPlay2);
    lv_obj_set_width(ui_LabelButtonGotoScreenPlay2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelButtonGotoScreenPlay2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_LabelButtonGotoScreenPlay2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelButtonGotoScreenPlay2, "Back");
    lv_obj_set_style_text_color(ui_LabelButtonGotoScreenPlay2, lv_color_hex(0x0D3E6E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelButtonGotoScreenPlay2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LabelButtonGotoScreenPlay2, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LabelInfo = lv_label_create(ui_ScreenInfo);
    lv_obj_set_width(ui_LabelInfo, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelInfo, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LabelInfo, 1);
    lv_obj_set_y(ui_LabelInfo, -81);
    lv_obj_set_align(ui_LabelInfo, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelInfo,
                      "The offline Lightning Switch\nis a bitcoinSwitch that does\nnot require internet access.\nThe user pays an invoice and\nreceives a secret from the\nserver. If the four-digit PIN\nis then entered here, the\nswitching function is\ntriggered.");
    lv_label_set_recolor(ui_LabelInfo, "true");
    lv_obj_set_style_text_color(ui_LabelInfo, lv_color_hex(0xCFCFD7), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelInfo, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LabelInfo, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LabelTestPayment = lv_label_create(ui_ScreenInfo);
    lv_obj_set_width(ui_LabelTestPayment, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelTestPayment, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LabelTestPayment, -64);
    lv_obj_set_y(ui_LabelTestPayment, 61);
    lv_obj_set_align(ui_LabelTestPayment, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelTestPayment, "Test it with a\nsmall payment");
    lv_obj_set_style_text_color(ui_LabelTestPayment, lv_color_hex(0xCFCFD7), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelTestPayment, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_LabelTestPayment, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LabelTestPayment, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LabelMoreInfos = lv_label_create(ui_ScreenInfo);
    lv_obj_set_width(ui_LabelMoreInfos, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelMoreInfos, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LabelMoreInfos, 74);
    lv_obj_set_y(ui_LabelMoreInfos, 36);
    lv_obj_set_align(ui_LabelMoreInfos, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelMoreInfos, "For more\ninformation");
    lv_obj_set_style_text_color(ui_LabelMoreInfos, lv_color_hex(0xCFCFD7), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelMoreInfos, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_LabelMoreInfos, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LabelMoreInfos, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ImageTestButtonGreen = lv_img_create(ui_ScreenInfo);
    lv_img_set_src(ui_ImageTestButtonGreen, &ui_img_buttontestgreen_png);
    lv_obj_set_width(ui_ImageTestButtonGreen, LV_SIZE_CONTENT);   /// 72
    lv_obj_set_height(ui_ImageTestButtonGreen, LV_SIZE_CONTENT);    /// 72
    lv_obj_set_x(ui_ImageTestButtonGreen, -62);
    lv_obj_set_y(ui_ImageTestButtonGreen, 121);
    lv_obj_set_align(ui_ImageTestButtonGreen, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ImageTestButtonGreen, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_ImageTestButtonGreen, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_ImageTestButtonOrange = lv_img_create(ui_ScreenInfo);
    lv_img_set_src(ui_ImageTestButtonOrange, &ui_img_buttontestorange_png);
    lv_obj_set_width(ui_ImageTestButtonOrange, LV_SIZE_CONTENT);   /// 72
    lv_obj_set_height(ui_ImageTestButtonOrange, LV_SIZE_CONTENT);    /// 72
    lv_obj_set_x(ui_ImageTestButtonOrange, -62);
    lv_obj_set_y(ui_ImageTestButtonOrange, 121);
    lv_obj_set_align(ui_ImageTestButtonOrange, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ImageTestButtonOrange, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_ImageTestButtonOrange, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Image1 = lv_img_create(ui_ScreenInfo);
    lv_img_set_src(ui_Image1, &ui_img_ereignishorizont_xyz_128_png);
    lv_obj_set_width(ui_Image1, LV_SIZE_CONTENT);   /// 128
    lv_obj_set_height(ui_Image1, LV_SIZE_CONTENT);    /// 128
    lv_obj_set_x(ui_Image1, 75);
    lv_obj_set_y(ui_Image1, 109);
    lv_obj_set_align(ui_Image1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image1, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_Image1, 180);

    ui_LabelInfoFirmware = lv_label_create(ui_ScreenInfo);
    lv_obj_set_width(ui_LabelInfoFirmware, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelInfoFirmware, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LabelInfoFirmware, 70);
    lv_obj_set_y(ui_LabelInfoFirmware, 195);
    lv_obj_set_align(ui_LabelInfoFirmware, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelInfoFirmware, "Firmware Version");
    lv_obj_set_style_text_color(ui_LabelInfoFirmware, lv_color_hex(0xCFCFD7), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelInfoFirmware, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LabelFWVersion = lv_label_create(ui_ScreenInfo);
    lv_obj_set_width(ui_LabelFWVersion, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelFWVersion, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LabelFWVersion, 70);
    lv_obj_set_y(ui_LabelFWVersion, 216);
    lv_obj_set_align(ui_LabelFWVersion, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelFWVersion, "-fw-");
    lv_obj_set_style_text_color(ui_LabelFWVersion, lv_color_hex(0xCFCFD7), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelFWVersion, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LabelFWVersion, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_ButtonGotoScreenPlay2, ui_event_ButtonGotoScreenPlay2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ImageTestButtonOrange, ui_event_ImageTestButtonOrange, LV_EVENT_ALL, NULL);

}
