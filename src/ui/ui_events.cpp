// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.1
// LVGL version: 8.3.6
// Project name: TouchDisplay

#include "ui.h"
#include "globals.h"
#include <WString.h>

String entered_pin = "";


	void ButtonConfigSaveAndExitClicked(lv_event_t * e)
	{
		// Your code here
		const char *lnbitshost = lv_textarea_get_text(ui_TextAreaConfigHost);
		const char *deviceid = lv_textarea_get_text(ui_TextAreaConfigDeviceID);
		const char *devicekey = lv_textarea_get_text(ui_TextAreaConfigDeviceKey);
		const char *devicecurrency = lv_textarea_get_text(ui_TextAreaConfigCurrency);
		const char *configpin = lv_textarea_get_text(ui_TextAreaConfigPin);
		const char *switchname1 = lv_textarea_get_text(ui_TextAreaSwitchName1);
		const char *switchprice1 = lv_textarea_get_text(ui_TextAreaSwitchPrice1);
		const char *switchtime1 = lv_textarea_get_text(ui_TextAreaSwitchTime1);
		const char *switchgpio1 = lv_textarea_get_text(ui_TextAreaSwitchRelay1);
		/*
		const char *switchname2 = lv_textarea_get_text(ui_TextAreaSwitchName2);
		const char *switchprice2 = lv_textarea_get_text(ui_TextAreaSwitchPrice2);
		const char *switchtime2 = lv_textarea_get_text(ui_TextAreaSwitchTime2);
		const char *switchgpio2 = lv_textarea_get_text(ui_TextAreaSwitchRelay2);
		*/
		editConfig(lnbitshost, deviceid, devicekey, devicecurrency, configpin, switchname1, switchprice1, switchtime1, switchgpio1);
	}

	void addToPIN(int digit)
	{
		if (entered_pin.length() < 6)
		{
			entered_pin += digit;

			String hidePIN = "";
			for (int i = 0; (i < entered_pin.length()); i++)
			{
				hidePIN += "*";
			}
			lv_label_set_text(ui_LabelPINValue, hidePIN.c_str());
		}
	}

	void ButtonPinOneClicked(lv_event_t * e)
	{
		// Your code here
		addToPIN(1);
	}

	void ButtonPinTwoClicked(lv_event_t * e)
	{
		// Your code here
		addToPIN(2);
	}

	void ButtonPinThreeClicked(lv_event_t * e)
	{
		// Your code here
		addToPIN(3);
	}

	void ButtonPinFourClicked(lv_event_t * e)
	{
		// Your code here
		addToPIN(4);
	}

	void ButtonPinFiveClicked(lv_event_t * e)
	{
		// Your code here
		addToPIN(5);
	}

	void ButtonPinSixClicked(lv_event_t * e)
	{
		// Your code here
		addToPIN(6);
	}

	void ButtonPinSevenClicked(lv_event_t * e)
	{
		// Your code here
		addToPIN(7);
	}

	void ButtonPinEightClicked(lv_event_t * e)
	{
		// Your code here
		addToPIN(8);
	}

	void ButtonPinNineClicked(lv_event_t * e)
	{
		// Your code here
		addToPIN(9);
	}

	void ButtonPinZeroClicked(lv_event_t * e)
	{
		// Your code here
		addToPIN(0);
	}

	void ButtonPinCancelClicked(lv_event_t * e)
	{
		// Your code here
		if (entered_pin.length() == 0)
		{
			lv_disp_load_scr(ui_ScreenStart);
		}
		entered_pin = "";
		lv_label_set_text(ui_LabelPINValue, "ENTER PIN");
	}

	void ButtonPinOKClicked(lv_event_t * e)
	{
		// Your code here
		if (checkPIN(entered_pin.c_str()) == true)
		{
			lv_disp_load_scr(ui_ScreenConfig);
			lv_label_set_text(ui_LabelPINValue, "ENTER PIN");
			entered_pin = "";
		}
		else
		{
			lv_label_set_text(ui_LabelPINValue, "PIN INCORRECT");
			entered_pin = "";
		}
	}

	void ButtonTestRelay1Clicked(lv_event_t * e)
	{
		const char *gpio = "Relay1";
		toggleGPIO(gpio);
	}

	void ButtonTestRelay2Clicked(lv_event_t * e)
	{
		const char *gpio = "Relay2";
		toggleGPIO(gpio);
	}

	void ButtonLEDredClicked(lv_event_t *e)
	{
		const char *gpio = "LEDred";
		toggleGPIO(gpio);
	}

	void ButtonLEDgreenClicked(lv_event_t * e)
	{
		const char *gpio = "LEDgreen";
		toggleGPIO(gpio);
	}

	void ButtonLEDblueClicked(lv_event_t * e)
	{
		const char *gpio = "LEDblue";
		toggleGPIO(gpio);
	}

	void ButtonPayNow1Click(lv_event_t *e)
	{
		payNow(1);
	}

	void ButtonPayNow2Click(lv_event_t *e)
	{
		payNow(2);
	}

	void HideQRCode(lv_event_t * e)
	{
		hideQRCode();
	}

	void AddQRCode(lv_event_t * e)
	{
		addQRCode();
	}
