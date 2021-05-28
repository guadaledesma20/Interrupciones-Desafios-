void setup() {
Serial.begin(9600);
}

void loop() {
}

void serialEvent() { 
 String lectura = Serial.readString(); /
     Serial.print("Se ingreso ");
      Serial.print(lectura);
  
     Serial.print(" con una longitud de ");
     Serial.print(lectura.length());
     Serial.println(" caracteres.");
}
