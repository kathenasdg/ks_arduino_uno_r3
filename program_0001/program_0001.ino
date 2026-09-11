//
// Kathenas: Dirty, Serial output of "Hello, World!".
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
// Setup function.
//
// Info:
//
// Start serial communication at 115200 baud rate.
//
void setup()
{
    Serial.begin(115200);
}

//
// Main program function.
//
// Info:
//
// Output "Hello, World!" text to serial interface every five seconds until
// the "for" lop is satisfied.
//
// Hard exit the function.
//
void loop()
{
    for(int i = 0; i < 4; i++)
    {
        Serial.println("Hello, World!");
        delay(5000);
    }

    exit(0);
}

// End of file.
