/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

/*
 * @author Samuel de Souza Ferraz
 * @date 2023-09-23
 * @license MIT
 */


#include "mbed.h"
#include <chrono>

using namespace std::chrono;

/** Sistema embarcado de cofre de 4 dígitos numéricos pré-programados.
 */

// Blinking rate in milliseconds
#define BLINKING_RATE     500ms

// Pinos digitais para acionar LEDs
DigitalOut led1(PA_8); 
DigitalOut led2(PB_5); 
DigitalOut led3(PB_6); 
DigitalOut led4(PB_10); 

DigitalOut correctLED(PB_3);
DigitalOut wrongLED(PA_10);

// Pinos digitais para ler botões
InterruptIn btn0(PB_8); 
InterruptIn btn1(PB_9);
InterruptIn btn2(PA_5);
InterruptIn btn3(PA_6);
InterruptIn btn4(PA_7);
InterruptIn btn5(PC_7);
InterruptIn btn6(PA_9);
InterruptIn btn7(PB_4);
InterruptIn btn8(PA_2);
InterruptIn btn9(PA_3);
InterruptIn btnClear(PB_2);
InterruptIn btnOk(PC_4);


// Senha do sistema. Armazenada em uma variável global do tipo inteiro sem sinal.
unsigned int password = 2023;

void ValidatePassword(){

}

void Clear(){

}


int main()
{
    btn0.rise(&ValidatePassword);
    btn1.rise(&ValidatePassword);
    btn2.rise(&ValidatePassword);
    btn3.rise(&ValidatePassword);
    btn4.rise(&ValidatePassword);
    btn5.rise(&ValidatePassword);
    btn7.rise(&ValidatePassword);
    btn7.rise(&ValidatePassword);
    btn8.rise(&ValidatePassword);
    btn9.rise(&ValidatePassword);
    btnClear.rise(&ValidatePassword);
    btnOk.rise(&Clear);

    while (true) {
        ThisThread::sleep_for(BLINKING_RATE);
    }
}
