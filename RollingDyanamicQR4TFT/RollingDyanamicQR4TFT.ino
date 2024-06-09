
#include <SPI.h>
#include <TFT_eSPI.h>
#include <qrcode_espi.h>


TFT_eSPI display = TFT_eSPI();
QRcode_eSPI qrcode (&display);

String input;
int amt=0;
 
void setup() {
    Serial.begin(9600); 
    delay(2000);  

    display.begin();
    qrcode.init();
}
 
void loop() {
    // if(Serial.available()){
    //     input = Serial.readStringUntil('\n');
        Serial.print("Amount: " );
        Serial.println(amt);
       
        input=String(amt); 
        qrcode.create("upi://pay?pa=zesto@okaxis&pn=Zesto Ryu&am="+input+"&cu=INR&aid=uGICvfGNncCpSg");
        delay(5000);
         amt=amt+10;
        // amt=input.toInt();
         
   // }
}