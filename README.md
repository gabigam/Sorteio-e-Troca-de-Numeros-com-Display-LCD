# Sorteio e Troca de Números com Display LCD 🎲

Este repositório contém um programa para Arduino que utiliza um display LCD para mostrar uma sequência de números e permite ao usuário trocar a posição de dois números digitando suas posições através do monitor serial.

## 📁 Estrutura do Projeto

O código é composto pelo seguinte arquivo principal:

- **Sorteio-e-Troca-de-Numeros-com-Display-LCD.c**: Implementa a lógica de sorteio de números e troca de posições exibidos em um display LCD.

## Funcionamento

### Sorteio de Números

O programa sorteia uma sequência de números aleatórios e os exibe no display LCD.

### Troca de Números

O usuário pode digitar as posições de dois números através do monitor serial. O programa então troca os números nessas posições na sequência e atualiza o display LCD com a nova sequência.

## 🚀 Como Usar

1. Monte o circuito conforme necessário, conectando o display LCD ao Arduino.
2. Carregue o código para o seu Arduino utilizando o ambiente de desenvolvimento Arduino IDE ou outro software compatível.
3. Abra o monitor serial para interagir com o programa. Certifique-se de configurar a taxa de transmissão para 9600 bps.
4. Observe a sequência de números sorteada sendo exibida no display LCD.
5. Siga as instruções no monitor serial para digitar as posições dos números que você deseja trocar.
6. O programa trocará os números nessas posições na sequência e atualizará o display LCD com a nova sequência.
7. Repita o processo conforme desejado para realizar mais trocas de números.

## Dependências

Este projeto depende da biblioteca **Adafruit_LiquidCrystal.h** para o controle do display LCD. Certifique-se de instalá-la no seu ambiente de desenvolvimento Arduino IDE antes de carregar o código para o Arduino.
