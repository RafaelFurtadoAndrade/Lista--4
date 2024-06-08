#include <iostream>
using namespace std;

// Fun��o para calcular o fatorial
int calcularFatorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    } else {
        int fatorial = 1;
        for (int i = 2; i <= num; ++i) {
            fatorial *= i;
        }
        return fatorial;
    }
}

int main() {
    double e = 1.0;

    // Calcula e usando a s�rie de Taylor at� 10 termos
    for (int n = 1; n <= 10; ++n) {
        e += static_cast<double>(n) / calcularFatorial(n);
    }

    cout << "O valor aproximado de e e: " << e << endl;

    return 0;
}
