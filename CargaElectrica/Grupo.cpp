//
// Created by ander on 23/11/2022.
//

#include "Grupo.h"
#include <string>
#include <array>

using namespace std;

std::string Grupo::getNombre() {
    return NombreGrupo;

}
float Grupo::getPk() {
    return pKGrupo;
}

int Grupo::getCargagrupo() {
    return CargaGrupo;
}
