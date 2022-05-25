#include<iostream>
#include<vector>
using namespace std;
// Asociacion: objeto de clase A "usa un" objeto de clase B , A -> B
// si se elimina B, A puede seguir existiendo
class TarjetaCredito{
    string vencimiento;
    string cvv;
public:
    // constructores
    TarjetaCredito(){vencimiento=" "; cvv=" ";}
    TarjetaCredito(string v,string c):vencimiento(v), cvv(c){}
    TarjetaCredito(const TarjetaCredito &t){
        vencimiento=t.vencimiento;
        cvv=t.cvv;
    }
    // setters y getters
void set_vencimiento(string v){vencimiento=v;}
void set_cvv(string c){cvv=c;}

string get_vencimiento(){return vencimiento;}
string get_cvv(){return cvv;}

    // destructor

    ~TarjetaCredito(){cout<<"tarjeta borrada"<<endl;}
};

class Persona{
    string nombre;
    int edad;
TarjetaCredito* VISA;
public:
    // constructor
    Persona(){nombre=" "; edad=0;} // por defecto
    Persona(string n,int e):nombre(n),edad(e){} // de asignacion
    Persona(const Persona &p){
        nombre=p.nombre;
        edad=p.edad;
    }
    // setters y getters
    string get_nombre(){return nombre;}
    string get_vencimiento_tarjeta(){ return VISA->get_vencimiento();}

    // metodo para asociar tarjeta a persona
void asociar_tarjeta(TarjetaCredito* visa){
        VISA=visa;
    }
    // metodo para renovar tarjeta

    // destructor
    ~Persona(){cout<<"Persona borrada"<<endl;}
};

int main(){
    // generar un puntero dinámico a TarjetaCredito y Persona, con valores
TarjetaCredito* visa = new TarjetaCredito("01/01/2024","123");
Persona* Jose = new Persona("Jose",30);

    // asociar la tarjeta a la persona
Jose->asociar_tarjeta(visa);
    // imprimir informacion
cout<<Jose->get_nombre()<<" tiene una tarjeta con fecha de vencimiento "<<
Jose->get_vencimiento_tarjeta()<<endl;
     // renovar tarjeta

    // imprimir informacion

  // eliminar punteros dinamicos
delete visa;
cout<<Jose->get_nombre()<<" existe!"<<endl;
delete Jose;
}