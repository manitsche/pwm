// Aula PWM 
// Varia conforme intensidade. Basicamente é um exercício de média.
// PWM deverá ser ligada sempre no pino suportado, ou seja, nos sinalizados por ~ 
// Como é um pino de saída, deverá sempre usar -> pinMode (pino, OUTPUT); 
// Função analogWrite (pino, valor); Essa função na realidade não é analógica, é uma função digital modulada, uma vez que os pinos são digitais.

//EXERCICIO DE LEITURA DE BRILHO DE UM LED A PARTIR DE UM POTENCIOMETRO

int ledPin = 3;
int potPin = A0;
int potValue = 0;


void setup ()
{
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop ()
{
  potValue = map (analogRead(potPin), 0, 1023, 0, 255);
  analogWrite(ledPin, potValue );
  Serial.println(potValue);

  delay(300);
}