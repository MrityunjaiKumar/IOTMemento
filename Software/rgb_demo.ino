const int r_pin = 15, g_pin = 12, b_pin = 13,temp = 36;
void setup() {
  // put your setup code here, to run once:
pinMode(r_pin,OUTPUT);
pinMode(g_pin,OUTPUT);
pinMode(b_pin,OUTPUT);
pinMode(temp,INPUT);
Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(analogRead(temp));
digitalWrite(r_pin,HIGH);
digitalWrite(b_pin,HIGH);
digitalWrite(g_pin,HIGH);

digitalWrite(r_pin,LOW);
delay(250);
digitalWrite(r_pin,HIGH);
delay(250);

digitalWrite(g_pin,LOW);
delay(250);
digitalWrite(g_pin,HIGH);
delay(250);

digitalWrite(b_pin,LOW);
delay(250);
digitalWrite(b_pin,HIGH);
delay(250);

}
