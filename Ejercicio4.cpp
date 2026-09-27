#include<iostream>
using namespace std;

class documento{
    public:
    documento(){
        cout<<"Creando un documento"<<endl;
}
~ documento(){
    cout<<"Eliminando el documento"<<endl;
}
};
int main(){

 documento*doc;
 doc=new documento();
delete doc;

    return 0;
}