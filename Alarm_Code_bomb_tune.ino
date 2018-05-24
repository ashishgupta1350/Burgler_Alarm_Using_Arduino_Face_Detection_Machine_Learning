int incomingByte = 0;   // for incoming serial data
int flag=1;
void setup() {
        Serial.begin(9600);
        pinMode(13,OUTPUT);// opens serial port, sets data rate to 9600 bps
        digitalWrite(13,LOW);
        flag=1;
}

void loop() {
        
        // send data only when you receive data:
        if (Serial.available() > 0 and flag) {
                // read the incoming byte:
                for (int i=1;i<100;i++){
                digitalWrite(13,HIGH);
                delay(60);
                digitalWrite(13,LOW);
                delay(60);
                }
                Serial.print("I found a burgler ");
                
                delay(1000);// It will play for 10 seconds
                digitalWrite(13, LOW);
                // say what you got:
                flag=0;
                //Serial.println("");
        }
        else{
          digitalWrite(13,LOW);
          
        }
}
