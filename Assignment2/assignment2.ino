#define LILYGO_WATCH_2019_WITH_TOUCH
#include <LilyGoWatch.h>

TTGOClass *ttgo;


void setup()
{
    Serial.begin(115200);
    ttgo = TTGOClass::getWatch();
    ttgo->begin();
    ttgo->openBL();

    ttgo->tft->fillScreen(TFT_WHITE);
    ttgo->tft->setTextColor(TFT_BLACK, TFT_WHITE);
    ttgo->tft->setTextFont(4);

    int width = ttgo->tft->textWidth("Nupoor Bibawe");
    int height = ttgo->tft->fontHeight(4);

    int center1 = (240-width) / 2;
    int center2 = (240-height) / 2;
    ttgo->tft->drawString("Nupoor Bibawe", center1 , center2);
}

void loop()
{ 
}
