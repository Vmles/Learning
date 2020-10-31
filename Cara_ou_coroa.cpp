#include <bits/stdc++.h>
using namespace std;

string s;

void recursao(int n){
    string aux = s;
    if(aux.size() == n){
        cout << aux << endl;
        return;
    }
    s += 'k';
    recursao(n);
    s = aux;
    s += 'c';
    recursao(n);
    return;
}

void printar_resultados(int n){
    s = "";
    recursao(n);
}

int main(){
    int n;
    cout << "Digite o n\n";
    cin >> n;
    printar_resultados(n);
}

