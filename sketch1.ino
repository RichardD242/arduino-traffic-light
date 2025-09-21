int animationspeed = 0;

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop()
{
  animationspeed = 400;
  digitalWrite(LED_BUILTIN, HIGH);
  delay(animationspeed);
  digitalWrite(LED_BUILTIN, LOW);
  delay(animationspeed);
  digitalWrite(12, HIGH);
  delay(animationspeed);
  digitalWrite(12, LOW);
  delay(animationspeed); 
  digitalWrite(9, HIGH);
  delay(animationspeed); 
  digitalWrite(9, LOW);
  delay(animationspeed); 
}
