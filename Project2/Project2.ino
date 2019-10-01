int switchState = 0;

void setup(){
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(2, INPUT);
}

void loop(){
  switchState = digitalRead(2);

    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    delay(400);
    
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    delay(300);

   if (switchState == LOW){
    digitalWrite(3, HIGH); // Green LED
    digitalWrite(4, LOW); // Red LED
    digitalWrite(5, LOW); // Red LED
  } else {
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
  
    delay(500); 
  
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
  
    delay(500);
  }
}
