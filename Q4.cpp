#include <iostream>
using namespace std;

int main() {
    int numeros[5];

    // Lendo os cinco números
    cout << "Digite cinco numeros entre 1 e 30:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];

        // Verificando se o número está dentro do intervalo permitido
        while (numeros[i] < 1 || numeros[i] > 30) {
            cout << "Por favor, digite um numero entre 1 e 30: ";
            cin >> numeros[i];
        }
    }

    // Exibindo as barras de asteriscos
    cout << "Barras de asteriscos:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << numeros[i] << ": ";
        for (int j = 0; j < numeros[i]; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
