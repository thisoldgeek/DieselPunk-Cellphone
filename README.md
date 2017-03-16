# **DieselPunk Cellphone**
![dpc_menu](https://cloud.githubusercontent.com/assets/1010795/20862340/c282aa9e-b95c-11e6-8b22-97e3591a3de5.png)

## *Description:*
A minimal cellphone fashioned in "DieselPunk" style. DieselPunk is akin to SteamPunk - a modern object re-imagined as if it were made in the era from the 1930's to 1950's.

In the as-built version of this project, I used the Aeronaut font available for purchase from: http://davidocchino.com/portfolio/typography/aeronaut.html#purchase. You can buy a non-commercial license on that site. In the artwork supplied here, I'm using the free downloadable Deco typefont from Nick Curtis, called "Dubba Dubba". If you like Nick's work, please contribute a few $$ at: http://www.1001fonts.com/search.html?search=dubba+dubba&x=10&y=6

See the posting at:
http://thisoldgeek.blogspot.com/2016/12/dieselpunk-cellphone-walnut-case_42.html


## *Required Hardware:*
* Adafruit Feather Fona
* Stick-on Antenna for SIM
* SIM Card
* Adafruit SSD1306 (or similar)
* Adafruit "Smalls" perma-prototype board
* LiPo Battery - 1250mAh min
* Small Speaker
* Adafruit NeoPixel Jewel
* Adafruit LED Sequins
* Electret Microphone
* pushbutton on/off switch

## *Fabrication:*
* CNC milled Walnut - VCarve (*.crv) drawing files supplied
* Acrylic used for decorations - laser art supplied
* Art-store add-ons


## *Configuration:*
* Uses Arduino IDE to test and load sketches to the Feather Fona
* Minimal changes needed - you may need to format time and date for your locale, or other carrier requirements. Also - need to change Favorite phone numbers and Favorite FM radio stations. 

## *Testing:*
The git contains the following programs for testing components separately: NeoPixel Jewel, SSD1306 OLED, Feather Fona. Highly recommended you proceed in a step-wise fashion, making sure each component works before proceeding. 

* DPC_Neopixel_Jewel_v2.ino
* u8glib_Adafruit_SSD1306_Battery.ino
* FONAtest_Feather.ino - same as stock Ardafruit FONAtest.ino with Feather Fona pin assignments

## *REQUIRED - RTC:*
Use the FONAtest_Feather.ino utility program for setting the Feather FONA to use network/carrier time. This is to display date and time on the SSD1306.

Use: option [S] create Serial passthru tunnel


Instructions from the Adafruit forum (https://forums.adafruit.com/viewtopic.php?f=19&t=58002) by user tonyz:

To get the cellular network time from the SIM800's AT+CCLK? command Local Timestamp mode must be enabled at the time the module registers on the cellular network. (The network sets the initial RTC time during registration.)
By default the Local TImestamp mode of my SIM800 was disabled. You can check this with:
AT+CLTS?
You will get this if it is disabled:
+CLTS: 0
To enable it enter this:
AT+CLTS=1
CLTS=1 must be saved in the SIM800's nonvolatile memory so it will be enabled when the module powers up and registers on the network.
Since this setting is not automatically saved in nonvolatile memory, you must save it with:
AT&W
(This saves all writeable settings)
Now restart your SIM800
After it registers AT+CCLK? will respond with the correct time, as in my case:
+CCLK: "14/08/08,02:25:43-16"



## *Update 01-29-2017:*
Added a version of drawing/CAD files without a cut-out for the opitional back case badge. These files identified by "NO_BADGE" in the filename. 

## *Update 03-16-2017:*
Added test programs to verify functionalitY in 'Testing' section. Added setting the SIM module Real-Time Clock in 'Required - RTC' section.


