#include <iostream>
using namespace std;

int main() {
    cout << "Triplos de Pitágoras com lados não superiores a 20:\n";

    for (int a = 1; a <= 20; ++a) {
        for (int b = a; b <= 20; ++b) {
            for (int c = b; c <= 20; ++c) {
                if (a * a + b * b == c * c) {
                    cout << "(" << a << ", " << b << ", " << c << ")" << endl;
                }
            }
        }
    }

    return 0;
}
