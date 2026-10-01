#include <iostream>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int ncasos;
    cin >> ncasos;

    int temps[10001];

    for(int i=0; i<ncasos; i++){
        int n;
        cin >> n;

        int picos=0;
        int valles=0;

        for(int j=0; j<n; j++){
            cin >> temps[j];
        }

        for(int k=1; k<n-1; k++){
            if(temps[k-1] < temps[k] && temps[k] > temps[k+1]){
                picos++;
            }
            else if(temps[k-1] > temps[k] && temps[k] < temps[k+1]){
                valles++;
            }
        }

        cout << picos << ' ' << valles << '\n';
    }

    return 0;
}