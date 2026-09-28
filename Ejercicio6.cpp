#include<iostream>
using namespace std;

class Caja{
public:
int alto;
int ancho;
};

int main(){
Caja c1;

c1.alto=100;
c1.ancho=50;
cout<<"Alto:"<<c1.alto<<endl;
cout<<"Ancho:"<<c1.ancho<<endl;
return 0;
}