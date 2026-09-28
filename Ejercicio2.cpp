#include<iostream>
#include<string>
using namespace std;


class Persona{
private:
    string nombre;
    int edad;
public:
    Persona(string _nombre,int _edad){
        nombre=_nombre;
        edad=_edad;
    }
    virtual void mostrar(){
        cout<<"Nombre:"<<nombre<<endl;
        cout<<"Edad:"<<edad<<endl;
    }
    ~ Persona(){
        cout<<"Llamando al Destructor"<<endl;}
};
class Alumno : public Persona{
private:
float nota;

public:
Alumno(string _nombre,int _edad,float _nota) : Persona(_nombre,_edad){
    nota=_nota;
}
void mostrar(){
    Persona::mostrar();
    cout<<"Nota:"<<nota<<endl;
}

};
int main(){
Persona*p1;
p1=new Alumno("Juan",19,16.5);
p1->mostrar();

delete p1;

return 0;

}