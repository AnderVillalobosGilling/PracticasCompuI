//
// Created by ander on 11/10/2022.
//
//metemos varios otros includes que necesita el codigo
#include "Punto2D.h"
#include <iostream>
#include <math.h>
// definimos el valor de PI
#define PI 3.14159265

using namespace std;

Punto2D::Punto2D() {

    a=0;
    b=0;
    c=0;
    
}

void Punto2D::SetPosicion(float x, float y) {
    a = x;
    b = y;
}

void Punto2D::Trasladar(float temp1, float temp2) {
    a = a + temp1;
    b = b + temp2;
}

