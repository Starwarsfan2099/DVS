/* !(DVS) [Data Verbose Serial]! by Starwarsfan2099
 *  Used for Serial verbosity :)
 *  =========================================
 *  Instructions
 *  =========================================
 *    First, call dataState(false/true) to turn verbose on or off.
 *    Second, call dataInit(port number) to set the serial port, this wont start a serial connection if dataState is false.
 *    Later, call formatPrint or dataPrint to send serial data if true or not if false.
 *  =========================================
 *  dataPrint and formatPrint?
 *  =========================================
 *  Usage:
 *    dataPrint("Verbose mode is on if yuo see this");
 *      (This returns `Verbose mode is on if yuo see this` through serial)
 *    formatPrint("This value is:", 3);
 *      (This retruns `This value is: 3` through serial)
 * ==========================================
 * Enjoy!!!
 * ==========================================
 */
bool dataState = false;

void dataMode(bool state) {
  if (state == true) {
    dataState = true;
  }
}

void formatPrint(const char *leftStr, int MyVar1){
   if(dataState == true) {
       Serial.print (leftStr);
       Serial.println(MyVar1);
   }
}

void dataPrint(const char *data) {
  if(dataState == true) {
    Serial.println(data);
  }
}

void dataInit(int port) {
  if(dataState == true) {
    Serial.begin(port);
    formatPrint("Started on port ", port);
  }
}

void dataClose() {
  Serial.end();
}
