//Receptor
  const int LED = 12;  

  void setup() 
  {
    Serial.begin(9600); 
    pinMode(LED, OUTPUT); 
  }
  
  void loop() 
  {
    if (Serial.available() > 0) 
    {           
       char estado = Serial.read();  
      if (estado == '1')          
      {
        digitalWrite(LED, HIGH);         
      }
      
      if (estado == '2')           
      {
        digitalWrite(LED, LOW);        
      }
    }
  }
