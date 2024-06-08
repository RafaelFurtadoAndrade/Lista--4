#include <iostream>
using namespace std;

int main() {
    int lower_bound = 1;
    int upper_bound = 100;
    int guess;
    char response;

    cout << "Pense em um n�mero entre 1 e 100 e pressione Enter." << endl;
    cout << "Eu vou tentar adivinhar o n�mero em at� 7 perguntas." << endl;
    cout << "Responda com '<' se o n�mero que voc� pensou for menor," << endl;
    cout << "'>' se for maior, e '=' se eu acertar." << endl;
    cout << "Pressione Enter para come�ar...";
    cin.get(); // Aguarda o usu�rio pressionar Enter para come�ar

    while (true) {
        guess = lower_bound + (upper_bound - lower_bound) / 2; // encontra o n�mero no intervalo
        cout << "O n�mero que voc� pensou � " << guess << "?" << endl;
        cout << "Responda com '<', '>', ou '=': ";
        cin >> response;

        if (response == '=') {
            cout << "Eu acertei!" << endl;
            break;
        } else if (response == '<') {
            upper_bound = guess - 1; // limite superior
        } else if (response == '>') {
            lower_bound = guess + 1; // limite inferior
        }

        if (lower_bound > upper_bound) {
            cout << "Voc� trapaceou! N�o h� n�meros dentro do intervalo fornecido." << endl;
            break;
        }
    }
    return 0;
}
