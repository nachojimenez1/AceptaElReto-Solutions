#include <iostream>

using namespace std;

bool comprobar(int &peso_total){
    int pi, di, pd, dd;
    cin >> pi >> di >> pd >> dd;

    bool balanceado_izq = true;
    bool balanceado_der = true;

    if(pi == 0){
        balanceado_izq = comprobar(pi);
    }

    if(pd == 0){
        balanceado_der = comprobar(pd);
    }

    peso_total = pi + pd;

    return balanceado_izq && balanceado_der && (pi * di == pd * dd);
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int pi, di, pd, dd;

    while(cin >> pi >> di >> pd >> dd){

        if(pi == 0 && di == 0 && pd == 0 && dd == 0){
            break;
        }

        bool balanceado_izq = true;
        bool balanceado_der = true;

        if(pi == 0){
            balanceado_izq = comprobar(pi);
        }

        if(pd == 0){
            balanceado_der = comprobar(pd);
        }

        if(balanceado_izq && balanceado_der && (pi * di == pd * dd)){
            cout << "SI\n";
        }
        else{
            cout << "NO\n";
        }
    }

    return 0;
}$