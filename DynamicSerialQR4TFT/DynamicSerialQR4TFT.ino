
#include <SPI.h>
#include <TFT_eSPI.h>
#include <qrcode_espi.h>


TFT_eSPI display = TFT_eSPI();
QRcode_eSPI qrcode (&display);

String amount;
 
void setup() {
    Serial.begin(9600); 
    delay(2000);  

    display.begin();
   qrcode.init();

 
    Serial.println("Type something!");
}
 
void loop() {
    if(Serial.available()){
        amount = Serial.readStringUntil('\n');
        Serial.print("Amount: " );
        Serial.println(amount);
        qrcode.create("upi://pay?pa=zesto@okaxis&pn=Zesto Ryu&am="+amount+"&cu=INR&aid=uGICvfGNncCpSg");
    }
}