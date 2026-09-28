#include<iostream>
#include<string>
using namespace std;

class alumno{
private:
    string nombre;
    int edad;
    float nota;
public:
void alumnoo(string _nombre,int _edad,float _nota){
    nombre=_nombre;
    edad=_edad;
    nota=_nota;
}
void mostrar(){
    cout<<"Nombre:"<<nombre<<endl;
    cout<<"Edad:"<<edad<<endl;
    cout<<"Nota:"<<nota<<endl;}
};
class profesor{
    private:
string nombre;
string materia;
    int edad;
public:

void profesorr(string _nombre,int _edad,string _materia){
    nombre=_nombre;
    edad=_edad;
    materia=_materia;
}
void mostrar(){
    cout<<"Nombre:"<<nombre<<endl;
    cout<<"Edad:"<<edad<<endl;
    cout<<"Materia:"<<materia<<endl; }   
};
class cajero{
    private:
    int saldo;
    string id;
    public:
    void cajeroo(string _nombre,int _saldo){
        id=_nombre;
        saldo=_saldo;
    }
    void mostrar(){
        cout<<"ID:"<<id<<endl;
        cout<<"Saldo:"<<saldo<<endl;
    }
};
int main(){
//alumno
alumno a1;
a1.alumnoo("Pedro",20,14.6);
a1.mostrar();
cout<<endl;
//profesor
profesor p1;
p1.profesorr("Julio",34,"Ingles");
p1.mostrar();
cout<<endl;
//cajero
cajero c1;
c1.cajeroo("1234",1000);
c1.mostrar();

return 0;
}