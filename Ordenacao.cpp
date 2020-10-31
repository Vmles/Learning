//PROGRAMA QUE ORDENA UM VETOR EM C++
#include <bits/stdc++.h>
using namespace std;

int main(){
    int tam;
    cout << "Digite o tamanho do vetor que deseja ordenar: ";
    cin >> tam;
    int v[tam];
    for(int i=0; i<tam; i++){
        cout << "digite o " << i+1 << "º valor do vetor\n";
        cin >> v[i]; 
    }
    for(int i = 0; i<tam-1; i++){
        for(int j = i+1; j<tam; j++){
            if(v[i]>v[j]){
                swap(v[i], v[j]);
            }
        }
    }
    cout << "vetor ordenado:" << endl;
    for(int i = 0; i<tam; i++){
        cout << v[i] << ' ';
    }
    cout << endl;
    return 0;
}
 
