//
// Kathenas: Multi-color (7) LED module test.
//
// Author(s): Kathenas Development Group (KDG), development.group@kathenas.org.
//
// License (SPDX): GPL-3.0-or-later
//
// License link (SPDX): https://spdx.org/licenses/GPL-3.0-or-later.html
//

//
// See image file "multi_color_led_device.jpg".
//
// 1) Connect from this pin to 13 on UNO R3 board.
//
// 2) Connect from this pin to "GND" in "POWER" section on R3 board.
//

//
// Declare pin 13 as LED output on our UNO R3 device.
//
const int led_pin = 13;

//
// Setup function.
//
// Info:
//
// Define pin 13 "led_pin" as output on our UNO R3 device.
//
void setup()
{
    pinMode(led_pin, OUTPUT);
}

//
// Main program function.
//
// Info:
//
// Turn LED on for 60 seconds.
// Turn LED off for 5 seconds.
//
void loop()
{
    digitalWrite(led_pin, HIGH);
    delay(120000);
    digitalWrite(led_pin, LOW);
    delay(5000);
}

// End of file.
