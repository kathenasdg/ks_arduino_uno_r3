//
// #    #
// #   #     ##    #####  #    #  ######  #    #    ##     ####
// #  #     #  #     #    #    #  #       ##   #   #  #   #
// ###     #    #    #    ######  #####   # #  #  #    #   ####
// #  #    ######    #    #    #  #       #  # #  ######       #
// #   #   #    #    #    #    #  #       #   ##  #    #  #    #
// #    #  #    #    #    #    #  ######  #    #  #    #   ####
//
// Kathenas: Create custom function, addition of two numbers and return result.
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
// Declaration of our "custom_add()" function.
//
int custom_add(int n_01, int n_02);

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
// Send data to "custom_add()" function and store in "result".
//
// Output "result" via serial interface.
//
// Hard exit the function.
//
void loop()
{
    int result = custom_add(10, 10);
    Serial.println(result);
    exit(0);
}

//
// Custom addition function.
//
// Info:
//
// Take two numbers as imput, add them and return the result.
//
int custom_add(int n_01, int n_02)
{
    return n_01 + n_02;
}

// End of file.
