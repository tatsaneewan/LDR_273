const byte LDR_PIN = A1; // from LDR
const byte VREF_PIN = A2; // from Trimpot
const byte LED1_PIN = 5; // to LED1
void setup() {
pinMode( LED1_PIN, OUTPUT );
digitalWrite( LED1_PIN, LOW );
analogReference( DEFAULT );
Serial.begin( 9600 ); // open serial port
}
void loop() {
// read analog values
int value1 = analogRead( LDR_PIN );
int value2 = analogRead( VREF_PIN );
// send message to serial port

if(value1 < value2 ){                               //เมื่อค่า value1 < value 2 ให้หลอดไฟติด
  digitalWrite(LED1_PIN, HIGH);
}
else{
  digitalWrite(LED1_PIN , LOW);
}
Serial.print( "Read " );                  //แสดงผล value1 และ value 2
Serial.print( value1, DEC );
Serial.print( ", " );
Serial.println( value2, DEC );
delay( 200 );
}
