#include <iostream>

using namespace std;

const long long MOD = 1000000007;

long long calcular(long long N, long long A){
    long long res = 1;

    for(long long i = 0; i < A; i++){
        res = res * (N - i) % MOD;
    }

    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int casos;
    cin >> casos;

    while(casos--){
        long long puntos, minimo, maximo;
        cin >> puntos >> minimo >> maximo;

        long long N = puntos * puntos;

        long long ultimo = calcular(N, minimo);
        long long res = ultimo;

        for(long long j = minimo + 1; j <= maximo; j++){
            ultimo = ultimo * (N - j + 1) % MOD;
            res = (res + ultimo) % MOD;
        }

        cout << res << '\n';
    }

    return 0;
}