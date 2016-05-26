
int ledPin = 9;
int pirPin = 6;
int val = 0;

void setup() 
{
  pinMode (ledPin,OUTPUT);
  pinMode (pirPin, INPUT);
}
void loop () 
{
  val = digitalRead(pirPin);
  digitalWrite(ledPin,val);

if (val == 1)
  digitalWrite(ledPin,LOW);
}

