#include <iostream>
using namespace std;

long long factorial(int);

int main() {
    int m, n;
    long long factorial_m, factorial_n, factorial_menos_n, combinatorio;

    cout << "Ingrese el valor de m: ";
    cin >> m;
    cout << "Ingrese el valor de n: ";
    cin >> n;

    
    // Validacion
    if (n > m || m < 0 || n < 0) {
        cout << "Valores invalidos. Asegurese de que 0 <= n <= m." << endl;
        return 1;
    }

    // Calculos
    factorial_m = factorial(m);
    factorial_n = factorial(n);
    factorial_menos_n = factorial(m - n);

    combinatorio = factorial_m / (factorial_n * factorial_menos_n);

    // Resultado
    cout << "El valor de C(" << m << ", " << n << ") es: " << combinatorio << endl;

    return 0;
}

// Funcion para calcular el factorial de un numero
long long factorial(int val) {
    long long f = 1;
    for (int i = 1; i <= val; ++i) {
        f = f*i;
    }
    return f;
}
