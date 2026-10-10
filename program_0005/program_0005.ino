//
// #    #
// #   #     ##    #####  #    #  ######  #    #    ##     ####
// #  #     #  #     #    #    #  #       ##   #   #  #   #
// ###     #    #    #    ######  #####   # #  #  #    #   ####
// #  #    ######    #    #    #  #       #  # #  ######       #
// #   #   #    #    #    #    #  #       #   ##  #    #  #    #
// #    #  #    #    #    #    #  ######  #    #  #    #   ####
//
// Kathenas: Switch bulb on and off using relay.
//
// Author(s): Kathenas Development Group (KDG), development.group@kathenas.org.
//
// License (SPDX): GPL-3.0-or-later
//
// License link (SPDX): https://spdx.org/licenses/GPL-3.0-or-later.html
//

//
// See image file "arduino_uno_r3.jpg" for board diagram and pin layout.
//

//
// See image file "5v_relay_device.jpg".
//
// 1) Connect from this pin to 10 (digital section) on Arduino UNO R3 board.
//
// 2) Connect from this pin to 5v (power section) on Arduino UNO R3 board.
//
// 3) Connect from this pin to GND (power section) on Arduino UNO R3 board.
//
// Declare pin 10 as the relay signal pin.
//
const int relay_pin = 10;
//
// B) Connect from here to positive on DC Power Suppy Unit (PSU).
//

//
// See image file "multi_color_led_device.jpg".
//
// 1) Connect from this pin to 'A' on 5v relay.
//
// 3) Connect from this pin to negative on DC Power Supply Unit (PSU).
//

//
// Setup function.
//
// Info:
//
// Set pin 10 as relay signal pin and start in off state.
//
void setup()
{
    // Set pin 10 on the Arduino UNO R3 as our output signal pin.
    pinMode(relay_pin, OUTPUT);

    // Set relay to off at startup.
    digitalWrite(relay_pin, LOW);
}

//
// Main program function.
//
// Info:
//
// Switch relay on then off with a 2000 millisecond delay atfer each action.
//
void loop()
{
    // Relay ON  — COM connects to Normally Open (NO).
    digitalWrite(relay_pin, HIGH);
    // Dleay for 2000 milliseconds.
    delay(2000);

    // Relay OFF — COM connects to Normally Closed (NC).
    digitalWrite(relay_pin, LOW);   // Relay OFF — COM connects to NC.
    // Dleay for 2000 milliseconds.
    delay(2000);
}

// End of file.
