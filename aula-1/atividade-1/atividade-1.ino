const int vermelho = 2;
const int amarelo = 3;
const int verde = 4;
const int botao = 5;


void setup()
{
  Serial.begin(9600);
  pinMode(vermelho, OUTPUT);
  pinMode(amarelo, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(botao, INPUT);
}

void loop()
{    
  digitalWrite(vermelho, HIGH);
  Serial.println("Led vermelho ligado");
  delay(1000);
  if(digitalRead(botao) == HIGH){
    digitalWrite(vermelho, LOW);
  	digitalWrite(verde, HIGH);
    Serial.println("Led verde ligado");
    delay(3000);
    digitalWrite(verde, LOW);
    digitalWrite(amarelo, HIGH);
    Serial.println("Led amarelo ligado");
  	delay(1500);
    digitalWrite(amarelo, LOW);
  }
}
