// Biblioteca para controle do display LCD
#include <Adafruit_LiquidCrystal.h>


// Cria um objeto da biblioteca Adafruit_LiquidCrystal
Adafruit_LiquidCrystal lcd(0);

// Define o número de elementos do array e o array de números
const int NUM_NUMEROS = 10;
int numeros[NUM_NUMEROS];

// Variável para controlar a posição dos números no array
int index = 0;

void setup() {
// Configura a comunicação serial com a taxa de transmissão de 9600 bps
Serial.begin(9600);

// Inicializa o gerador de números aleatórios com o valor lido na porta analógica 0 como semente
randomSeed(analogRead(0));
  

// Inicializa o display LCD
lcd.begin(16, 2);
}

void loop() {
sorteiaNumeros(); // sorteia uma nova sequência de números
imprimeNumeros(); // imprime a sequência de números no display

// Lê a primeira posição digitada pelo usuário
int pos1, pos2;
while (true) {
Serial.println("Digite a primeira posicao:");
while (!Serial.available()) {
// aguarda a entrada de dados pelo monitor serial
}
pos1 = Serial.parseInt(); // lê o valor digitado pelo usuário
Serial.println(pos1);
if (pos1 >= 0 && pos1 < NUM_NUMEROS) {
break;
}
}

// Lê a segunda posição digitada pelo usuário
while (true) {
Serial.println("Digite a segunda posicao:");
while (!Serial.available()) {
// aguarda a entrada de dados pelo monitor serial
}
pos2 = Serial.parseInt(); // lê o valor digitado pelo usuário
Serial.println(pos2);
if (pos2 >= 0 && pos2 < NUM_NUMEROS && pos2 != pos1) {
break;
}
}

trocaPosicoes(pos1, pos2); // troca as posições dos números
imprimeNumeros(); // imprime a sequência de números atualizada
}

// Sorteia uma nova sequência de números e armazena no array
void sorteiaNumeros() {
bool escolhidos[NUM_NUMEROS] = {false}; // cria um array de booleanos para verificar se um número já foi escolhido
for (int i = 0; i < NUM_NUMEROS; i++) {
int num;
do {
num = random(0, 10);
} while (escolhidos[num]);
escolhidos[num] = true;
numeros[i] = num;
}
}

// Imprime a sequência de números no display LCD e na porta serial
void imprimeNumeros() {
Serial.println("Numeros:");
for (int i = 0; i < NUM_NUMEROS; i++) {
Serial.print(" ");
Serial.print(numeros[i]);
}
Serial.println();

// Imprime a sequência de números no display LCD
lcd.clear();
lcd.setCursor(0, 0);
for (int i = 0; i < 5; i++) {
lcd.print(" ");
lcd.print(numeros[i]);
lcd.print(" ");
}
lcd.setCursor(0, 1);
for (int i = 5; i < 10; i++) {
lcd.print(" ");
lcd.print(numeros[i]);
lcd.print(" ");
 }
 delay(1000); // aguarda 1 segundo antes de gerar uma nova sequência
}


// recebe duas posições de um array de números numeros e troca os valores armazenados nessas posições. 
void trocaPosicoes(int pos1, int pos2) {
  int temp = numeros[pos1];
  numeros[pos1] = numeros[pos2];
  numeros[pos2] = temp;
}