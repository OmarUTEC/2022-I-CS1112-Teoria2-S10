// Created by Jose Fiestas on 11/11/21.
#ifndef INC_2021_II_TEO2_SEM11_U6_S2_CLASE_H
#define INC_2021_II_TEO2_SEM11_U6_S2_CLASE_H
#include<iostream>
#include<vector>
using namespace std;

class Clase{
private:
    string codigo;
    string nombre;
public:
    Clase(){codigo=""; nombre="";}
    Clase(string pCodigo, string pNombre):
            codigo(pCodigo), nombre(pNombre) {};


    void printData() {

    }
    ~Clase(){}
};
#endif //INC_2021_II_TEO2_SEM11_U6_S2_CLASE_H
