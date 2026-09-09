//
// Kathenas: Create custom function, addition of two numbers and return result.
//
// Author(s): Kathenas Development Group (KDG), development.group@kathenas.org.
//
// License (SPDX): GPL-3.0-or-later
//
// License link (SPDX): https://spdx.org/licenses/GPL-3.0-or-later.html
//

// Declaration of our "custom_add()" function.
int custom_add(int n_01, int n_02);

//
// Setup function.
//
// Info:
//
// NULL setup().
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
// NULL loop().
//
void loop()
{
    // Send data to "custom_add()" function and store in "result".
    int result = custom_add(10, 10);

    // Output "result" via serial interface.
    Serial.println(result);

    // Hard exit the function.
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
    // Return the result of adding n_01 and n_02 together.
    return n_01 + n_02;
}

// End of file.
