      #include <FastLED.h>
      #define NUM_LEDS 360
      #define DATA_PIN 7
      CRGB leds[NUM_LEDS];
  
  void setup() {
           FastLED.addLeds<WS2812B, DATA_PIN>(leds, NUM_LEDS);
           pinMode(LED_BUILTIN, OUTPUT);
   }


  void loop() {

        for(int columna=0; columna < 60; columna ++){
            for(int fila=0; fila <= 360; fila += 60){
              leds[columna+fila] = CRGB::White;
            }
            FastLED.show();
            delay(100);
            for(int fila=0; fila <= 360; fila += 60){
              leds[columna+fila] = CRGB::Black;
            }        
            FastLED.show();        
        }

        for(int columna=60; columna > 0; columna --){
            for(int fila=0; fila <= 360; fila += 60){
              leds[columna+fila] = CRGB::White;
            }
            FastLED.show();
            delay(100);
            for(int fila=0; fila <= 360; fila += 60){
              leds[columna+fila] = CRGB::Black;
            }        
            FastLED.show();        
        }
  }
  
