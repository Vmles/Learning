#include <bits/stdc++.h>
using namespace std;

int main(){
    int op = 1;
    while(1){
        cout << "CALCULADOR\n";
        cout << "Aperte 0 para sair\n";
        cout << "Aperte 1 para somar\n";
        cout << "Aperte 2 para subtrair\n";
        cout << "Aperte 3 para multiplicar\n";
        cout << "Aperte 4 para dividir\n";
        cin  >> op;
        if(op == 0) break;
        cout << "Insira os dois valores que deseja operar: ";
        float a, b;
        cin >> a >> b;
        if(op == 1){
            cout << a+b << endl;
        }else if(op == 2){
            cout << a-b << endl;
        }else if(op == 3){
            cout << a*b << endl;
        }else if(op == 4){
            cout << a/b << endl;
        }else{
            cout << "Operacao indevida, tente novamente\n";
        }
    }
    return 0;
}
