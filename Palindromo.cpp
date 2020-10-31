#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
typedef long long ll;

bool palindromo(string s){
    for(int i=0; i<s.size(); i++){
        s[i] = tolower(s[i]);
    }
    string aux = s;
    reverse(all(s));
    return (aux == s);
}

int main(){
    string s;
    cout << "Digite a palavra\n";
    cin >> s;
    if(palindromo(s)){
        cout << "É Palindromo\n";
    }else{
        cout << "Não é Palindromo\n";
    }
}

