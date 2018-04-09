#include "pxt.h"

using namespace pxt;
/**
 * Provides access to basic micro:bit functionality.
 */
//% color=#0078D7 weight=100 icon="\uf00a"
namespace test {

    /**
     * Draws an image on the LED screen.
     * @param leds the pattern of LED to turn on/off
     * @param interval time in milliseconds to pause after drawing
     */
    //% help=basic/show-leds
    //% weight=95 blockGap=8
    //% imageLiteral=1 async
    //% blockId=showLedss
    //% block="show leds" icon="\uf00a"
    //% parts="ledmatrix"
    void showLedss(ImageLiteral leds, int interval = 400) {
      uBit.display.print(MicroBitImage(imageBytes(leds)), 0, 0, 0, interval);
    }

}