#include<iostream>
#include<string>
using namespace std;


class persona{
private:
    string nombre;
    int edad;
public:
    persona(string _nombre,int _edad){
        nombre=_nombre;
        edad=_edad;
    }
    virtual void mostrar(){
        cout<<"Nombre:"<<nombre<<endl;
        cout<<"Edad:"<<edad<<endl;
    }
};
class alumno : public persona{
private:
float nota;

public:
alumno(string _nombre,int _edad,float _nota) : persona(_nombre,_edad){
    nota=_nota;
}
void mostrar(){
    persona::mostrar();
    cout<<"Nota:"<<nota<<endl;
}
};
int main(){
persona*p1;
p1=new alumno("Juan",19,16.5);
p1->mostrar();

return 0;

}