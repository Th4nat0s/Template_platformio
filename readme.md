Platform IO base template
=========================

Push code to arduino promicro3 or attiny84
------------------------------------------

### Arduino
Usb connection 
arduino framework 

### Attiny84
SPI Through BusPirate 
arduino framework 

### ProMicro3
SPI for bootloader
USB for code
arduino framework 

Tips
----
`./serial` launch serial console through buspirate  
`pio run -t fuses` set the fuses  
`pio run -t upload -e release|uno|attiny84|attiny85|promicro3` upload a specific release version without serial debug  
`pio run -t upload -e bootloader_promicro3` flash bootloader through SPI  
`pio platform update --dry-run` check for updates  
