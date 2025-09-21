int button;
void setup()
{
  pinMode(9, OUTPUT);
  pinMode(12, INPUT);
}

void loop()
{
button=digitalRead(12);
  if (button==1) digitalWrite (9, HIGH);
  if (button==0) digitalWrite (9, LOW);
    delay (1000);
}
