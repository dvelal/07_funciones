#include <iostream>
using namespace std;

//Funcion Primo
void Primo(int val){
    int div = 0;
    //Contador de divisores del numero ingresado
    for (int i = 1; i <= val; i++){
        if (val%i == 0)
        div = div + 1;
    }
    //Evaluacion (un numero primo tiene solo 2 divisores)
    if (div == 2)
        cout<<val<<" es un numero primo";
    else 
        cout<<val<<" no es un numero primo";
}

int main() {
    int num;
    //Evitemos que se ingresen numeros negativos
    do {
        cout<<"Ingrese un numero entero positivo a determinar: ";
        cin>>num;
    } while (num<=0);
    
    Primo(num);
    return 0;
}
