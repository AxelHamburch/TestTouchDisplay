// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.1
// LVGL version: 8.3.6
// Project name: TouchDisplay

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////

// SCREEN: ui_ScreenStart
void ui_ScreenStart_screen_init(void);
void ui_event_ScreenStart(lv_event_t * e);
lv_obj_t * ui_ScreenStart;
lv_obj_t * ui_TopScreenStart;
lv_obj_t * ui_LabelTopScreenStart;
void ui_event_ButtonGotoScreenPin(lv_event_t * e);
lv_obj_t * ui_ButtonGotoScreenPin;
lv_obj_t * ui_LabelButtonGotoScreenPin;
void ui_event_ButtonGotoScreenPinDirekt(lv_event_t * e);
lv_obj_t * ui_ButtonGotoScreenPinDirekt;
lv_obj_t * ui_LabelButtonGotoScreenPinDirekt;
void ui_event_ButtonGotoScreenQRCode(lv_event_t * e);
lv_obj_t * ui_ButtonGotoScreenQRCode;
lv_obj_t * ui_LabelButtonGotoScreenQRCode;
lv_obj_t * ui_Image1;

// SCREEN: ui_ScreenPIN
void ui_ScreenPIN_screen_init(void);
void ui_event_ScreenPIN(lv_event_t * e);
lv_obj_t * ui_ScreenPIN;
lv_obj_t * ui_TopScreenPIN;
lv_obj_t * ui_LabelTopScreenPIN;
lv_obj_t * ui_LabelPINValue;
void ui_event_ButtonPin1(lv_event_t * e);
lv_obj_t * ui_ButtonPin1;
lv_obj_t * ui_LabelButtonPin1;
void ui_event_ButtonPin2(lv_event_t * e);
lv_obj_t * ui_ButtonPin2;
lv_obj_t * ui_LabelButtonPin2;
void ui_event_ButtonPin3(lv_event_t * e);
lv_obj_t * ui_ButtonPin3;
lv_obj_t * ui_LabelButtonPin3;
void ui_event_ButtonPin4(lv_event_t * e);
lv_obj_t * ui_ButtonPin4;
lv_obj_t * ui_LabelButtonPin4;
void ui_event_ButtonPin5(lv_event_t * e);
lv_obj_t * ui_ButtonPin5;
lv_obj_t * ui_LabelButtonPin5;
void ui_event_ButtonPin6(lv_event_t * e);
lv_obj_t * ui_ButtonPin6;
lv_obj_t * ui_LabelButtonPin6;
void ui_event_ButtonPin7(lv_event_t * e);
lv_obj_t * ui_ButtonPin7;
lv_obj_t * ui_LabelButtonPin7;
void ui_event_ButtonPin8(lv_event_t * e);
lv_obj_t * ui_ButtonPin8;
lv_obj_t * ui_LabelButtonPin8;
void ui_event_ButtonPin9(lv_event_t * e);
lv_obj_t * ui_ButtonPin9;
lv_obj_t * ui_LabelButtonPin9;
void ui_event_ButtonPin10(lv_event_t * e);
lv_obj_t * ui_ButtonPin10;
lv_obj_t * ui_LabelButtonPin10;
void ui_event_ButtonPin11(lv_event_t * e);
lv_obj_t * ui_ButtonPin11;
lv_obj_t * ui_LabelButtonPin11;
void ui_event_ButtonPin12(lv_event_t * e);
lv_obj_t * ui_ButtonPin12;
lv_obj_t * ui_LabelButtonPin12;

