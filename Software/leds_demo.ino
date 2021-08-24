
const int p1 = 18, p2 = 16, p3 = 17, p4 = 26, p5 = 33, p6 = 25;
const int r_pin = 15, g_pin = 12, b_pin = 13;
const int buzzer = 22;
uint32_t timer = millis();
void setup() {
  pinMode(buzzer,OUTPUT);
}

void loop() {
  
  // case 1 -- six led bari bari
  // sub1

  digitalWrite(r_pin, LOW);
  pinMode(g_pin, INPUT);
  pinMode(b_pin, INPUT);
  
  pinMode(p1, INPUT);
  pinMode(p2, OUTPUT);
  pinMode(p3, OUTPUT);
  digitalWrite(p2, LOW);
  digitalWrite(p3, HIGH);

  pinMode(p4, INPUT);
  pinMode(p5, OUTPUT);
  pinMode(p6, OUTPUT);
  digitalWrite(p5, LOW);
  digitalWrite(p6, HIGH);
  
  digitalWrite(buzzer, HIGH);
  delay(250);
  digitalWrite(buzzer, LOW);
  delay(250);

  digitalWrite(p3, LOW);
  digitalWrite(p6, LOW);
  delay(500);

  //sub2
  pinMode(p1, INPUT);
  pinMode(p2, OUTPUT);
  pinMode(p3, OUTPUT);
  digitalWrite(p2, HIGH);
  digitalWrite(p3, LOW);

  pinMode(p4, INPUT);
  pinMode(p5, OUTPUT);
  pinMode(p6, OUTPUT);
  digitalWrite(p5, HIGH);
  digitalWrite(p6, LOW);
  
  digitalWrite(buzzer, HIGH);
  delay(250);
  digitalWrite(buzzer, LOW);
  delay(250);

  digitalWrite(p2, LOW);
  digitalWrite(p5, LOW);
  delay(500);

  //sub3
  pinMode(p2, INPUT);
  pinMode(p1, OUTPUT);
  pinMode(p3, OUTPUT);
  digitalWrite(p1, HIGH);
  digitalWrite(p3, LOW);

  pinMode(p6, INPUT);
  pinMode(p5, OUTPUT);
  pinMode(p4, OUTPUT);
  digitalWrite(p5, LOW);
  digitalWrite(p4, HIGH);
  
  digitalWrite(buzzer, HIGH);
  delay(250);
  digitalWrite(buzzer, LOW);
  delay(250);

  digitalWrite(p1, LOW);
  digitalWrite(p4, LOW);
  delay(500);

  //sub4
  pinMode(p2, INPUT);
  pinMode(p1, OUTPUT);
  pinMode(p3, OUTPUT);
  digitalWrite(p1, LOW);
  digitalWrite(p3, HIGH);

  pinMode(p6, INPUT);
  pinMode(p5, OUTPUT);
  pinMode(p4, OUTPUT);
  digitalWrite(p4, LOW);
  digitalWrite(p5, HIGH);
  
  digitalWrite(buzzer, HIGH);
  delay(250);
  digitalWrite(buzzer, LOW);
  delay(250);

  digitalWrite(p3, LOW);
  digitalWrite(p5, LOW);
  delay(500);

  //sub5
  pinMode(p3, INPUT);
  pinMode(p2, OUTPUT);
  pinMode(p1, OUTPUT);
  digitalWrite(p1, LOW);
  digitalWrite(p2, HIGH);

  pinMode(p5, INPUT);
  pinMode(p4, OUTPUT);
  pinMode(p6, OUTPUT);
  digitalWrite(p4, HIGH);
  digitalWrite(p6, LOW);
  
  digitalWrite(buzzer, HIGH);
  delay(250);
  digitalWrite(buzzer, LOW);
  delay(250);

  digitalWrite(p2, LOW);
  digitalWrite(p4, LOW);
  delay(500);

  //sub6
  pinMode(p3, INPUT);
  pinMode(p2, OUTPUT);
  pinMode(p1, OUTPUT);
  digitalWrite(p2, LOW);
  digitalWrite(p1, HIGH);

  pinMode(p5, INPUT);
  pinMode(p4, OUTPUT);
  pinMode(p6, OUTPUT);
  digitalWrite(p4, LOW);
  digitalWrite(p6, HIGH);
  
  digitalWrite(buzzer, HIGH);
  delay(250);
  digitalWrite(buzzer, LOW);
  delay(250);

  digitalWrite(p1, LOW);
  digitalWrite(p6, LOW);
  delay(500);


  // CASE 2 --- all led ek sath

  for(int i = 0; i<2; i++)
  {
      if(i==0)
      {
        digitalWrite(g_pin, LOW);
        pinMode(r_pin, INPUT);
        pinMode(b_pin, INPUT);
      }
      else{
        digitalWrite(b_pin, LOW);
        pinMode(g_pin, INPUT);
        pinMode(r_pin, INPUT);
      }
      timer = millis();
      while(millis() - timer < 1000)
      {  
        pinMode(p1, INPUT);
        pinMode(p2, OUTPUT);
        pinMode(p3, OUTPUT);
        digitalWrite(p2, LOW);
        digitalWrite(p3, HIGH);
      
        pinMode(p4, INPUT);
        pinMode(p5, OUTPUT);
        pinMode(p6, OUTPUT);
        digitalWrite(p5, LOW);
        digitalWrite(p6, HIGH);
        
      
        delay(5);
      
        //sub2
        pinMode(p1, INPUT);
        pinMode(p2, OUTPUT);
        pinMode(p3, OUTPUT);
        digitalWrite(p2, HIGH);
        digitalWrite(p3, LOW);
      
        pinMode(p4, INPUT);
        pinMode(p5, OUTPUT);
        pinMode(p6, OUTPUT);
        digitalWrite(p5, HIGH);
        digitalWrite(p6, LOW);
       
        delay(5);
      
        //sub3
        pinMode(p2, INPUT);
        pinMode(p1, OUTPUT);
        pinMode(p3, OUTPUT);
        digitalWrite(p1, HIGH);
        digitalWrite(p3, LOW);
      
        pinMode(p6, INPUT);
        pinMode(p5, OUTPUT);
        pinMode(p4, OUTPUT);
        digitalWrite(p5, LOW);
        digitalWrite(p4, HIGH);
        
        delay(5);
      
        //sub4
        pinMode(p2, INPUT);
        pinMode(p1, OUTPUT);
        pinMode(p3, OUTPUT);
        digitalWrite(p1, LOW);
        digitalWrite(p3, HIGH);
      
        pinMode(p6, INPUT);
        pinMode(p5, OUTPUT);
        pinMode(p4, OUTPUT);
        digitalWrite(p4, LOW);
        digitalWrite(p5, HIGH);
      
        delay(5);
      
        //sub5
        pinMode(p3, INPUT);
        pinMode(p2, OUTPUT);
        pinMode(p1, OUTPUT);
        digitalWrite(p1, LOW);
        digitalWrite(p2, HIGH);
      
        pinMode(p5, INPUT);
        pinMode(p4, OUTPUT);
        pinMode(p6, OUTPUT);
        digitalWrite(p4, HIGH);
        digitalWrite(p6, LOW);
        
     
        delay(5);
      
        //sub6
        pinMode(p3, INPUT);
        pinMode(p2, OUTPUT);
        pinMode(p1, OUTPUT);
        digitalWrite(p2, LOW);
        digitalWrite(p1, HIGH);
      
        pinMode(p5, INPUT);
        pinMode(p4, OUTPUT);
        pinMode(p6, OUTPUT);
        digitalWrite(p4, LOW);
        digitalWrite(p6, HIGH);
      
        delay(5);
      }
      pinMode(p1, INPUT);
      pinMode(p2, INPUT);
      pinMode(p3, INPUT);
      pinMode(p4, INPUT);
      pinMode(p5, INPUT);
      pinMode(p6, INPUT);
      
      digitalWrite(buzzer, HIGH);
      delay(500);
      digitalWrite(buzzer, LOW);
  }
  
  
  
}
