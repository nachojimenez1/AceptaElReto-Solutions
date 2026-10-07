#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;

    while (cin >> n) {

        priority_queue<int> izq;
        priority_queue<int, vector<int>, greater<int>> der;

        vector<int> respuesta;

        for (int i = 0; i < n; i++) {

            int valor;
            cin >> valor;

            if (valor == 0) {

                if (izq.empty()) {
                    respuesta.push_back(-1); // ECSA
                }
                else {
                    respuesta.push_back(izq.top());
                    izq.pop();

                    if (der.size() > izq.size()) {
                        izq.push(der.top());
                        der.pop();
                    }
                }

            } else {

                if (izq.empty() || valor <= izq.top()) {
                    izq.push(valor);
                } else {
                    der.push(valor);
                }

                if (izq.size() > der.size() + 1) {
                    der.push(izq.top());
                    izq.pop();
                }
                else if (der.size() > izq.size()) {
                    izq.push(der.top());
                    der.pop();
                }
            }
        }

        for (int i = 0; i < respuesta.size(); i++) {

            if (i > 0)
                cout << ' ';

            if (respuesta[i] == -1)
                cout << "ECSA";
            else
                cout << respuesta[i];
        }

        cout << '\n';
    }

    return 0;
}