//
// Kathenas: Turn on board LED and external multi-color LED using push button.
//
// Author(s): Kathenas Development Group (KDG), development.group@kathenas.org.
//
// License (SPDX): GPL-3.0-or-later
//
// License link (SPDX): https://spdx.org/licenses/GPL-3.0-or-later.html
//

//
// See image file "arduino_uno_r3.jpg" for board digram and pin layout.
//

//
// See image file "push_button_device.jpg".
//
// 1) Connect from this pin to 2 on UNO R3 board.
//
// 2) Connect from this pin to "GND" in "DIGITAL" section on R3 board.
//
// Declare pin 2 as push-button on our UNO R3 device.
//
const int push_button_pin = 2;

//
// See image file "multi_color_led_device.jpg".
//
// 1) Connect from this pin to 13 on UNO R3 board.
//
// 2) Connect from this pin to "GND" in "POWER" section on R3 board.
//
// Declare pin 13 as LED output on our UNO R3 device.
//
const int led_pin = 13;

//
// Setup function.
//
// Info:
//
// Start serial communication at 115200 baud rate.
//
// Set push button (pin 2) to use internal pull-up resistor.
//
// Set multi-color LED (pin 13) to be our output. Pin 13 also triggers the
// "L" LED on the UNO R3, so you will se this activate when the push button
// is pressed.
//
void setup()
{
    Serial.begin(115200);
    pinMode(push_button_pin, INPUT_PULLUP);
    pinMode(led_pin, OUTPUT);
}

//
// Main program function.
//
// Info:
//
// Push button to see change state from HIGH (1) to LOW (0) in a serial monitor.
//
// Push button to turn on LED that is mounted on the Pressed Circuit Board
// (PCB) and the multi-color LED we attached for fun.
//
void loop()
{
    int button_state = digitalRead(push_button_pin);
    Serial.println(sensor_value);

    if (button_state == HIGH)
    {
        digitalWrite(led_pin, LOW);
    }
    else
    {
        digitalWrite(led_pin, HIGH);
    }
}

// End of file.
