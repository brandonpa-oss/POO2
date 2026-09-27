#include<iostream>
#include<string>
using namespace std;

class persona{
private:
string nombre;
int edad;
char genero;

public:
persona(){
    edad=0;
    nombre="sinnombre";
    genero='X';
}
persona(string _nombre,int _edad,char _genero){
    nombre=_nombre;
    edad=_edad;
    genero=_genero;
}
persona(const persona &p1){
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
persona p;
p.mostrar();
cout<<endl;

persona p1("Juan",20,'M');
p1.mostrar();
cout<<endl;

persona p2(p1);
cout<<"Datos copiados de p1"<<endl;
p2.mostrar();
    return 0;
}