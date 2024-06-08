#include <iostream>
#include <cmath>
using namespace std;

// Função para calcular o fatorial
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

    // Calcula e^x usando a série de Taylor até 10 termos
    for (int n = 0; n < 10; ++n) {
        resultado += pow(x, n) / calcularFatorial(n);
    }

    cout << "O valor de e^" << x << " é aproximadamente: " << resultado << endl;

    return 0;
}
