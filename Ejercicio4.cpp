#include<iostream>
using namespace std;

class Documento{
    public:
Documento(){
        cout<<"Creando un documento"<<endl;
}
~ Documento(){
        cout<<"Eliminando el documento"<<endl;
}
};
int main(){

 Documento*doc;
doc=new Documento();
delete doc;

    return 0;
}