// Created by Jose Fiestas on 11/11/21.
#ifndef INC_2021_II_TEO2_SEM11_U6_S2_ALUMNO_H
#define INC_2021_II_TEO2_SEM11_U6_S2_ALUMNO_H

#include "clase.h"

class Alumno{
private:
    string codigo;
    string nombre;
    int edad;

public:
    Alumno(){codigo=""; nombre="";edad=0;}
    Alumno(string pCodigo, string pNombre, int pEdad):
            codigo(pCodigo), nombre(pNombre), edad(pEdad) {}

    string getcodigo(){return codigo;}

    void printData(){
        cout<<nombre<<", "<<edad<<endl;
    }

    void adicionarClase(Clase* clase){

    }

    void printClases() {

    }

    bool enClase(string codigo){

    }

    ~Alumno(){cout<<"Alumno destruido"<<endl;}
};
#endif //INC_2021_II_TEO2_SEM11_U6_S2_ALUMNO_H
