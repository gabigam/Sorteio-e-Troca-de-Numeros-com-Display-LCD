﻿# Sorteio-e-Troca-de-Numeros-com-Display-LCD
Este é um programa para Arduino que utiliza um display LCD para mostrar uma sequência de números e permite ao usuário trocar a posição de dois números digitando suas posições através do monitor serial.

Funcionalidades:

    Sorteio de números: O programa sorteia uma sequência de números aleatórios e os exibe no display LCD.

    Troca de números: O usuário pode digitar as posições de dois números através do monitor serial. O programa então troca os números nessas posições na sequência e atualiza o display LCD com a nova sequência.

Instruções de Uso:

    Monte o circuito conforme necessário, conectando o display LCD ao Arduino.

    Carregue o código para o seu Arduino utilizando o ambiente de desenvolvimento Arduino IDE ou outro software compatível.

    Abra o monitor serial para interagir com o programa. Certifique-se de configurar a taxa de transmissão para 9600 bps.

    Observe a sequência de números sorteada sendo exibida no display LCD.

    Siga as instruções no monitor serial para digitar as posições dos números que você deseja trocar.

    O programa trocará os números nessas posições na sequência e atualizará o display LCD com a nova sequência.

    Repita o processo conforme desejado para realizar mais trocas de números.

Dependências:

    Este projeto depende da biblioteca Adafruit_LiquidCrystal.h para o controle do display LCD. Certifique-se de instalá-la no seu ambiente de desenvolvimento Arduino IDE antes de carregar o código para o Arduino.

Observações:

    Este código foi desenvolvido e testado em um ambiente Arduino Uno, mas pode ser adaptado para outros modelos e placas compatíveis com o Arduino.

    Certifique-se de ajustar as conexões do seu circuito e as configurações do monitor serial conforme necessário para o seu ambiente de desenvolvimento.
