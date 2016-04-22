
//tommy truong
//project 9, using switches to change the setting of the led

#include <Adafruit_NeoPixel.h>

int num_pixels = 1;
int pot_pin = A7;
int pot_value = 1.0;
int pixel_pin = 8;
int left_switch = 0;
int right_switch = 1;
int delay_time = 1000;
float intensity = 1.0;
struct color
{
  byte red;
  byte green;
  byte blue;
};
color red = {255, 0, 0};
color orange = {255, 127, 0};
color yellow = {255, 255, 0};
color green = {0, 255, 0};
color blue = {0, 0, 255};
color indigo = {75, 0, 130};
color violet = {148, 0, 211};
color rainbow[] = {red, orange, yellow, green, blue, indigo, violet};
byte which_color = 0;

Adafruit_NeoPixel ring = Adafruit_NeoPixel(num_pixels, pixel_pin);

void setup() 
{
 pinMode (left_switch, INPUT_PULLUP);
 pinMode (right_switch, INPUT_PULLUP);
 pinMode (pot_pin, INPUT);
 ring.begin();
}

void loop() 
{
  if (digitalRead(left_switch) == LOW && digitalRead(right_switch) == HIGH)
  {
    delay_time = analogRead (pot_pin);
  }
  if (digitalRead(left_switch) == HIGH && digitalRead(right_switch) == LOW)
  {
  intensity = analogRead(pot_pin) / 1023.0;
  }
  if (digitalRead(left_switch) == LOW && digitalRead(right_switch) == LOW)
  {
    which_color = map(analogRead(pot_pin), 0, 1023, 0, 6);
  }
  ring.setPixelColor(0, ring.Color(rainbow[which_color].red * intensity,
                                   rainbow[which_color].green * intensity,
                                   rainbow[which_color].blue * intensity));
  ring.show();
  delay(delay_time);
  ring.setPixelColor(0, ring.Color(0, 0, 0));
  ring.show();
  delay(delay_time);
}
