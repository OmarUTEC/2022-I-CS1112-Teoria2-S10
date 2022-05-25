// Created by Jose Fiestas on 11/11/21.
//
#ifndef INC_2021_II_TEO2_SEM11_U6_S2_UNIVERSIDAD_H
#define INC_2021_II_TEO2_SEM11_U6_S2_UNIVERSIDAD_H
#include "alumno.h"

class Universidad{
private:
    string nombre;
    vector<Alumno*> alumnos;
public:
    Universidad(){nombre="";}
    Universidad(string pNombre): nombre(pNombre) {};
    string get_nombre(){return nombre;}

    void agregar_alumnos(Alumno* alumno){
        alumnos.emplace_back(alumno);
    }

    void imprimirAlumnos(){
    cout<<"Alumnos: "<<endl;
    for(auto a: alumnos){
        a->printData();
        cout<<endl;
    }
    }


    void imprimirClases() {

    }

    int getCantidadAlumnos(){

    }
    ~Universidad(){}
};
#endif //INC_2021_II_TEO2_SEM11_U6_S2_UNIVERSIDAD_H
