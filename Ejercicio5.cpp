#include<iostream>
#include<string>
using namespace std;

class Persona{
private:
  string nombre;
  string dni;
  void ver_nombre(){
    cout<<"Nombre:"<<nombre<<endl;
  } 
  void ver_dni(){
    cout<<"DNI:"<<dni<<endl;
  }
public:
    Persona(string _nombre,string _dni){
        nombre=_nombre;
        dni=_dni;
    }
};
class Alumno : public Persona{
    public:
    Alumno(string _nombre,string _dni) : Persona(_nombre,_dni){}
};
int main(){

    Alumno a1("juan","45322123");
    a1.ver_nombre();
    a1.ver_dni();
    return 0;

}
