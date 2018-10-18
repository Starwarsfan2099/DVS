# Data-Verbose-Serial-DVS
A small serial library used for turning on or off serial in an Arduino program with one command. It significatly speeds up programs Arduino programs. Instead of using the normal serial commands, you can just change a variable to `true` or `false` to enable or disable serial. Saves time for all of those `Serial.print` you have commented out.

# Example Usage

Instructions

 *    First, call `dataState(false/true)` to turn verbose on or off.
 *    Second, call `dataInit(port number)` to set the serial port, this wont start a serial connection if dataState is false.
 *    Later, call `formatPrint` or `dataPrint` to send serial data if true or not if false.

 *  `dataPrint` and `formatPrint`?

 *  Usage:
 *    `dataPrint("Verbose mode is on if you see this");`
 
(This returns `Verbose mode is on if you see this` through serial)

 *    `formatPrint("This value is:", 3);`
 
(This retruns `This value is: 3` through serial)

Enjoy!!!
