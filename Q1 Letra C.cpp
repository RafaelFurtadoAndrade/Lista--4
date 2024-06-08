#include <iostream>
#include <cmath>
using namespace std;

// Fun��o para calcular o fatorial
int calcularFatorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    } else {
        return num * calcularFatorial(num - 1);
    }
}

int main() {
    double x;
    cout << "Digite o valor de x para calcular e^x: ";
    cin >> x;

    double resultado = 0.0;

    // Calcula e^x usando a s�rie de Taylor at� 10 termos
    for (int n = 0; n < 10; ++n) {
        resultado += pow(x, n) / calcularFatorial(n);
    }

    cout << "O valor de e^" << x << " � aproximadamente: " << resultado << endl;

    return 0;
}
