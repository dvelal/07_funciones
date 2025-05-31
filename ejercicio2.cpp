#include <iostream>
using namespace std;

void divisionPorRestas (int num1, int num2);

int main() {
    int a, b;
    cout<<"Ingresa dos numeros enteros positivos: ";
    cin>>a>>b;
    //Verificación básica de que sean positivos
    if (a>0 && b>0) {
        divisionPorRestas(a, b);
    } else {
        cout<<"Ambos numeros deben ser enteros positivos.\n";
    }
    return 0;
}

void divisionPorRestas(int num1, int num2) {
    int mayor, menor;
    //Determinar cuál es el mayor y cual el menor
    if (num1 > num2) {
        mayor = num1;
        menor = num2;
    } else {
        mayor = num2;
        menor = num1;
    }
    int cociente = 0;
    int resto = mayor;
    //Restas sucesivas
    while (resto >= menor) {
        resto = resto-menor;
        cociente = cociente+1;
    }
    cout<<"Cociente: "<<cociente<<"\n";
    cout<<"Resto: "<<resto<<"\n";
}
