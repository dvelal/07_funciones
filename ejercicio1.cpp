#include <iostream>
#include <cmath>
using namespace std;

void resta(int val1, int val2);
void cociente(int val1, int val2);
void potencia(double val1, double val2);
int producto(int val1, int val2);
int suma(int val1, int val2);

int main() {
    int num1, num2, resultado, resultado2;
    cout<<"ingrese el primer numero: "; cin>>num1;
    cout<<"ingrese el segundo numero: "; cin>>num2;

    resta(num1,num2);
    resta(num2,num1);

    resultado = producto(num1,num2);

    cout<<"\nLa multiplicacion de "<<num1<<" por "<<num2<<" es: "<<resultado;

    cociente(num1,num2);
    cociente(num2,num1);

    resultado2 = suma(num1,num2);

    cout<<"\nLa suma de "<<num1<<" mas "<<num2<<" es: "<<resultado2;

    potencia(num1,num2);
    potencia(num2,num1);
    return 0;
}

//funcion resta
void resta(int val1, int val2){
    int sustrac; 
    sustrac = val1-val2;
    cout<<"\nLa resta de "<<val1<<" - "<<val2<<" es: "<<sustrac;
}

//funcion producto
int producto(int val1, int val2){
    int prod;
    prod = val1*val2;
    return(prod);
}

//funcion suma
int suma(int val1, int val2){
    int adici; 
    adici = val1+val2;
    return(adici);
}

//funcion cociente
void cociente(int val1, int val2){
    int coci;
    if(val2!=0){
        coci = val1/val2;
        cout<<"\nLa divicion de "<<val1<<" / "<<val2<<" es: "<<coci;
    }
    else
    cout<<"\nLa divicion de "<<val1<<" / "<<val2<<" es: "<<"indeterminado";
    ;
}

//funcion potencia
void potencia(double val1, double val2){
    double potencia;
    potencia = pow(val1, val2);
    cout<<"\nLa potencia de "<<val1<<" ^ "<<val2<<" es: "<<potencia;
    }