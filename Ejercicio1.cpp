#include<iostream>
using namespace std;

class maquinadecafe{
private:
int nv_agua;
int gr_cafe;
int nv_leche;

public:
maquinadecafe(int agua,int cafe,int leche){
    nv_agua=agua;
    gr_cafe=cafe;
    nv_leche=leche;
}
bool prepararcafe(){
    if(nv_agua<100 || nv_leche<100 || gr_cafe<10){
        return false;
    }
    nv_agua=nv_agua-100;
    nv_leche=nv_leche-100;
    gr_cafe=gr_cafe-10;
   
   return true;
}
void mostrar(){
    cout<<"Nivel de agua:"<<nv_agua<<"ml"<<endl;
        cout<<"Granos de cafe:"<<gr_cafe<<endl;
        cout<<"Nivel de leche:"<<nv_leche<<"ml"<<endl;
}

};

int main(){
maquinadecafe m1(2000,10,2000);
m1.mostrar();
cout<<endl;

if(m1.prepararcafe()){
    cout<<"Cafe listo"<<endl;
}
else{
    cout<<"No hay suficientes ingredientes"<<endl;
}
m1.mostrar();
return 0;
}