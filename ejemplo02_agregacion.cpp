// Created by Jose Fiestas on 11/11/21.
//
// Agregacion: objeto de clase A "tiene un" objeto de clase B , B -<> A

#include "Universidad.h"
// generar las clases Alumno, Clase, Universidad , tal que se pueda
// agregar (adicionar) clases a los alumnos y alumnos a la Universidad
int main(){
    // generar objeto de clase Universidad (no es puntero)
    Universidad UTEC;
    // generar alumnos (punteros de clase) y agregarlos a la universidad
    Alumno* Jose=new Alumno("870272","Jose",30);
    UTEC.agregar_alumnos(Jose);
    Alumno* Pedro=new Alumno("870348","Pedro",28);
    UTEC.agregar_alumnos(Pedro);
    Alumno* Carlos=new Alumno("870274","Carlos",25);
    UTEC.agregar_alumnos(Carlos);

   // imprimir la cantidad total de alumnos en la universidad, y sus datos
UTEC.imprimirAlumnos();


    // generar dos cursos y agregarlos a la Universidad


    // imprimir datos de los cursos en la universidad


// agregar los cursos a alumnos e imprimir datos de los cursos de los alumnos




// imprimir cantidad total de alumnos



// eliminar punteros

    delete Jose;
    delete Pedro;
    delete Carlos;

    return 0;

}