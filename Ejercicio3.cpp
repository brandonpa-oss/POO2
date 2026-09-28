#include<iostream>
#include<string>
using namespace std;

class Persona{
private:
string nombre;
int edad;
char genero;

public:
Persona(){
    edad=0;
    nombre="sinnombre";
    genero='X';
}
Persona(string _nombre,int _edad,char _genero){
    nombre=_nombre;
    edad=_edad;
    genero=_genero;
}
Persona(const Persona &p1){
    nombre=p1.nombre;
    edad=p1.edad;
    genero=p1.genero;}

void mostrar(){
    cout<<"Nombre:"<<nombre<<endl;
    cout<<"Edad:"<<edad<<endl;
    cout<<"Genero:"<<genero<<endl;
}
};
int main(){
Persona p;
p.mostrar();
cout<<endl;

Persona p1("Juan",20,'M');
p1.mostrar();
cout<<endl;

Persona p2(p1);
cout<<"Datos copiados de p1"<<endl;
p2.mostrar();
    return 0;
}