// SCREEN: ui_ScreenConfig
void ui_ScreenConfig_screen_init(void);
void ui_event_ScreenConfig(lv_event_t * e);
lv_obj_t * ui_ScreenConfig;
lv_obj_t * ui_TopScreenConfig;
lv_obj_t * ui_LabelTopScreenConfig;
lv_obj_t * ui_Label1;
void ui_event_TestRelay1(lv_event_t * e);
lv_obj_t * ui_TestRelay1;
lv_obj_t * ui_LabelTestRelay1;
void ui_event_TestRelay2(lv_event_t * e);
lv_obj_t * ui_TestRelay2;
void ui_event_LabelTestRelay2(lv_event_t * e);
lv_obj_t * ui_LabelTestRelay2;
void ui_event_TextAreaConfigHost(lv_event_t * e);
lv_obj_t * ui_TextAreaConfigHost;
lv_obj_t * ui_LabelConfigHost;
void ui_event_TextAreaConfigDeviceID(lv_event_t * e);
lv_obj_t * ui_TextAreaConfigDeviceID;
lv_obj_t * ui_LabelConfigDeviceID;
void ui_event_TextAreaConfigDeviceKey(lv_event_t * e);
lv_obj_t * ui_TextAreaConfigDeviceKey;
lv_obj_t * ui_LabelConfigDeviceKey;
void ui_event_TextAreaConfigPin(lv_event_t * e);
lv_obj_t * ui_TextAreaConfigPin;
lv_obj_t * ui_LabelConfigPin;
void ui_event_ButtonConfigSave(lv_event_t * e);
lv_obj_t * ui_ButtonConfigSave;
lv_obj_t * ui_LabelButtonConfigSave;
void ui_event_KeyboardText(lv_event_t * e);
lv_obj_t * ui_KeyboardText;
void ui_event_KeyboardNumber(lv_event_t * e);
lv_obj_t * ui_KeyboardNumber;
lv_obj_t * ui_LabelTestFunction;

