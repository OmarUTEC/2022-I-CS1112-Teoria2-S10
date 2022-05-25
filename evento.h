// Created by Jose Fiestas on 11/11/21.

#ifndef INC_2021_II_TEO2_SEM11_U6_S2_EVENT_H
#define INC_2021_II_TEO2_SEM11_U6_S2_EVENT_H

#include "fecha.h"
#include "hora.h"

class Evento{
private:
    string nombre;
    Hora hora;
    Fecha fecha;
public:
    Evento(){}



    void imprimir() {

    }

    ~Evento() {cout<<"Evento borrado"<<endl;}
};
#endif //INC_2021_II_TEO2_SEM11_U6_S2_EVENT_H
