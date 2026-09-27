#include<iostream>
#include<string>
using namespace std;

class persona{
    private:
  string nombre;
  string dni;
  void vernombre(){
    cout<<"Nombre:"<<nombre<<endl;
  } 
  void verdni(){
    cout<<"DNI:"<<dni<<endl;
  }
  public:
    persona(string _nombre,string _dni){
        nombre=_nombre;
        dni=_dni;
    }

};
class alumno : public persona{
    public:
    alumno(string _nombre,string _dni) : persona(_nombre,_dni){}
};
int main(){

    alumno a1("juan","45322123");
    //a1.vernombre();
    //a1.verdni();
    return 0;

}
