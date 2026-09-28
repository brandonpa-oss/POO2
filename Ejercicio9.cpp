#include<iostream>
#include<string>
using namespace std;

class Alumno{
private:
    string nombre;
    int edad;
    float nota;
public:
void crear_alumno(string _nombre,int _edad,float _nota){
    nombre=_nombre;
    edad=_edad;
    nota=_nota;
}
void mostrar_alumno(){
    cout<<"Nombre:"<<nombre<<endl;
    cout<<"Edad:"<<edad<<endl;
    cout<<"Nota:"<<nota<<endl;}
};
class Profesor{
    private:
    string nombre;
    string materia;
    int edad;
    public:

void crear_profesor(string _nombre,int _edad,string _materia){
    nombre=_nombre;
    edad=_edad;
    materia=_materia;
}
void mostrar_profesor(){
    cout<<"Nombre:"<<nombre<<endl;
    cout<<"Edad:"<<edad<<endl;
    cout<<"Materia:"<<materia<<endl; }   
};
class Cajero{
    private:
    int saldo;
    string id;
    public:
    
    void crear_cajero(string _nombre,int _saldo){
        id=_nombre;
        saldo=_saldo;
    }
    void mostrar_cajero(){
        cout<<"ID:"<<id<<endl;
        cout<<"Saldo:"<<saldo<<endl;
    }
};
int main(){
//alumno
Alumno a1;
a1.crear_alumno("Pedro",20,14.6);
a1.mostrar_alumno();
cout<<endl;
//profesor
Profesor p1;
p1.crear_profesor("Julio",34,"Ingles");
p1.mostrar_profesor();
cout<<endl;
//cajero
Cajero c1;
c1.crear_cajero("1234",1000);
c1.mostrar_cajero();

return 0;
}