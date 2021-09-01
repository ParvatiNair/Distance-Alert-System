const int trig = 11;
const int echo = 12;
const int buzz= 10;

const int LED1 = 2;
const int LED2 = 3;
const int LED3 = 4;
const int LED4 = 5;
const int LED5 = 6;
const int LED6 = 7;
const int LED7 = 8;

int duration = 0;
int distance = 0;

void setup()
{
  pinMode(trig , OUTPUT);
  pinMode(echo , INPUT);
  pinMode(buzz, OUTPUT); 

  pinMode(LED1 , OUTPUT);
  pinMode(LED2 , OUTPUT);
  pinMode(LED3 , OUTPUT);
  pinMode(LED4 , OUTPUT);
  pinMode(LED5 , OUTPUT);
  pinMode(LED6 , OUTPUT);
  pinMode(LED7 , OUTPUT);
 
  Serial.begin(9600);

}

void loop()
{
  digitalWrite(trig , HIGH);
  delayMicroseconds(10);
  digitalWrite(trig , LOW);


  duration = pulseIn(echo , HIGH);
  distance = duration * 0.034 / 2;
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
 

  if ( distance <= 5 )
  {
    digitalWrite(LED1, HIGH);
    digitalWrite(buzz, HIGH);
  }
  else
  {
    digitalWrite(LED1, LOW);
    digitalWrite(buzz, LOW);
  }
  if ( distance <= 7 )
  {
    digitalWrite(LED2, HIGH);
    digitalWrite(buzz, HIGH);
  }
  else
  {
    digitalWrite(LED2, LOW);
    digitalWrite(buzz, LOW);
  }
  if ( distance <= 10 )
  {
    digitalWrite(LED3, HIGH);
    digitalWrite(buzz, HIGH);
  }
  else
  {
    digitalWrite(LED3, LOW);
    digitalWrite(buzz, LOW);
  }
  if ( distance <= 15 )
  {
    digitalWrite(LED4, HIGH);
    digitalWrite(buzz, LOW);
  }
  else
  {
    digitalWrite(LED4, LOW);
    digitalWrite(buzz, LOW);
  }
  if ( distance <= 17 )
  {
    digitalWrite(LED5, HIGH);
    digitalWrite(buzz, LOW);
  }
  else
  {
    digitalWrite(LED5, LOW);
    digitalWrite(buzz, LOW);
  }
  if ( distance <= 20 )
  {
    digitalWrite(LED6, HIGH);
    digitalWrite(buzz, LOW);
  }
  else
  {
    digitalWrite(LED6, LOW);
    digitalWrite(buzz, LOW);
  }
  if ( distance <= 25 )
  {
    digitalWrite(LED7, HIGH);
    digitalWrite(buzz, LOW);
  }
  else
  {
    digitalWrite(LED7, LOW);
    digitalWrite(buzz, LOW);
  }
}
