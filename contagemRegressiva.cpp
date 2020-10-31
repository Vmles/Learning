//PROGRAMA QUE USA UM LAÇO PARA FAZER UMA CONTAGEM REGRESSIVA
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Digite o valor inicial da contagem: ";
    cin >> n;
    do{
        cout << n << endl;
        n--;
    }while(n>=0);
    return 0;
}
