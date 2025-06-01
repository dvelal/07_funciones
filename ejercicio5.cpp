#include <iostream>
using namespace std;

int sumaDivisores(int val){
	int suma = 0;
	for(int i=1; i<val; i++){
		if (val%i == 0)
			suma = suma + i;
	}
	return (suma);
}

int main() {
	int num1, num2, ax, bx;
	do {
		cout<<"Ingrese los numeros positivos a determinar si son amigos: ";
		cin>>num1>>num2;
	} while (num1<=0 || num2<=0);
	ax = sumaDivisores(num1);
	bx = sumaDivisores(num2);
	if (ax==num2 && bx==num1)
		cout<<num1<<" y "<<num2<<" son numeros amigos.";
	else
		cout<<num1<<" y "<<num2<<" no son numeros amigos.";
	return 0;
}
