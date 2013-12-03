#include <Adafruit_NeoPixel.h> //Fuck yeah, bitches
    //declare variables
    float tempC;
    float voltage;
    int tempF;
    int tempPin = 2;
    
    
#define PIN 0 //Gotta define that output pin and shit.
    Adafruit_NeoPixel strip = Adafruit_NeoPixel(60, PIN, NEO_GRB + NEO_KHZ800);
void setup() //Setting up for justice.
{
  strip.begin();
  strip.show(); //clears any output of pixel.
}
void loop()
{
  
  int tempRead = analogRead(tempPin); //Reading that TMP36 sensor
  voltage = tempRead * (5000.0/1024.0); //Converting to mV
  tempC = (voltage - 500) / 10; //Converting to degrees C
  tempF = (tempC * (9/5)) + 32; //Obviously converting to F
  delay(1000); //I SAID WAIT A SECOND
  
  //If statements for temp to output.  
  if (tempF < 33)
  {
      strip.setPixelColor(0, 255, 51, 255);
      strip.show();      
  }
  
  if (tempF >= 33 && tempF < 35)
  {
      strip.setPixelColor(0, 51, 51, 255); 
      strip.show();     
  }
  
  if (tempF >= 35 && tempF < 38)
  {
      strip.setPixelColor(0, 0, 0, 102);      
      strip.show();
  }
  
  if (tempF >= 38 && tempF < 40)
  {
      strip.setPixelColor(0, 0, 0, 153);  
      strip.show();    
  }
  
  if (tempF >= 40 && tempF < 43)
  {
      strip.setPixelColor(0, 0, 0, 204); 
      strip.show();     
  }
  
  if (tempF >= 43 && tempF < 45)
  {
      strip.setPixelColor(0, 0, 0, 255); 
      strip.show();     
  }
  
  if (tempF >= 45 && tempF < 48)
  {
      strip.setPixelColor(0, 0, 128, 255); 
      strip.show();     
  }
  
  if (tempF >= 48 && tempF < 50)
  {
      strip.setPixelColor(0, 51, 153, 255);   
      strip.show();   
  }
  
  if (tempF >= 50 && tempF < 53)
  {
      strip.setPixelColor(0, 0, 204, 204);  
      strip.show();    
  }
  
  if (tempF >= 53 && tempF < 55)
  {
      strip.setPixelColor(0, 0, 255, 255);  
      strip.show();    
  }
  
  if (tempF >= 55 && tempF < 58)
  {
      strip.setPixelColor(0, 102, 255, 255);  
      strip.show();    
  }
  
  if (tempF >= 58 && tempF < 60)
  {
      strip.setPixelColor(0, 0, 204, 102);  
      strip.show();   
  }
  
  if (tempF >= 60 && tempF < 63)
  {
      strip.setPixelColor(0, 0, 255, 128);
      strip.show();      
  }
  
  if (tempF >= 63 && tempF < 65)
  {
      strip.setPixelColor(0, 51, 255, 153);
      strip.show();      
  }
  
  if (tempF >= 65 && tempF < 68)
  {
      strip.setPixelColor(0, 102, 255, 178);
      strip.show();      
  }
  
  if (tempF >= 68  && tempF < 70)
  {
      strip.setPixelColor(0, 0, 153, 0);  
      strip.show();    
  }
  
  if (tempF >= 70 && tempF < 73)
  {
      strip.setPixelColor(0, 0, 204, 0);  
      strip.show();    
  }
  
  if (tempF >= 73 && tempF < 75)
  {
      strip.setPixelColor(0, 0, 255, 0); 
      strip.show();     
  }
  
  if (tempF >= 75 && tempF < 78)
  {
      strip.setPixelColor(0, 102, 204, 0);
      strip.show();      
  }
  
  if (tempF >= 78 && tempF < 80)
  {
      strip.setPixelColor(0, 153, 153, 0); 
      strip.show();     
  }
  
  if (tempF >= 80 && tempF < 83)
  {
      strip.setPixelColor(0, 204, 204, 0);
      strip.show();      
  }
  
  if (tempF >= 83 && tempF < 85)
  {
      strip.setPixelColor(0, 255, 255, 0);
      strip.show();      
  }
  
  if (tempF >= 85 && tempF < 88)
  {
      strip.setPixelColor(0, 255, 204, 0);
      strip.show();      
  }
  
  if (tempF >= 88 && tempF < 90)
  {
      strip.setPixelColor(0, 204, 102, 0);
      strip.show();      
  }
  
  if (tempF >= 90 && tempF < 93)
  {
      strip.setPixelColor(0, 255, 128, 0); 
      strip.show();     
  }
  
  if (tempF >= 93 && tempF < 95)
  {
      strip.setPixelColor(0, 255, 178, 102); 
      strip.show();     
  }
  
  if (tempF >= 95 && tempF < 98)
  {
      strip.setPixelColor(0, 153, 0, 0);
      strip.show();      
  }
  
  if (tempF >= 98 && tempF < 100)
  {
      strip.setPixelColor(0, 204, 0, 0); 
      strip.show();     
  }
  
  if (tempF >= 100 && tempF < 103)
  {
      strip.setPixelColor(0, 255, 0, 0); 
      strip.show();     
  }
  
  if (tempF >= 103 && tempF < 105)
  {
      strip.setPixelColor(0, 255, 51, 51); 
      strip.show();     
  }
  
  if (tempF >= 105 && tempF < 108)
  {
      strip.setPixelColor(0, 255, 102, 102); 
      strip.show();     
  }
  
  if (tempF >= 108 && tempF < 110)
  {
      strip.setPixelColor(0, 255, 153, 153);
      strip.show();      
  }
  
  if (tempF >= 110 && tempF < 113)
  {
      strip.setPixelColor(0, 255, 204, 204);
      strip.show();      
  }
  
  if (tempF >= 113 && tempF < 115)
  {
      strip.setPixelColor(0, 255, 255, 255);
      strip.show();
  }
  
  if (tempF >= 115)
  {
      strip.setPixelColor(0, 255, 255, 255);
      strip.show();
  }
}
//The End.
