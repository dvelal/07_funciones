#include <iostream>
using namespace std;
void generarFibonacci(int);
int main() {
    int cantidad;
    do {
        cout<<"Ingrese la cantidad de terminos: ";
        cin>>cantidad;
    } while (cantidad<0);
    generarFibonacci(cantidad);
    return 0;
}

void generarFibonacci(int n) {
    int a,b,c,i,suma;
    a=0;
    b=1;
    suma=0;
    cout<<"Serie de Fibonacci:"<<endl;
    for(i=0;i<n;i++) {
        cout<<a<<endl;
        suma=suma+a;
        c=a+b;
        a=b;
        b=c;
    }
    cout<<"Suma de los terminos: "<<suma<< endl;
}
