#include <Adafruit_NeoPixel.h>

#include <Adafruit_FONA.h>

#include "U8glib.h"

// DPC Feather Fona SPI Settings
U8GLIB_SSD1306_ADAFRUIT_128X64 u8g(5, 3, 11, 6, 10);  // SW SPI Com: SCK = 13, MOSI = 11, CS = 10, A0 = 9


int first_time = 1;

void drawMenu(void) {
  // graphic commands to redraw the complete screen should be placed here  
  u8g.setFont(u8g_font_unifont);
  //u8g.setFont(u8g_font_04b_03br);
  //u8g.setFont(u8g_font_osb21);
  //u8g.drawFrame(99,0,27,10);
  u8g.drawFrame(105,2,20,11); // outside of battery
  u8g.drawBox(126,5,2,4);     // positive battery end
  u8g.drawBox(107,4,(16 * .75),7);     // draw battery level
  u8g.drawLine(0, 0, 7, 7);       // draw turnstile (4 lines)
  u8g.drawLine(7, 7, 14, 0);
  u8g.drawLine(7, 0, 7, 13 );
  u8g.drawLine(1, 0, 13, 0);
  u8g.drawStr(30, 10,"11/09/16");
  
  //display.setCursor(42, 12);
  //isplay.println("06:25 PM");
  /*
  u8g.drawStr(42, 24,"1=DIAL");
  u8g.drawStr(42, 38,"2=TEXT");
  u8g.drawStr(42, 52,"3=SET");
  u8g.drawStr(42, 64,"*=LED");
  */

  textMenu();
 
  /*
  display.println("1 = DIAL");
  display.setCursor(42, 36);
  display.println("2 = TEXT");
  display.setCursor(42, 46);
  display.println("3 = SET");
  display.setCursor(42, 56);
  display.println("* = LIGHT");
  display.setCursor(0, 17);
  */
  u8g.setFont(u8g_font_04b_03br);
  u8g.drawStr(0,24, "-80dBm");
 // display.println("80dBi");
  u8g.drawStr(105, 24, "75%");
  //display.setCursor(105, 17);
  //display.println("75%");
  
  
  
}

void textMenu()
{
   u8g.drawStr(12, 40,"1-DIAL");
  u8g.drawStr(66, 40,"2-TEXT");
  u8g.drawStr(12, 58,"3-SET");
  u8g.drawStr(66, 58,"*-LED");
}

void setup(void) {

  u8g.getMode() == U8G_MODE_BW; 
    u8g.setColorIndex(1);         // pixel on
  }
void loop(void) {
  // picture loop
   //first_time = 0;
  u8g.firstPage();  
  do {
    drawMenu();
  } while( u8g.nextPage() );
  
  // rebuild the picture after some delay
  delay(50);
}
