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
// Setup function.
//
// Info:
//
// Set serial commuication baud rate of 115200.
//
void setup()
{
    // Start serial communication at 115200 baud rate.
    Serial.begin(115200);
}

//
// Main program function.
//
// Info:
//
// Output "Hello, World!" text to serial interface every five seconds.
//
void loop()
{
    // 
    for(int i = 0; i < 4; i++)
    {
            // Print "Hello, World!"" to the serial interface.
        Serial.println("Hello, World!");

        // Wait for 5 seconds.
        delay(5000);
    }

    // Hard exit the function.
    exit(0);
}

// End of file.
