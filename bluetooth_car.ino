int enA = 8;
int IN1 = 9;
int IN2 = 10;
int IN3 = 11;
int IN4 = 12;
int enB = 13;

int ftlght = 7;
int rrlght = 6;

void fwd()
{
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void rtax()
{
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

void fwdrt()
{
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}

void ltax()
{
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void fwdlt()
{
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void rev()
{
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  digitalWrite(rrlght, HIGH);
}

void revrt()
{
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  digitalWrite(rrlght, HIGH);
}

void revlt()
{
   digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  digitalWrite(rrlght, HIGH);
}

void stop()
{
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}

void setup()
{
  Serial.begin(9600);
  delay(100);

  pinMode(enA, OUTPUT);
    pinMode(IN1, OUTPUT);
      pinMode(IN2, OUTPUT);
        pinMode(IN3, OUTPUT);
          pinMode(IN4, OUTPUT);
            pinMode(enB, OUTPUT);
            
              pinMode(ftlght, OUTPUT);
                pinMode(rrlght, OUTPUT);
}

void loop()
{
  digitalWrite(enA, HIGH);
  digitalWrite(enB, HIGH);

  while(Serial.available())
  {
     char input = Serial.read();
     Serial.println(input);
     if(input == 'F')
    {
      Serial.println("Forward");
      fwd();
      delay(100);
      stop();
    }

    else if(input == 'R')
    {
      Serial.println("Axial Right");
      rtax();
      delay(100);
      stop();
    }

    else if(input == 'L')
    {
      Serial.println("Axial Left");
      ltax();
      delay(100);
      stop();
    }

    else if(input == 'B')
    {
      Serial.println("Reverse");
      rev();
      delay(100);
      stop();
    }

    else if(input == 'G')
    {
      Serial.println("Forward Left");
      fwdlt();
      delay(100);
      stop();
    }

    else if(input == 'I')
    {
      Serial.println("Forward Right");
      fwdrt();
      delay(100);
      stop();
    }
   
    else if(input == 'H')
    {
      Serial.println("Left Reverse");
      revlt();
      delay(100);
      stop();
    }

    else if(input == 'J')
    {
      Serial.println("Right Reverse");
      revrt();
      delay(100);
      stop();
    }

    else if(input == 'W')
    {
      Serial.println("Headlights On");
      digitalWrite(ftlght, HIGH);
      delay(100);
      stop();
    }

    else if(input == 'w')
    {
      Serial.println("Headlights off");
      digitalWrite(ftlght, LOW);
      delay(100);
      stop();
    }

    else if(input == 'X')
    {
      Serial.println("stop");
      stop();
    }
  }
  





  
}

