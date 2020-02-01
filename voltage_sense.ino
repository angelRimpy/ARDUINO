const int PIN1 = A0;
#define SW1 9
#define LED1 5
#define LED2 7
float r1=100000.0;
float r2=10000.0;

void setup() {
 Serial.begin(9600);
 pinMode(SW1, INPUT);
 pinMode(LED1, OUTPUT);
 pinMode(LED2, OUTPUT);
 pinMode(PIN1, INPUT);
}

void loop() {
  if(digitalRead(SW1)==HIGH)
  {
    digitalWrite(LED1, HIGH);
  }
  else
  {
    digitalWrite(LED1, LOW);
  }
   int analog_value = analogRead(PIN1);
   Serial.print("analog_value:- ");
   Serial.println(analog_value);
   extra = (analog_value * 5.0) / 1024.0; 
   input_voltage = extra /(r2/(r2+r1));
   Serial.print("input_voltage:- ");
   Serial.println(input_voltage);
   if(input_voltage==12)
   {
     digitalWrite(LED2, HIGH);
    
   }
   else
   {
        digitalWrite(LED2, LOW);
   }
   
 
}
