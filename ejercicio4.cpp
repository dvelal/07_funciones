#include <iostream>
using namespace std;

int Perfecto(int n){
	int c=0;
	for(int i=1; i<n; i++){
		if(n%i==0){
			c = c+i;
		}
	}
	return c;
}

int main() {
	int num, perfecto;
	cout<<"Ingrese un numero: ";
	cin>>num;
	perfecto = Perfecto(num);
	if (perfecto==num)
		cout<<num<<" es un numero perfecto";
	else
		cout<<num<<" no es un numero perfecto";
	return 0;
}