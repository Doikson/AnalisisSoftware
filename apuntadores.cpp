#include <iostream>
using namespace std;

void magia(int bar){
    bar = 80;
}

void magia2(int &bar){
    bar = 100;
}

int main (){

int x=12;
cout << "La direccion es: "<< &x;

int *toto = &x;
cout<<"\ntoto apunta a:"<<toto<<endl;
cout<<*toto<<endl;

int cachafas[]={3,10,242};
int *foo = cachafas;
cout<<*foo<<endl;
foo++;
cout<<*foo<<endl;

int bar = 30;
magia(bar);
cout<<bar<<endl;

magia2(bar);
cout<<bar<<endl;

}
