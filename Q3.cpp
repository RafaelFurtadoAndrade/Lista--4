#include <iostream>

using namespace std;

int main() {
    double preco_total = 0.0;
    int produto;
    int quantidade;

    cout << "Digite o numero do produto (0 para terminar): ";
    cin >> produto;

    while (produto != 0) {
        cout << "Digite a quantidade vendida: ";
        cin >> quantidade;

        switch (produto) {
            case 1:
                preco_total += 2.98 * quantidade;
                break;
            case 2:
                preco_total += 4.50 * quantidade;
                break;
            case 3:
                preco_total += 9.98 * quantidade;
                break;
            case 4:
                preco_total += 4.49 * quantidade;
                break;
            case 5:
                preco_total += 6.87 * quantidade;
                break;
            default:
                cout << "Produto invalido! Por favor, escolha um numero de produto valido." << endl;
                break;
        }

        cout << "Digite o numero do proximo produto (0 para terminar): ";
        cin >> produto;
    }

    cout << "O valor total de varejo de todos os produtos vendidos e: R$" << preco_total << endl;

    return 0;
}
