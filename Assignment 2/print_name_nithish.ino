#define LILYGO_WATCH_2019_WITH_TOUCH
#include <LilyGoWatch.h>  // include the watch library

TTGOClass *ttgo; // create a pointer variable of type TTGOClass


void setup()
{
    ttgo = TTGOClass::getWatch(); // create an instance of class TTGOClass
    
    ttgo->begin();  // initialize the hardware
    ttgo->openBL();  // To turn on backlight

    ttgo->tft->fillScreen(TFT_WHITE); // Fill screen with white background
    ttgo->tft->setTextColor(TFT_WHITE, TFT_BLACK);  // set font and font background color
    ttgo->tft->setTextFont(4);  // set font size

    int textWidthOfFirstName = ttgo->tft->textWidth("Nithish Kumar");  // find text width for first name
    int textWidthOfLastName = ttgo->tft->textWidth("Saravanan");  // find text width for last name
    int textHeight = ttgo->tft->fontHeight();  // find the font height

    // find the start positions for first name and last name
    int xPositionOfFirstName = (240 - textWidthOfFirstName) / 2;
    int xPositionOfLastName = (240 - textWidthOfLastName) / 2;
    int yPositionOfFirstName = ((240 - textHeight) / 2)-15;
    int yPositionOfLastName = ((240 - textHeight) / 2)+15;

    // print the name in the appropriate positions
    ttgo->tft->drawString("Nithish Kumar", xPositionOfFirstName, yPositionOfFirstName);
    ttgo->tft->drawString("Saravanan", xPositionOfLastName, yPositionOfLastName);
    
}

void loop()
{ 
}
