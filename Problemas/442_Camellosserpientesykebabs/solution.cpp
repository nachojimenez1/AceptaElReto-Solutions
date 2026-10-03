#include <iostream>
#include <string>
#include <cctype>

using namespace std;


int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string nombre;
    string modo;
   
    while(cin >> nombre >> modo){
        if(isupper(nombre[0])){
            if(modo == "CamelCase"){
            }
            else if(modo == "snake_case"){
                nombre[0]=tolower(nombre[0]);
                for(int i=0; i<nombre.length(); i++){
                    if(isupper(nombre[i])){
                        nombre[i]=tolower(nombre[i]);
                        nombre.insert(nombre.begin() + i, '_');
                    }
                }
            }
            else if(modo == "kebab-case"){
                nombre[0]=tolower(nombre[0]);
                for(int i=0; i<nombre.length(); i++){
                    if(isupper(nombre[i])){
                        nombre[i]=tolower(nombre[i]);
                        nombre.insert(nombre.begin() + i, '-');
                    }
                }
            }
            else{
                nombre[0]=tolower(nombre[0]);
            }
        }
        else if(nombre.find('_') != string::npos){
            if(modo == "CamelCase"){
                nombre[0]=toupper(nombre[0]);
                for(int i=0; i<nombre.length(); i++){
                    if(nombre[i] == '_'){
                        nombre[i+1] =toupper(nombre[i+1]);
                        nombre.erase(i,1);
                        i-=1;
                    }
                }
            }
            else if(modo == "snake_case"){
            }
            else if(modo == "kebab-case"){
                for(int i=0; i<nombre.length(); i++){
                    if(nombre[i] == '_'){
                        nombre[i]='-';
                    }
                }
            }
            else{
                for(int i=0; i<nombre.length(); i++){
                    if(nombre[i] == '_'){
                        nombre[i+1] =toupper(nombre[i+1]);
                        nombre.erase(i,1);
                        i-=1;
                    }
                }
            }
        }
        else if(nombre.find('-') != string::npos){
            if(modo == "CamelCase"){
                nombre[0]=toupper(nombre[0]);
                for(int i=0; i<nombre.length(); i++){
                    if(nombre[i] == '-'){
                        nombre[i+1] =toupper(nombre[i+1]);
                        nombre.erase(i,1);
                        i -= 1;
                    }
                }
            }
            else if(modo == "snake_case"){
                for(int i=0; i<nombre.length(); i++){
                    if(nombre[i] == '-'){
                        nombre[i]='_';
                    }
                }
            }
            else if(modo == "kebab-case"){
                
            }
            else{
                for(int i=0; i<nombre.length(); i++){
                    if(nombre[i] == '-'){
                        nombre[i+1] =toupper(nombre[i+1]);
                        nombre.erase(i,1);
                        i -=1;
                    }
                }
            }
        }
        else{
            if(modo == "CamelCase"){
                nombre[0]=toupper(nombre[0]);
            }
            else if(modo == "snake_case"){
                for(int i=0; i<nombre.length(); i++){
                    if(isupper(nombre[i])){
                        nombre[i]=tolower(nombre[i]);
                        nombre.insert(nombre.begin() + i, '_');
                    }
                }
            }
            else if(modo == "kebab-case"){
                for(int i=0; i<nombre.length(); i++){
                    if(isupper(nombre[i])){
                        nombre[i]=tolower(nombre[i]);
                        nombre.insert(nombre.begin() + i, '-');
                    }
                }
            }
            else{
            
            }
        }
        

        cout << nombre << '\n';
    }

    return 0;
}