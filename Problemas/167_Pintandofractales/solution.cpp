    #include <iostream>

    using namespace std;

    long long calcular_cuadrados(int n){
        if(n == 0){
            return 0;
        }
        return 4*n + 4 * calcular_cuadrados(n/2);
    }

    int main(){

        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        int n;
        while(cin >> n){
            long long res = calcular_cuadrados(n);
            cout << res << '\n';
        }
        return 0;
    }