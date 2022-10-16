#include <iostream>
#include <array>

// Añadir std para fácil llamado de funciones
using namespace std;

//// Declaración de funciones
//Definimos un template (un tipo de dato) para nuestra matriz
template <typename matriz>
void LlenarMatriz(matriz & miMatriz);

template <typename matriz>
void ImprimirMatriz(matriz & miMatriz);

template <typename matriz>
void GaussJordan(matriz & miMatriz);

template <typename matriz>
void ImprimirSolucion(matriz & miMatriz);


int main()
{
    // Definimos el número de variables de nuestro sistema
    const int variables = 3;
    // El número de columnas será el número de variables más su solición para cada ecuación
    const int columnas = variables + 1;

    // Inicializamos la matriz que vamos a ocupar
    array <array<float, columnas>, variables> miMatriz = { 0 };

    // Pedimos al usuario que llene la matriz
    LlenarMatriz(miMatriz);

    // Aplicamos el método de Gauss-Jordan sobre nuestra matriz
    GaussJordan(miMatriz);

    // Imprimimos la solución de la matriz
    ImprimirSolucion(miMatriz);

    return 0; // Indicamos que salimos del programa con éxito
}

/* 
Llena 'miMatriz' con valores ingresados por el usuario para cada elemento.
No regresa ningún valor.
*/
template <typename matriz>
void LlenarMatriz(matriz & miMatriz)
{
    int variables = miMatriz.size();
    for (int i = 0; i < variables; i++) {
        for (int j = 0; j <= variables; j++) {
            cout << "Valor elemento [" << i << "][" << j << "]: ";
            cin >> miMatriz[i][j];
        }
    }
}

/* 
Imprime cada elemento de 'miMatriz' emulando una matriz con corchetes cuadrados.
No regresa ningún valor.
*/
template <typename matriz>
void ImprimirMatriz(matriz & miMatriz)
{
    int variables = miMatriz.size();
    for (int i = 0; i < variables; i++) {
        cout << "[ ";
        for (int j = 0; j < variables + 1; j++)
            cout << miMatriz[i][j] << '\t';
        cout << "]\n";
    }
}

/*
Imprime en pantalla la solución para cada variable del sistema de ecuaciones correspondiente a los valores en 'miMatriz'.
No regresa ningún valor.
*/
template <typename matriz>
void ImprimirSolucion(matriz & miMatriz)
{
    const int variables = 3;
    //arreglo con numero de filas que tenemos variables es decir 3
    array <float , variables> Soluciones = {0};
    //hacemos un ciclo for para las diferentes soluciones que pueden existir del sistema
    for (int i=0 ; i<miMatriz.size(); i++){
        Soluciones [i] = miMatriz[i][miMatriz.size()];
        if (miMatriz[i][i] == 0) {
            if (miMatriz[i][miMatriz.size()] == 0){
                cout << "\n" << "excisten infinitas soluciones" << endl ;
                //este primer ciclo es para cuando miMatriz[i][i] = miMatriz[i][miMatriz.size()] == 0
                //                asi que hay soluciones infinitas
                return;
            }
            else cout << "\n" << "no hay soluciones" << endl ;
            return;
        }
    }
    //ahora si imprimimos las soluciones
    cout << "\n" << "Solución:" << endl ;
    for (int i = 0; i < miMatriz.size(); i++) {
        cout << "x" << i << " = " << Soluciones[i] << endl ;
    }
}

/*
Implementa el algoritmo de Gauss-Jordan sobre 'miMatriz', finalizando en ella la solución del algoritmo.
No regresa ningún valor.
*/
template <typename matriz>
void GaussJordan(matriz & miMatriz)
{
 const int variables = 3;
    float temp = 0;
    int fila =1;
    int sumafila = 0;
    for (int i = 0; i < miMatriz.size() ; i++) {
        fila = 1;
        // Si nuestro pivote es 0 cambiamos las filas
        while (miMatriz[i][i] == 0 && fila < miMatriz.size()) {
            for (int j = 0; j <= miMatriz.size(); j++) {
                temp = miMatriz[i][j];
                miMatriz[i][j] = miMatriz[fila][j];
                miMatriz[fila][j] = temp;
            }
            fila++;
        }
        if (fila == miMatriz.size()) {
            continue;
            //al tener todas la filas con pivote 0 pasamos al siguiente piv
        }
        temp = miMatriz[i][i];
        for (int j = i; j <= miMatriz.size(); j++) {
            miMatriz[i][j] = (miMatriz[i][j] / temp);
            // dividimos la Matriz entre el pivote
        }
        for (int j = 0; j < (miMatriz.size() - 1); j++) {
            sumafila += 1;
            temp = miMatriz[(i + sumafila) % miMatriz.size()][i];
            if (temp != 0) {
                for (int k = i; k <= miMatriz.size(); k++) {
                    miMatriz[((i + sumafila) % miMatriz.size())][k] += -1 * temp * miMatriz[i][k];
                }
            }
        }
    }
}
