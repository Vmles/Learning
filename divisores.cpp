#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
typedef long long ll;

vector<ll> divi;

int printar_divisores(ll n){
    double x = sqrt( (double) n);
    for(int i=1; i<=x; i++){
        if(!(n%i)){
            divi.push_back(i);
            divi.push_back(n/i);
        }
    }
    sort(all(divi));
    divi.resize(unique(all(divi))-divi.begin());
    for(int i=0; i<divi.size(); i++){
        cout << divi[i] << endl;
    }
}

int main(){
    int n;
    cout << "Digite o n\n";
    cin >> n;
    printar_divisores(n);
}

