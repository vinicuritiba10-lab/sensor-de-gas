// C++ code
//
const int pinoBuzzer = 8;
const int led = 7;
const int sensor = A0;

int limiteAlerta = 400;
  

void setup(){
  
  pinMode(pinoBuzzer, OUTPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
  
  
  Serial.println("Aquecendo o sensor... aguarde 20 segundos.");
  delay(20000);
}
  


void loop(){
  
  int leitura = analogRead(sensor);

    Serial.print("Nivel de Gas: ");
    Serial.println(leitura);
  
  if (leitura > limiteAlerta){
 	 digitalWrite(led, HIGH);
     tone(pinoBuzzer, 1000);
     Serial.println("!!! PERIGO: GAS DETECTADO !!!");
  }
  
  else {
  	digitalWrite(led, HIGH);
    noTone(pinoBuzzer);
  
  }
  delay(500);
}





//tone(pinoBuzzer, 1000);
  //delay(500);
  //noTone(pinoBuzzer);
  //delay(500);
  //digitalWrite(led, HIGH);
  //delay(500);  
  //digitalWrite(led, LOW);
  //delay(500);
