#include<iostream>
#include<string>
using namespace std;

class Sistema{
private:
    string nombre;
    int edad;
    float nota;
    string materia;
    int saldo;

public:

void crear_alumno(string _nombre,int _edad,float _nota){
    nombre=_nombre;
    edad=_edad;
    nota=_nota;
}
void mostrar_alumno(){
    cout<<"Nombre:"<<nombre<<endl;
    cout<<"Edad:"<<edad<<endl;
    cout<<"Nota:"<<nota<<endl;
}
void crear_profesor(string _nombre,int _edad,string _materia){
    nombre=_nombre;
    edad=_edad;
    materia=_materia;}

void mostrar_profesor(){
    cout<<"Nombre:"<<nombre<<endl;
    cout<<"Edad:"<<edad<<endl;
    cout<<"Materia:"<<materia<<endl;
}
void crear_cajero(int _saldo,string _nombre){
    saldo=_saldo;
    nombre=_nombre;
}
void mostrar_cajero(){
    cout<<"Nombre:"<<nombre<<endl;
    cout<<"Saldo:"<<saldo<<endl;
}
};

int main(){
Sistema s1;
s1.crear_alumno("Juan",20,16.7);
s1.mostrar_alumno();
cout<<endl;

Sistema s2;
s2.crear_profesor("Carlos",24,"Filosofia");
s2.mostrar_profesor();
cout<<endl;

Sistema s3;
s3.crear_cajero(100,"Cajeritofeliz");
s3.mostrar_cajero();

return 0;
}