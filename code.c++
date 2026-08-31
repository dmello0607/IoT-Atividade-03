// C++ code
//

int led_pin = 6;
int sensor = 7;


void setup()
  
{
  
  pinMode(led_pin, OUTPUT);
  pinMode(sensor, INPUT);
  
}

void loop()
  
{
  
  if (digitalRead(sensor) == HIGH) {
     digitalWrite(led_pin, HIGH);
     delay(5000);
  } else {
    digitalWrite(led_pin, LOW);
  }
  
}
