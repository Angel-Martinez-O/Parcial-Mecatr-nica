// Definición de los pines según tu conexión
const int luzRoja = 13;
const int luzAmarilla = 12;
const int luzVerde = 11;

void setup() {
  // Configuramos los pines como salidas
  pinMode(luzRoja, OUTPUT);
  pinMode(luzAmarilla, OUTPUT);
  pinMode(luzVerde, OUTPUT);
}

void loop() {
  // 1. Luz Verde encendida (5 segundos)
  digitalWrite(luzVerde, HIGH);
  digitalWrite(luzAmarilla, LOW);
  digitalWrite(luzRoja, LOW);
  delay(5000); 

  // 2. Luz Amarilla encendida (2 segundos)
  digitalWrite(luzVerde, LOW);
  digitalWrite(luzAmarilla, HIGH);
  digitalWrite(luzRoja, LOW);
  delay(2000); 

  // 3. Luz Roja encendida (5 segundos)
  digitalWrite(luzVerde, LOW);
  digitalWrite(luzAmarilla, LOW);
  digitalWrite(luzRoja, HIGH);
  delay(5000); 
}
