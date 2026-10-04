#include <iostream>

using namespace std;

const long long MOD = 1000000007;

long long calcular(long long num1, long long num2){
    if(num1 == num2){
        return 1;
    }
    return (num1 * calcular(num1 - 1, num2)) % MOD;
}

int main(){
    int casos;
    cin >> casos;

    for(int i = 0; i < casos; i++){
        long long puntos, minimo, maximo;
        cin >> puntos >> minimo >> maximo;

        long long N = puntos * puntos;

        long long res = calcular(N, N - minimo);
        long long ultimo = res;

        for(long long j = minimo + 1; j <= maximo; j++){
            ultimo = (ultimo * (N - j + 1)) % MOD;
            res = (res + ultimo) % MOD;
        }

        cout << res << '\n';
    }

    return 0;
}