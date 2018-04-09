    /**
     * Provides access to basic micro:bit functionality.
     */
    //% color=#0078D7 weight=100 icon="\uf00a"
namespace test {


    //% advanced=true shim=test::showLedss
    export function showLedss(leds: string, interval?: number): void {
        return
    }


    /**
     * Disconnect the serial port.
    */
    //% weight=97
    //% blockGap=50
    //% blockId=showLedsss
    //% block="showLedss"
    export function showLedsss(leds: string, interval?: number): void {
        showLedss(leds, interval)
    }
    
}