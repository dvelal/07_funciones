#include <iostream>
using namespace std;

void Primo(int val){
    int div = 0;
    for (int i = 1; i <= val; i++){
        if (val%i == 0)
        div = div + 1;
    }
    if (div == 2)
        cout<<val<<" es un numero primo";
    else 
        cout<<val<<" no es un numero primo";
}

int main() {
    int num;
    do {
        cout<<"Ingrese un numero entero positivo a determinar: ";
        cin>>num;
    } while (num<=0);
    
    Primo(num);
    return 0;
}
