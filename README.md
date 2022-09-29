# PraticasCompuI

#include <iostream>

using namespace std;

float a  ;
float b  ;


int main() {

    cout << "hola este programa es una calculadora " << "te permite  hacer operaciones basicas entre dos numeros " << endl;

    cout << "ingresa el primer numero que llamaremos a: " << endl ;
    cin >> a  ;
    cout << " ingresa la operacion a realizar: " << endl ;
    cin >>   >> endl ;


    cout << "ingresa un numero enteros" << endl;
    // le decimos que nos pida valores de a y b para ingresarlos despues   sirve si estos estan variando y los operamos despues
    cin >> a  ;

    if (a < 5){
        cout << "a es menor que 5" ;
    }
    else if( a == 5){
        cout << " a es igual que 5" ;
    }
    else {
        cout << " a es mayor a 5" << endl ;
    }


    return 0;
}
