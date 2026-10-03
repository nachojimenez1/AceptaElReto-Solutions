#include <iostream>
#include <algorithm>

using namespace std;


int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    static int adornos[700001];
    static int acumulado[700001];
    int n, c;

    while(cin >> n >> c){
        int pos_maximo = -1;
        int total_max = -1;
        int acumulacion = 0;
        for(int i=0; i<n; i++){
            cin >> adornos[i];
            acumulacion += adornos[i];
            acumulado[i] = acumulacion;
        }
        int total = 0;
        for(int i=0; i<c; i++){
            total += adornos[i];
        }
        if(total % 2 == 0){
            int buscado = total/2;
            bool encontrado = binary_search(acumulado, acumulado+c, buscado);
            if(encontrado){
                pos_maximo = 0;
                total_max = total;
            }
        }

        for(int i=1; i<=n-c; i++){
            total += adornos[i+c-1] - adornos[i-1];

            if(total % 2 == 0){
                int buscado = total/2 + acumulado[i-1];
                bool encontrado = binary_search(acumulado+i, acumulado+i+c, buscado);
                if(encontrado){
                    if(total > total_max){
                        pos_maximo = i;
                        total_max = total;
                    }
                }
            }
        }

        if(pos_maximo == -1){
            cout << "SIN ADORNOS" << '\n';
        }
        else{
            cout << pos_maximo+1 << '\n';
        }
    }

    return 0;
}