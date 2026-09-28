#include<iostream>
using namespace std;

class Caja{
private:
    int alto;
    int ancho;
public:
    
void datos(int _alto,int _ancho){
        ancho=_ancho;
        alto=_alto;
    }
void mostrar(){
        cout<<"Ancho:"<<ancho<<endl;
        cout<<"Alto:"<<alto<<endl;
    }
};
int main(){
    Caja c1;
    c1.datos(50,100);
    c1.mostrar();
    
    return 0;
}
