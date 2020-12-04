int r = 11; // red pin number
int g = 10; // green pin number
int b = 9;  // blue pin number
int tilt = 2;   // tilt sensor input pin number

void setup()   //sets the color signal outputs
{
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop()
{
  int reading;
  reading = digitalRead(tilt);  // checks the status of the sensor
  
  if(reading){   // if sensor is stable make the light green
    digitalWrite(r, LOW);
    digitalWrite(g, HIGH);
  }
  else {        // if sensor is unstable make the light red
    digitalWrite(r, HIGH);
    digitalWrite(g, LOW);
  }
}
