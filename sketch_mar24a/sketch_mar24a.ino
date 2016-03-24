int led_pin = 7;
int switch_pin = 12;

void setup() 
{
 pinMode(led_pin, OUTPUT); //to decide or not this would be an input or an output
 pinMode(switch_pin, INPUT_PULLUP);
}

void loop() 
{
  int switch_state = digitalRead(switch_pin);
  if (switch_state)
  {
     
   
    digitalWrite(led_pin, HIGH); //this will set the voltage to a certain amount, whether it i s 5V or 3V
    delay(1000);
  }
  else
  {
    
    
    digitalWrite(led_pin,LOW); //by having it low it make this into 0V
    delay(2000); 
  }
}
