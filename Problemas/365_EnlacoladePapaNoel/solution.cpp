#include <iostream>
#include <vector>

using namespace std;


int main(){

    int casos;
    int n, a;
    vector<int> personas;

    cin >> casos;

    for(int j=0; j<casos; j++){
        cin >> n >> a;
        int minutos =0;
        int persona;
        for(int i=0; i<n; i++){
            cin >> persona;
            personas.push_back(persona);
        }

        while(personas.at(a-1) != 0){
            for(int i=0; i<personas.size(); i++){
                if(i == a-1){
                    personas.at(i) -=1;
                    minutos +=2;   
                    
                    if(personas.at(i) == 0){
                        break;
                    }
                }
                else if(personas.at(i) != 0){
                    personas.at(i) -= 1;
                    minutos += 2;
                }
            }
        }

        personas.clear();

        cout << minutos << '\n';
    }

    return 0;
}