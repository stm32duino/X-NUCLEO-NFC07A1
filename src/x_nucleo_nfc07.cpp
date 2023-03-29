#include "x_nucleo_nfc07.h"
#include "Arduino.h"

int X_Nucleo_NFC07::begin()
{
  int ret = 0;

  NFC07A1_LED_Init();
  ledOn(GREEN_LED);
  delay(300);
  ledOn(BLUE_LED);
  delay(300);
  ledOn(YELLOW_LED);
  delay(300);

  ret = ST25DV::begin();

  if (ret != ST25DV_OK) {
    return ret;
  }

  ledOff(GREEN_LED);
  delay(300);
  ledOff(BLUE_LED);
  delay(300);
  ledOff(YELLOW_LED);
  delay(300);
  return NDEF_OK;
}

void X_Nucleo_NFC07::ledOn(int led)
{
  NFC07A1_LED_ON((NFC07A1_Led_E)led);
}

void X_Nucleo_NFC07::ledOff(int led)
{
  NFC07A1_LED_OFF((NFC07A1_Led_E) led);
}

void X_Nucleo_NFC07::NFC07A1_LED_Init(void)
{
  for (uint16_t i = 0; i < sizeof(NFC07A1_Led); i++) {
    pinMode(NFC07A1_Led[i], OUTPUT);
  }
}

void X_Nucleo_NFC07::NFC07A1_LED_DeInit(NFC07A1_Led_E led)
{

}

void X_Nucleo_NFC07::NFC07A1_LED_ON(const NFC07A1_Led_E led)
{
  digitalWrite(NFC07A1_Led[led], HIGH);
}

void X_Nucleo_NFC07::NFC07A1_LED_OFF(const NFC07A1_Led_E led)
{
  digitalWrite(NFC07A1_Led[led], LOW);
}

void X_Nucleo_NFC07::NFC07A1_LED_Toggle(const NFC07A1_Led_E led)
{
  digitalWrite(NFC07A1_Led[led], !digitalRead(NFC07A1_Led[led]));
}
