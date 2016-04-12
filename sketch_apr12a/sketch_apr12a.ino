//tommytruong
#include <Adafruit_NeoPixel.h>

int num_pixels = 1;
int pixel_pin = 8; 
Adafruit_NeoPixel ring = Adafruit_NeoPixel(num_pixels,pixel_pin);
void setup(){
}
 

void loop(){
ring.begin();//starts it all
ring.setPixelColor(0,ring.Color(255,0,0)); //red 
ring.show(); 
delay(1000);//adds 1 sec delayy

ring.begin();
ring.setPixelColor(0,ring.Color(255,127,0)); //orange
ring.show();
delay(1000);

ring.begin();
ring.setPixelColor(0,ring.Color(255,255,0));  //yellow
ring.show();
delay(1000);

ring.begin();
ring.setPixelColor(0,ring.Color(0,255,0)); // green 
ring.show();
delay(1000);

ring.begin();
ring.setPixelColor(0,ring.Color(0,0,255)); // blue
ring.show();
delay(1000);

ring.begin();
ring.setPixelColor(0,ring.Color(75,0,130)); //indego
ring.show();
delay(1000);

ring.begin();
ring.setPixelColor(0,ring.Color(139,0,255)); // purple
ring.show();
delay(1000);
}
