#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int punt[20];
    int equipos, globos;
    int j;
    string color;

    while (cin >> equipos >> globos && (equipos != 0 || globos != 0)) {

        for (int i = 0; i < equipos; i++) {
            punt[i] = 0;
        }

        for (int i = 0; i < globos; i++) {
            cin >> j >> color;
            punt[j - 1]++;
        }

        int maximo = -1;
        int ganador = -1;
        int empates = 0;

        for (int i = 0; i < equipos; i++) {

            if (punt[i] > maximo) {
                maximo = punt[i];
                ganador = i;
                empates = 1;
            }
            else if (punt[i] == maximo) {
                empates++;
            }
        }

        if (empates == 1) {
            cout << ganador + 1 << '\n';
        }
        else {
            cout << "EMPATE\n";
        }
    }

    return 0;
}