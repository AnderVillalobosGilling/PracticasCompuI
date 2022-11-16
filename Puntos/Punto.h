//
// Created by ander on 11/10/2022.
//

#ifndef PUNTOS_PUNTO2D_H
#define PUNTOS_PUNTO2D_H
#include <vector>

using namespace std;

class Punto2D {
//creamos nuestro ambiente publico para los metodos
public:
    Punto2D();
    void SetPosicion(float x, float y);
    void Trasladar(float temp1, float temp2);
    void RotarRespectoAlOrigen(float temp1);
    void Escalar(float temp1, float temp2);
    float GetX();
    float GetY();

private:

    float a , b , c;
    

};


#endif //PUNTOS_PUNTO2D_H