// SCREEN: ui_ScreenQRCode
void ui_ScreenQRCode_screen_init(void);
void ui_event_ScreenQRCode(lv_event_t * e);
lv_obj_t * ui_ScreenQRCode;
lv_obj_t * ui_TopScreenQRCode;
lv_obj_t * ui_LabelTopScreenQRCode;
void ui_event_ButtonGotoScreenPin2(lv_event_t * e);
lv_obj_t * ui_ButtonGotoScreenPin2;
lv_obj_t * ui_LabelButtonGotoScreenPin2;
void ui_event_ButtonGotoScreenStartQRCode(lv_event_t * e);
lv_obj_t * ui_ButtonGotoScreenStartQRCode;
lv_obj_t * ui_LabelButtonGotoScreenPin3;
lv_obj_t * ui_Image2;
lv_obj_t * ui____initial_actions0;
const lv_img_dsc_t * ui_imgset_1355287214[1] = {&ui_img_166440904};

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
void ui_event_ScreenStart(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        ButtonKlick(e);
    }
}
void ui_event_ButtonGotoScreenPin(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_ScreenPIN, LV_SCR_LOAD_ANIM_FADE_ON, 200, 200, &ui_ScreenPIN_screen_init);
    }
}
void ui_event_ButtonGotoScreenPinDirekt(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_ScreenConfig, LV_SCR_LOAD_ANIM_FADE_ON, 100, 100, &ui_ScreenConfig_screen_init);
    }
}
void ui_event_ButtonGotoScreenQRCode(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_ScreenQRCode, LV_SCR_LOAD_ANIM_FADE_ON, 100, 100, &ui_ScreenQRCode_screen_init);
    }
}
void ui_event_ScreenPIN(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        ButtonKlick(e);
    }
}
void ui_event_ButtonPin1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        ButtonPinOneClicked(e);
    }
}
void ui_event_ButtonPin2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        ButtonPinTwoClicked(e);
    }
}
void ui_event_ButtonPin3(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        ButtonPinThreeClicked(e);
    }
}
void ui_event_ButtonPin4(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        ButtonPinFourClicked(e);
    }
}
void ui_event_ButtonPin5(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        ButtonPinFiveClicked(e);
    }
}
void ui_event_ButtonPin6(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        ButtonPinSixClicked(e);
    }
}
void ui_event_ButtonPin7(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        ButtonPinSevenClicked(e);
    }
}
void ui_event_ButtonPin8(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        ButtonPinEightClicked(e);
    }
}
void ui_event_ButtonPin9(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        ButtonPinNineClicked(e);
    }
}
void ui_event_ButtonPin10(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        ButtonPinZeroClicked(e);
    }
}
void ui_event_ButtonPin11(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        ButtonPinCancelClicked(e);
    }
}
void ui_event_ButtonPin12(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        ButtonPinOKClicked(e);
    }
}
void ui_event_ScreenConfig(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        ButtonKlick(e);
    }
}
void ui_event_TestRelay1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        TestRelayOne(e);
    }
    if(event_code == LV_EVENT_PRESSED) {
        _ui_label_set_property(ui_LabelTestRelay1, _UI_LABEL_PROPERTY_TEXT, "ein/aus");
    }
    if(event_code == LV_EVENT_RELEASED) {
        _ui_label_set_property(ui_LabelTestRelay1, _UI_LABEL_PROPERTY_TEXT, "TestRelay1");
    }
}
void ui_event_TestRelay2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        TestRelayTwo(e);
    }
    if(event_code == LV_EVENT_PRESSED) {
        _ui_label_set_property(ui_LabelTestRelay2, _UI_LABEL_PROPERTY_TEXT, "ein/aus");
    }
    if(event_code == LV_EVENT_RELEASED) {
        _ui_label_set_property(ui_LabelTestRelay2, _UI_LABEL_PROPERTY_TEXT, "TestRelay2");
    }
}
void ui_event_LabelTestRelay2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        TestRelayTwo(e);
    }
}
void ui_event_TextAreaConfigHost(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_flag_modify(ui_KeyboardText, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_keyboard_set_target(ui_KeyboardText,  ui_TextAreaConfigHost);
        _ui_flag_modify(ui_KeyboardNumber, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
    }
}
void ui_event_TextAreaConfigDeviceID(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_flag_modify(ui_KeyboardText, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_keyboard_set_target(ui_KeyboardText,  ui_TextAreaConfigDeviceID);
        _ui_flag_modify(ui_KeyboardNumber, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
    }
}
void ui_event_TextAreaConfigDeviceKey(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_flag_modify(ui_KeyboardText, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_keyboard_set_target(ui_KeyboardText,  ui_TextAreaConfigDeviceKey);
        _ui_flag_modify(ui_KeyboardNumber, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
    }
}
void ui_event_TextAreaConfigPin(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_flag_modify(ui_KeyboardNumber, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_keyboard_set_target(ui_KeyboardNumber,  ui_TextAreaConfigPin);
        _ui_flag_modify(ui_KeyboardText, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
    }
}
void ui_event_ButtonConfigSave(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        ButtonConfigSaveAndExit(e);
        _ui_flag_modify(ui_KeyboardText, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_KeyboardNumber, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_screen_change(&ui_ScreenStart, LV_SCR_LOAD_ANIM_FADE_ON, 100, 100, &ui_ScreenStart_screen_init);
    }
}
void ui_event_KeyboardText(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_READY) {
        _ui_flag_modify(ui_KeyboardText, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
    }
}
void ui_event_KeyboardNumber(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_READY) {
        _ui_flag_modify(ui_KeyboardNumber, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
    }
}
void ui_event_ScreenQRCode(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        ButtonKlick(e);
    }
}
void ui_event_ButtonGotoScreenPin2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_ScreenStart, LV_SCR_LOAD_ANIM_FADE_ON, 200, 200, &ui_ScreenStart_screen_init);
    }
}
void ui_event_ButtonGotoScreenStartQRCode(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_ScreenStart, LV_SCR_LOAD_ANIM_FADE_ON, 100, 100, &ui_ScreenStart_screen_init);
    }
}

///////////////////// SCREENS ////////////////////

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_ScreenStart_screen_init();
    ui_ScreenPIN_screen_init();
    ui_ScreenConfig_screen_init();
    ui_ScreenQRCode_screen_init();
    ui____initial_actions0 = lv_obj_create(NULL);
    lv_disp_load_scr(ui_ScreenStart);
}
