int enA = 2;
int in1 = 3;
int in2 = 4;
int in3 = 5;
int in4 = 6;
int enB = 7;

void setup(){
  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2 , OUTPUT);
  pinMode(in3 , OUTPUT);
  pinMode(in4 , OUTPUT);
  pinMode(enB , OUTPUT);

  Serial.begin(9600);
}

void fd(){
  analogWrite(enA, 255);
  analogWrite(enB, 255);
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
}

void rv(){
  analogWrite(enA, 255);
  analogWrite(enB, 255);
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
}

void sRight(){
  analogWrite(enA, 100);
  analogWrite(enB, 0);
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
}

void sLeft(){
  analogWrite(enA, 0);
  analogWrite(enB, 100);
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
}

void axialRight(){
  analogWrite(enA, 255);
  analogWrite(enB, 255);
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
}

void axialLeft(){
  analogWrite(enA, 255);
  analogWrite(enB, 255);
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
}

void rsRight(){
  analogWrite(enA, 255);
  analogWrite(enB, 0);
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
}

void rsLeft(){
  analogWrite(enA, 0);
  analogWrite(enB, 255);
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
}

void stp(){
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
}

void loop(){
  while(Serial.available())
  {
     int input = Serial.read();
     Serial.println(input);
     
     if(input == 8)
    {
      fd();
    }

    else if(input == 2)
    {
      rv();
    }

    else if(input == 4)
    {
      axialLeft();
    }

    else if(input == 6)
    {
      axialRight();
    }

    else if(input == 7)
    {
      sLeft();
    }

    else if(input == 9)
    {
      sRight();
    }
   
    else if(input == 5)
    {
      stp();
    }
    
    else if(input == 3)
    {
      rsRight();
    }
    
    else if(input == 1)
    {
      rsLeft();
    }
  }
}
