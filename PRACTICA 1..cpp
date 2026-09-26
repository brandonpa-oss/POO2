#include<iostream>
using namespace std;

class arma{
private:
    string nombre;
    string potencia;
    class cargador{
private:
    int a[10]={1,1,1,1,1,1,1,1,1,1};
    int balasac=0;
public:
    void llenar(){
    cout<<"Se recargo las balas"<<endl;
    for(int i=0;i<10;i++){
        a[i]=1;
}
    }
    bool extraer(){
    for(int i=9;i>=0;i--){
        if(a[i]==1){
            a[i]=0;
            return true;
        }
    }
        return false;

    }
    void mostrar(){
        balasac=0;
    for(int i=0;i<10;i++){
        if(a[i]==1){
            balasac=balasac+1;
        }
    }
    cout<<"Balas que le quedan:"<<balasac<<endl;
    }

    };
cargador car;
public:
    int validar(int h1){
        while(h1<0 || h1>4){
        cout<<"Ingrese una opcion valida:";
        cin>>h1;

    }
    return h1;
    }
    void caracteristicas(){
    cout<<"Nombre del arma:";cin>>nombre;
    cout<<"Potencia del arma:";cin>>potencia;
    }
    void disparar(){
    if(car.extraer()){
        cout<<"!Pum¡"<<endl;

    }
    else{
        cout<<"Click(vacio)"<<endl;
    }
    }
    void recargar(){
    car.llenar();
    }
    void mostrar1(){
    car.mostrar();
    }
    void interactuar(){
        int h;
    cout<<"Ingrese 1 para disparar"<<endl;
    cout<<"Ingrese 2 para recargar"<<endl;
    cout<<"Ingrese 3 para saber cuantas balas le quedan"<<endl;
    cout<<"Ingrese 4 para teminar el prograama"<<endl;

    cin>>h;
    h=validar(h);
    while(h==1 || h==2 || h==3){
        switch(h){
        case 1:{
        disparar();
        cin>>h;
        h=validar(h);
        break;
        }
        case 2:{
        recargar();
        cin>>h;
        h=validar(h);
        break;
        }
        case 3:{
            mostrar1();
            cin>>h;
            h=validar(h);
        break;
        }

        }

    }
    cout<<"Programa terminado"<<endl;
    }




};
int main(){
arma a;
a.caracteristicas();
a.interactuar();


return 0;


}
