#include <iostream>

using namespace std;

const long long MOD = 1000000007;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int casos;
    cin >> casos;

    while(casos--){
        long long puntos, minimo, maximo;
        cin >> puntos >> minimo >> maximo;
        long long N = puntos*puntos;
        long long ultimo = 1;

        for(long long i = 0; i < minimo; i++){
            ultimo = ultimo * (N - i) % MOD;
        }

        long long res = ultimo;

        for(long long j = minimo + 1; j <= maximo; j++){
            ultimo = ultimo * (N - j + 1) % MOD;
            res = (res + ultimo) % MOD;
        }

        cout << res << '\n';
    }

    return 0;
}