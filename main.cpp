/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

/*
 * @author Samuel Ferraz
 * @date 2023-09-23
 * @license MIT
 */

#include "mbed.h"

/** Sistema embarcado de cofre de 4 dígitos numéricos pré-programados.
 */

// Blinking rate in milliseconds
#define BLINKING_RATE     500ms

// Pinos digitais para ler botões
InterruptIn button0(PA_3);
InterruptIn button1(D1);
InterruptIn button2(D2);
InterruptIn button3(D3);
InterruptIn button4(D4);
InterruptIn button5(D5);
InterruptIn button6(D6);
InterruptIn button7(D7);
InterruptIn button8(D8);
InterruptIn button9(D9);
InterruptIn buttonClear(D10);
InterruptIn buttonOK(D11);

// Pinos digitais para acionar LEDs
BusOut display(PA_3, PA_2, PA_10, PB_3, PB_5, PB_4);

// Senha do sistema. Armazenada em uma variável global do tipo inteiro sem sinal.
unsigned int password = 2023;

int main()
{

    while (true) {
        ThisThread::sleep_for(BLINKING_RATE);
    }
}
