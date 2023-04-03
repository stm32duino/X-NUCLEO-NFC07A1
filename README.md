# X-NUCLEO-NFC07A1

Arduino library to support the X-NUCLEO-NFC07A1 expansion board. The X-NUCLEO-NFC07A1 dynamic NFC/RFID tag IC expansion board is based on 
the ST25DV64KC NFC Type V/RFID tag IC with a 64-Kbit dual interface EEPROM that also features an I²C interface. It can be powered by the pin 
of Arduino connector or directly by the received carrier electromagnetic field.

## Examples

There are 2 examples with the X-NUCLEO-NFC07A1 library:
* X_NUCLEO_NFC07A1_HelloWorld: This application writes a URI tag on the device. It records an URI.

When the NFC module is started and ready, the message "Sytstem init done!" is displayed on the monitor window.
Next, the tag is written, we wait few seconds, we read the same tag and print it on the monitor window.

You can test this application by connecting it with your smartphone.
On Android, download a NFC Tools. Then start the app, check if NFC is activated
on your smartphone. Put your smartphone near the tag, you can read it. You can
write a tag with this app.

* X_NUCLEO_NFC07A1_SimpleWrite: This application writes a NDEF message, containing a URI record, to the tag.

When the NFC module is started and ready, the message "System init done!" is displayed on the monitor window.
Next, the tag is written with a URI.

You can test this application by tapping the tag with your smartphone.
On Android, check if NFC is activated on your smartphone.
Put your smartphone near the tag to read it.
The preferred Internet Browser is automatically opened with the provided URI.

# Dependencies

The X-NUCLEO-NFC07A1 library requires the following STM32duino library:

* STM32duino ST25DV: https://github.com/stm32duino/ST25DV

## Documentation

You can find the source files at  
https://github.com/stm32duino/X-NUCLEO-NFC07A1

The ST25DV64KC datasheet is available at  
https://www.st.com/resource/en/datasheet/st25dv64kc.pdf
