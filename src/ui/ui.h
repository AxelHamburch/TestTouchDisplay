// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.1
// LVGL version: 8.3.6
// Project name: TouchDisplay

#ifndef _TOUCHDISPLAY_UI_H
#define _TOUCHDISPLAY_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"

#include "ui_helpers.h"
#include "ui_events.h"
// SCREEN: ui_ScreenStart
void ui_ScreenStart_screen_init(void);
extern lv_obj_t * ui_ScreenStart;
extern lv_obj_t * ui_TopScreenStart;
extern lv_obj_t * ui_LabelTopScreenStart;
void ui_event_ButtonGotoScreenPin(lv_event_t * e);
extern lv_obj_t * ui_ButtonGotoScreenPin;
extern lv_obj_t * ui_LabelButtonGotoScreenPin;
void ui_event_ButtonGotoScreenPinDirekt(lv_event_t * e);
extern lv_obj_t * ui_ButtonGotoScreenPinDirekt;
extern lv_obj_t * ui_LabelButtonGotoScreenPinDirekt;
extern lv_obj_t * ui_ImageBlackHole;
void ui_event_ButtonGotoScreenPlayground(lv_event_t * e);
extern lv_obj_t * ui_ButtonGotoScreenPlayground;
extern lv_obj_t * ui_LabelButtonGotoScreenPlayground;
void ui_event_ButtonPayNow(lv_event_t * e);
extern lv_obj_t * ui_ButtonPayNow;
extern lv_obj_t * ui_LabelButtonPayNowClick;
void ui_event_ButtonPayNow0(lv_event_t * e);
extern lv_obj_t * ui_ButtonPayNow0;
extern lv_obj_t * ui_LabelButtonPayNow2Click;
// SCREEN: ui_ScreenPIN
void ui_ScreenPIN_screen_init(void);
extern lv_obj_t * ui_ScreenPIN;
extern lv_obj_t * ui_TopScreenPIN;
extern lv_obj_t * ui_LabelTopScreenPIN;
extern lv_obj_t * ui_LabelPINValue;
void ui_event_ButtonPin1(lv_event_t * e);
extern lv_obj_t * ui_ButtonPin1;
extern lv_obj_t * ui_LabelButtonPin1;
void ui_event_ButtonPin2(lv_event_t * e);
extern lv_obj_t * ui_ButtonPin2;
extern lv_obj_t * ui_LabelButtonPin2;
void ui_event_ButtonPin3(lv_event_t * e);
extern lv_obj_t * ui_ButtonPin3;
extern lv_obj_t * ui_LabelButtonPin3;
void ui_event_ButtonPin4(lv_event_t * e);
extern lv_obj_t * ui_ButtonPin4;
extern lv_obj_t * ui_LabelButtonPin4;
void ui_event_ButtonPin5(lv_event_t * e);
extern lv_obj_t * ui_ButtonPin5;
extern lv_obj_t * ui_LabelButtonPin5;
void ui_event_ButtonPin6(lv_event_t * e);
extern lv_obj_t * ui_ButtonPin6;
extern lv_obj_t * ui_LabelButtonPin6;
void ui_event_ButtonPin7(lv_event_t * e);
extern lv_obj_t * ui_ButtonPin7;
extern lv_obj_t * ui_LabelButtonPin7;
void ui_event_ButtonPin8(lv_event_t * e);
extern lv_obj_t * ui_ButtonPin8;
extern lv_obj_t * ui_LabelButtonPin8;
void ui_event_ButtonPin9(lv_event_t * e);
extern lv_obj_t * ui_ButtonPin9;
extern lv_obj_t * ui_LabelButtonPin9;
void ui_event_ButtonPin10(lv_event_t * e);
extern lv_obj_t * ui_ButtonPin10;
extern lv_obj_t * ui_LabelButtonPin10;
void ui_event_ButtonPin11(lv_event_t * e);
extern lv_obj_t * ui_ButtonPin11;
extern lv_obj_t * ui_LabelButtonPin11;
void ui_event_ButtonPin12(lv_event_t * e);
extern lv_obj_t * ui_ButtonPin12;
extern lv_obj_t * ui_LabelButtonPin12;
// SCREEN: ui_ScreenConfig
void ui_ScreenConfig_screen_init(void);
extern lv_obj_t * ui_ScreenConfig;
extern lv_obj_t * ui_TopScreenConfig;
extern lv_obj_t * ui_LabelTopScreenConfig;
extern lv_obj_t * ui_LabelFWText;
extern lv_obj_t * ui_LabelFWVersion;
void ui_event_TextAreaConfigHost(lv_event_t * e);
extern lv_obj_t * ui_TextAreaConfigHost;
extern lv_obj_t * ui_LabelConfigHost;
void ui_event_TextAreaConfigDeviceID(lv_event_t * e);
extern lv_obj_t * ui_TextAreaConfigDeviceID;
extern lv_obj_t * ui_LabelConfigDeviceID;
void ui_event_TextAreaConfigDeviceKey(lv_event_t * e);
extern lv_obj_t * ui_TextAreaConfigDeviceKey;
extern lv_obj_t * ui_LabelConfigDeviceKey;
void ui_event_TextAreaConfigPin(lv_event_t * e);
extern lv_obj_t * ui_TextAreaConfigPin;
extern lv_obj_t * ui_LabelConfigPin;
void ui_event_ButtonConfigSave(lv_event_t * e);
extern lv_obj_t * ui_ButtonConfigSave;
extern lv_obj_t * ui_LabelButtonConfigSave;
void ui_event_KeyboardText(lv_event_t * e);
extern lv_obj_t * ui_KeyboardText;
void ui_event_KeyboardNumber(lv_event_t * e);
extern lv_obj_t * ui_KeyboardNumber;
void ui_event_TextAreaConfigCurrency(lv_event_t * e);
extern lv_obj_t * ui_TextAreaConfigCurrency;
extern lv_obj_t * ui_LabelConfigCurrency;
void ui_event_ButtonGoSwitches(lv_event_t * e);
extern lv_obj_t * ui_ButtonGoSwitches;
extern lv_obj_t * ui_LabelButtonGoSwitches;
// SCREEN: ui_ScreenSwitch1
void ui_ScreenSwitch1_screen_init(void);
extern lv_obj_t * ui_ScreenSwitch1;
extern lv_obj_t * ui_TopScreenConfig1;
extern lv_obj_t * ui_LabelTopScreenSwitch2;
extern lv_obj_t * ui_LabelSwitch1;
extern lv_obj_t * ui_LabelTestFunction1;
void ui_event_ButtonTestRelay1(lv_event_t * e);
extern lv_obj_t * ui_ButtonTestRelay1;
extern lv_obj_t * ui_LabelTestRelay1;
void ui_event_TextAreaSwitchName1(lv_event_t * e);
extern lv_obj_t * ui_TextAreaSwitchName1;
extern lv_obj_t * ui_LabelSwitchName1;
void ui_event_TextAreaSwitchPrice1(lv_event_t * e);
extern lv_obj_t * ui_TextAreaSwitchPrice1;
extern lv_obj_t * ui_LabelSwitchPrice1;
void ui_event_TextAreaSwitchTime1(lv_event_t * e);
extern lv_obj_t * ui_TextAreaSwitchTime1;
extern lv_obj_t * ui_LabelSwitchTime1;
extern lv_obj_t * ui_LabelSwitchRelay1;
void ui_event_TextAreaSwitchRelay1(lv_event_t * e);
extern lv_obj_t * ui_TextAreaSwitchRelay1;
void ui_event_ButtonGotoSwitch2(lv_event_t * e);
extern lv_obj_t * ui_ButtonGotoSwitch2;
extern lv_obj_t * ui_LabelButtonConfigSave1;
void ui_event_ButtonGoConfig(lv_event_t * e);
extern lv_obj_t * ui_ButtonGoConfig;
extern lv_obj_t * ui_LabelButtonGoConfig;
void ui_event_KeyboardSwitchText1(lv_event_t * e);
extern lv_obj_t * ui_KeyboardSwitchText1;
void ui_event_KeyboardSwitchNumber1(lv_event_t * e);
extern lv_obj_t * ui_KeyboardSwitchNumber1;
// SCREEN: ui_ScreenSwitch2
void ui_ScreenSwitch2_screen_init(void);
extern lv_obj_t * ui_ScreenSwitch2;
extern lv_obj_t * ui_TopScreenConfig2;
extern lv_obj_t * ui_LabelTopScreenSwitch1;
extern lv_obj_t * ui_LabelSwitch3;
extern lv_obj_t * ui_LabelTestFunction2;
void ui_event_ButtonTestRelay2(lv_event_t * e);
extern lv_obj_t * ui_ButtonTestRelay2;
extern lv_obj_t * ui_LabelTestRelay2;
void ui_event_TextAreaSwitchName2(lv_event_t * e);
extern lv_obj_t * ui_TextAreaSwitchName2;
extern lv_obj_t * ui_LabelSwitchName2;
void ui_event_TextAreaSwitchPrice2(lv_event_t * e);
extern lv_obj_t * ui_TextAreaSwitchPrice2;
extern lv_obj_t * ui_LabelSwitchPrice2;
void ui_event_TextAreaSwitchTime2(lv_event_t * e);
extern lv_obj_t * ui_TextAreaSwitchTime2;
extern lv_obj_t * ui_LabelSwitchTime2;
void ui_event_TextAreaSwitchRelay2(lv_event_t * e);
extern lv_obj_t * ui_TextAreaSwitchRelay2;
extern lv_obj_t * ui_LabelSwitchRelay2;
void ui_event_ButtonGotoSwitch1(lv_event_t * e);
extern lv_obj_t * ui_ButtonGotoSwitch1;
extern lv_obj_t * ui_LabelButtonConfigSave2;
void ui_event_ButtonGoConfig1(lv_event_t * e);
extern lv_obj_t * ui_ButtonGoConfig1;
extern lv_obj_t * ui_LabelButtonGoConfig1;
void ui_event_KeyboardSwitchText2(lv_event_t * e);
extern lv_obj_t * ui_KeyboardSwitchText2;
void ui_event_KeyboardSwitchNumber2(lv_event_t * e);
extern lv_obj_t * ui_KeyboardSwitchNumber2;
// SCREEN: ui_ScreenScan
void ui_ScreenScan_screen_init(void);
extern lv_obj_t * ui_ScreenScan;
extern lv_obj_t * ui_TopScreenScan;
extern lv_obj_t * ui_LabelTopScreenScan;
void ui_event_ButtonGotoScreenPin2(lv_event_t * e);
extern lv_obj_t * ui_ButtonGotoScreenPin2;
extern lv_obj_t * ui_LabelButtonGotoScreenPin2;
void ui_event_ButtonGotoScreenStart1(lv_event_t * e);
extern lv_obj_t * ui_ButtonGotoScreenStart1;
extern lv_obj_t * ui_LabelButtonGotoScreenPin3;
extern lv_obj_t * ui_ImageScanQRCodeBorder;
extern lv_obj_t * ui_LabelProduct;
extern lv_obj_t * ui_LabelPriceAndCurrency;
extern lv_obj_t * ui_Label2;
extern lv_obj_t * ui_PanelCancel;
extern lv_obj_t * ui_LabelPanelCancel;
void ui_event_ButtonYES(lv_event_t * e);
extern lv_obj_t * ui_ButtonYES;
extern lv_obj_t * ui_LabelYES;
void ui_event_ButtonNO(lv_event_t * e);
extern lv_obj_t * ui_ButtonNO;
extern lv_obj_t * ui_LabelNO;
// SCREEN: ui_ScreenPlayground
void ui_ScreenPlayground_screen_init(void);
extern lv_obj_t * ui_ScreenPlayground;
extern lv_obj_t * ui_TopScreenPlay;
extern lv_obj_t * ui_LabelTopScreenPlayground;
void ui_event_ButtonGotoScreenPlay1(lv_event_t * e);
extern lv_obj_t * ui_ButtonGotoScreenPlay1;
extern lv_obj_t * ui_LabelButtonGotoScreenPlay1;
extern lv_obj_t * ui_Label1;
void ui_event_ButtonLEDgreen(lv_event_t * e);
extern lv_obj_t * ui_ButtonLEDgreen;
extern lv_obj_t * ui_LabelButtonLEDgreen;
void ui_event_ButtonLEDblue(lv_event_t * e);
extern lv_obj_t * ui_ButtonLEDblue;
extern lv_obj_t * ui_LabelButtonLEDblue;
void ui_event_ButtonLEDred(lv_event_t * e);
extern lv_obj_t * ui_ButtonLEDred;
extern lv_obj_t * ui_LabelButtonLEDred;
void ui_event_ButtonGotoScreenStarPlay2(lv_event_t * e);
extern lv_obj_t * ui_ButtonGotoScreenStarPlay2;
extern lv_obj_t * ui_ButtonButtonGotoScreenPlay2;
extern lv_obj_t * ui____initial_actions0;

LV_IMG_DECLARE(ui_img_black_hole_small_256_schlagschatten_png);    // assets\black_hole_small 256 Schlagschatten.png
LV_IMG_DECLARE(ui_img_166440904);    // assets\qr-code-slagschaduw-274x274-v2.png

void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
