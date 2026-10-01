#include <iostream>

using namespace std;

void revisar_puntos(string &num){
    for(int i=num.length()-4; i>=0; i-=4){
        if(num[i] != '.'){
            num.insert(i+1,".");
        }
    }
}

int main(){
    string num;
    while(getline(cin, num)){
        bool acarreo = true;
        for(int i=num.length()-1; i>=0 && acarreo; i--){
            if(num[i] != '.'){
                num[i] = num[i] + 1;
                if(num[i] == ':'){
                    num[i] = '0';   
                }
                else{
                    acarreo = false;
                }
            }
        }

        if(acarreo){
            num.insert(0,"1");
        }
        
        revisar_puntos(num);

        cout << num << '\n';
    }

    return 0;
}