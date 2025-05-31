#include <iostream>
using namespace std;

void Perfecto(int num1, int num2){
	for(int i=num1; i<=num2; i++){
		int c=0;
		for(int j=1; j<i; j++){
			if (i%j==0){
				c = c+j;
			}
		}
		if (c==i)
			cout<<i<<endl;
	}
}

int main() {
	int izq, der;
	cout<<"Ingrese el numero izquierdo del intervalo: ";
	cin>>izq;
	cout<<"Ingrese el numero derecho del intervalo: ";
	cin>>der;
	cout<<"\nLos numero enteros perfectos en el intervalo ["<<izq<<";"<<der<<"] son: "<<endl;
	Perfecto(izq, der);
	return 0;
}