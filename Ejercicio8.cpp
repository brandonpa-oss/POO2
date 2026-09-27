#include<iostream>
#include<iostream>
using namespace std;

class sistema{

private:
string nombre;
int edad;
float nota;
string materia;
int saldo;

public:

void alumno(string _nombre,int _edad,float _nota){
    nombre=_nombre;
    edad=_edad;
    nota=_nota;
}
void mostraralumno(){
cout<<"Nombre:"<<nombre<<endl;
cout<<"Edad:"<<edad<<endl;
cout<<"Nota:"<<nota<<endl;
}
void profesor(string _nombre,int _edad,string _materia){
    nombre=_nombre;
    edad=_edad;
    materia=_materia;}

void mostrarprofesor(){
cout<<"Nombre:"<<nombre<<endl;
cout<<"Edad:"<<edad<<endl;
cout<<"Materia:"<<materia<<endl;
}
void cajero(int _saldo,string _nombre){
saldo=_saldo;
nombre=_nombre;
}
void mostrarcajero(){
cout<<"Nombre:"<<nombre<<endl;
cout<<"Saldo:"<<saldo<<endl;
}

};
int main(){
sistema s1;
s1.alumno("juan",20,16.7);
s1.mostraralumno();
cout<<endl;
sistema s2;
s2.profesor("Carlos",24,"Filosofia");
s2.mostrarprofesor();
cout<<endl;
sistema s3;
s3.cajero(100,"cajeritofeliz");
s3.mostrarcajero();

return 0;
}