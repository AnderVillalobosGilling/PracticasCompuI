#include <iostream>

using namespace std;

// declaracion de variables flotantes y operadores universales
float a, b ;
char  operador ;

int main() {

    cout << "hola este programa es una calculadora " << "te permite  hacer operaciones basicas entre dos numeros " << endl;
// se le pide al usuario ingresar los valores con los que quiere trabajar y la operacion
    cout << "primer numero : " << endl ;
    cin >> a  ;
    cout << " ingresa la operacion a realizar: " << endl ;
    cin >> operador ;
    cout << "segundo numero :  " << endl ;
    cin >> b ;
    // el usuario ya ingreso los valores ahora le damos instrucciones a la compu de como trabajar


   if (operador == '+' ){
        cout << "Resultado:" <<  " " << a <<  " " << operador << " " << b << " " <<"=" << " " << a+b << endl  ;
    }
    else if( operador  == '-'){

        cout << "Resultado:" <<  " " << a << " " << operador << " " << b << " " << "=" << " " << a-b << '\t' << endl ;
    }
    else if (operador == '*') {
        cout <<"Resultado:" <<  " " << a << " " << operador << " " << b << " " << "=" <<" " << a*b << '\t' << endl ;
    }
    else if (operador == '/') {
        if (b == 0 ){ cout << "syntax error division no posible" << '\t' << endl;
        }
        else {
            cout << "Resultado:" <<  " " << a << " " << operador << " " << b << " " <<"=" <<" " << a/b << '\t' << endl;
        }
    }
        // no sabemos como redondear floats a integros asi que lo pedimos que lo hagan ellos jsjsjsj
    else if (operador == '%') {
        cout << "favor de redondear sus numeros ya que no se hacerlo en el programa e ingresar nuevamente sin punto decimal " << endl ;
        int d, e ;
        cin >> d  ;
        cin >> e  ;
        cout << "Resultado:" <<  " " << d << " " << operador << " " << e << " " << "=" << " " << d%e << endl ;
    }


    return 0;
}

