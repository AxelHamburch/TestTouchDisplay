// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.2
// LVGL version: 8.3.6
// Project name: TouchDisplaySmall

#ifndef _TOUCHDISPLAYSMALL_UI_H
#define _TOUCHDISPLAYSMALL_UI_H

#ifdef __cplusplus
extern "C" {
#endif

    #include "lvgl.h"

#include "ui_helpers.h"
#include "ui_events.h"
// SCREEN: ui_ScreenStart
void ui_ScreenStart_screen_init(void);
extern lv_obj_t *ui_ScreenStart;
extern lv_obj_t *ui_TopScreenStart;
extern lv_obj_t *ui_LabelTopScreenStart;
extern lv_obj_t *ui_ImageBitcoinSwitchGreen;
void ui_event_ImageBitcoinSwitchOrange( lv_event_t * e);
extern lv_obj_t *ui_ImageBitcoinSwitchOrange;
extern lv_obj_t *ui_ImageOfflineLNSwitch;
void ui_event_ImageSettings( lv_event_t * e);
extern lv_obj_t *ui_ImageSettings;
void ui_event_ImageInfo( lv_event_t * e);
extern lv_obj_t *ui_ImageInfo;
extern lv_obj_t *ui_PanelPINConfig;
extern lv_obj_t *ui_LabelEnterConfigPin;
extern lv_obj_t *ui_TextAreaPINConfig;
void ui_event_ButtonCancelPIN( lv_event_t * e);
extern lv_obj_t *ui_ButtonCancelPIN;
extern lv_obj_t *ui_LabelCancelPIN;
extern lv_obj_t *ui_KeyboardPINConfig;
extern lv_obj_t *ui_Image2;
// SCREEN: ui_ScreenPIN
void ui_ScreenPIN_screen_init(void);
extern lv_obj_t *ui_ScreenPIN;
extern lv_obj_t *ui_TopScreenPIN;
extern lv_obj_t *ui_LabelTopScreenPIN;
extern lv_obj_t *ui_LabelPINValue;
void ui_event_ButtonPin1( lv_event_t * e);
extern lv_obj_t *ui_ButtonPin1;
extern lv_obj_t *ui_LabelButtonPin1;
void ui_event_ButtonPin2( lv_event_t * e);
extern lv_obj_t *ui_ButtonPin2;
extern lv_obj_t *ui_LabelButtonPin2;
void ui_event_ButtonPin3( lv_event_t * e);
extern lv_obj_t *ui_ButtonPin3;
extern lv_obj_t *ui_LabelButtonPin3;
void ui_event_ButtonPin4( lv_event_t * e);
extern lv_obj_t *ui_ButtonPin4;
extern lv_obj_t *ui_LabelButtonPin4;
void ui_event_ButtonPin5( lv_event_t * e);
extern lv_obj_t *ui_ButtonPin5;
extern lv_obj_t *ui_LabelButtonPin5;
void ui_event_ButtonPin6( lv_event_t * e);
extern lv_obj_t *ui_ButtonPin6;
extern lv_obj_t *ui_LabelButtonPin6;
void ui_event_ButtonPin7( lv_event_t * e);
extern lv_obj_t *ui_ButtonPin7;
extern lv_obj_t *ui_LabelButtonPin7;
void ui_event_ButtonPin8( lv_event_t * e);
extern lv_obj_t *ui_ButtonPin8;
extern lv_obj_t *ui_LabelButtonPin8;
void ui_event_ButtonPin9( lv_event_t * e);
extern lv_obj_t *ui_ButtonPin9;
extern lv_obj_t *ui_LabelButtonPin9;
void ui_event_ButtonPin10( lv_event_t * e);
extern lv_obj_t *ui_ButtonPin10;
extern lv_obj_t *ui_LabelButtonPin10;
void ui_event_ButtonPin11( lv_event_t * e);
extern lv_obj_t *ui_ButtonPin11;
extern lv_obj_t *ui_LabelButtonPin11;
void ui_event_ButtonPin12( lv_event_t * e);
extern lv_obj_t *ui_ButtonPin12;
extern lv_obj_t *ui_LabelButtonPin12;
// SCREEN: ui_ScreenConfig
void ui_ScreenConfig_screen_init(void);
extern lv_obj_t *ui_ScreenConfig;
extern lv_obj_t *ui_TopScreenConfig;
extern lv_obj_t *ui_LabelTopScreenConfig;
extern lv_obj_t *ui_LabelGeneralSetup;
void ui_event_TextAreaConfigHost( lv_event_t * e);
extern lv_obj_t *ui_TextAreaConfigHost;
extern lv_obj_t *ui_LabelConfigHost;
void ui_event_TextAreaConfigDeviceID( lv_event_t * e);
extern lv_obj_t *ui_TextAreaConfigDeviceID;
extern lv_obj_t *ui_LabelConfigDeviceID;
void ui_event_TextAreaConfigDeviceKey( lv_event_t * e);
extern lv_obj_t *ui_TextAreaConfigDeviceKey;
extern lv_obj_t *ui_LabelConfigDeviceKey;
void ui_event_TextAreaConfigCurrency( lv_event_t * e);
extern lv_obj_t *ui_TextAreaConfigCurrency;
extern lv_obj_t *ui_LabelConfigCurrency;
void ui_event_TextAreaConfigPin( lv_event_t * e);
extern lv_obj_t *ui_TextAreaConfigPin;
extern lv_obj_t *ui_LabelConfigPin;
void ui_event_ButtonConfigSave( lv_event_t * e);
extern lv_obj_t *ui_ButtonConfigSave;
extern lv_obj_t *ui_LabelButtonConfigSave;
void ui_event_ButtonGoSwitches( lv_event_t * e);
extern lv_obj_t *ui_ButtonGoSwitches;
extern lv_obj_t *ui_LabelButtonGoSwitches;
extern lv_obj_t *ui_LabelConfigMoreOptions;
void ui_event_KeyboardText( lv_event_t * e);
extern lv_obj_t *ui_KeyboardText;
void ui_event_KeyboardNumber( lv_event_t * e);
extern lv_obj_t *ui_KeyboardNumber;
// SCREEN: ui_ScreenSwitch1
void ui_ScreenSwitch1_screen_init(void);
extern lv_obj_t *ui_ScreenSwitch1;
extern lv_obj_t *ui_TopScreenConfigSwitch1;
extern lv_obj_t *ui_LabelTopScreenSwitch1;
extern lv_obj_t *ui_LabelSwitch1;
extern lv_obj_t *ui_LabelTestFunction1;
void ui_event_TextAreaSwitchName1( lv_event_t * e);
extern lv_obj_t *ui_TextAreaSwitchName1;
extern lv_obj_t *ui_LabelSwitchName1;
void ui_event_TextAreaSwitchPrice1( lv_event_t * e);
extern lv_obj_t *ui_TextAreaSwitchPrice1;
extern lv_obj_t *ui_LabelSwitchPrice1;
void ui_event_TextAreaSwitchTime1( lv_event_t * e);
extern lv_obj_t *ui_TextAreaSwitchTime1;
extern lv_obj_t *ui_LabelSwitchTime1;
extern lv_obj_t *ui_LabelSwitchRelay1;
void ui_event_TextAreaSwitchRelay1( lv_event_t * e);
extern lv_obj_t *ui_TextAreaSwitchRelay1;
extern lv_obj_t *ui_LabelEnergyMode;
void ui_event_TextAreaEnergyMode( lv_event_t * e);
extern lv_obj_t *ui_TextAreaEnergyMode;
extern lv_obj_t *ui_LabelEnergyModeExplain;
void ui_event_ButtonGoConfig( lv_event_t * e);
extern lv_obj_t *ui_ButtonGoConfig;
extern lv_obj_t *ui_LabelButtonGoConfig;
void ui_event_SwitchToggle1( lv_event_t * e);
extern lv_obj_t *ui_SwitchToggle1;
void ui_event_KeyboardSwitchText1( lv_event_t * e);
extern lv_obj_t *ui_KeyboardSwitchText1;
void ui_event_KeyboardSwitchNumber1( lv_event_t * e);
extern lv_obj_t *ui_KeyboardSwitchNumber1;
// SCREEN: ui_ScreenScan
void ui_ScreenScan_screen_init(void);
extern lv_obj_t *ui_ScreenScan;
extern lv_obj_t *ui_TopScreenScan;
extern lv_obj_t *ui_LabelTopScreenScan;
void ui_event_ButtonGotoScreenPin2( lv_event_t * e);
extern lv_obj_t *ui_ButtonGotoScreenPin2;
extern lv_obj_t *ui_LabelButtonGotoScreenPin2;
void ui_event_ButtonCallPanelCancel( lv_event_t * e);
extern lv_obj_t *ui_ButtonCallPanelCancel;
extern lv_obj_t *ui_LabelButtonGotoScreenPin3;
extern lv_obj_t *ui_ImageScanQRCodeBorder;
extern lv_obj_t *ui_LabelProduct;
extern lv_obj_t *ui_LabelPriceAndCurrency;
extern lv_obj_t *ui_Label2;
extern lv_obj_t *ui_PanelCancel;
extern lv_obj_t *ui_LabelPanelCancel;
void ui_event_ButtonYES( lv_event_t * e);
extern lv_obj_t *ui_ButtonYES;
extern lv_obj_t *ui_LabelYES;
void ui_event_ButtonNO( lv_event_t * e);
extern lv_obj_t *ui_ButtonNO;
extern lv_obj_t *ui_LabelNO;
// SCREEN: ui_ScreenInfo
void ui_ScreenInfo_screen_init(void);
extern lv_obj_t *ui_ScreenInfo;
extern lv_obj_t *ui_TopScreenPlay1;
extern lv_obj_t *ui_LabelTopScreenPlayground1;
void ui_event_ButtonGotoScreenStart( lv_event_t * e);
extern lv_obj_t *ui_ButtonGotoScreenStart;
extern lv_obj_t *ui_LabelButtonGotoScreenStart;
extern lv_obj_t *ui_LabelInfo;
extern lv_obj_t *ui_LabelTestPayment;
extern lv_obj_t *ui_LabelMoreInfos;
extern lv_obj_t *ui_ImageTestButtonGreen;
void ui_event_ImageTestButtonOrange( lv_event_t * e);
extern lv_obj_t *ui_ImageTestButtonOrange;
extern lv_obj_t *ui_Image1;
extern lv_obj_t *ui_LabelInfoFirmware;
extern lv_obj_t *ui_LabelFWVersion;
extern lv_obj_t *ui____initial_actions0;

LV_IMG_DECLARE( ui_img_buttongreen136_png);   // assets\ButtonGreen136.png
LV_IMG_DECLARE( ui_img_buttonorange136_png);   // assets\ButtonOrange136.png
LV_IMG_DECLARE( ui_img_offlinelnswitch_png);   // assets\offlineLNSwitch.png
LV_IMG_DECLARE( ui_img_gear_wheel_100pix_gray_png);   // assets\gear wheel 100pix gray.png
LV_IMG_DECLARE( ui_img_info_100pix_gray_png);   // assets\info 100pix gray.png
LV_IMG_DECLARE( ui_img_chronicle_278_dasblau_png);   // assets\chronicle 278 dasblau.png
LV_IMG_DECLARE( ui_img_166440904);   // assets\qr-code-slagschaduw-274x274-v2.png
LV_IMG_DECLARE( ui_img_buttontestgreen_png);   // assets\ButtonTestGreen.png
LV_IMG_DECLARE( ui_img_buttontestorange_png);   // assets\ButtonTestOrange.png
LV_IMG_DECLARE( ui_img_ereignishorizont_xyz_128_png);   // assets\ereignishorizont.xyz 128.png



void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
