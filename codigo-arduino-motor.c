//Autor: Henrique Mattede

//define a porta para o acionamento do rele
int sinalparaorele = 7; 

//Porta utilizada para o botão de acionamento
int pinobotao = 8;    

//Armazena informações sobre a leitura do botão
int leitura;          

//Armazena o estado do relé (ligado/desligado)
int estadorele = 0;   


void setup(){
	//Define o pino como saida (sinal para o rele)
	pinMode(sinalparaorele, OUTPUT); 

	//Define o pino como entrada (Pino do botao)
	pinMode(pinobotao, INPUT);      
}


void loop(){
  leitura = digitalRead(pinobotao);
  if (leitura != 0){
	while(digitalRead(pinobotao) != 0){
		delay(100);
    }
    // Inverte o estado
    estadorele = !estadorele;
    digitalWrite(sinalparaorele, estadorele);  
  } 
}