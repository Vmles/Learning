#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n){
	int f;
	if(n==0){
		f=0;
	}else if(n==1){
		f=1;
	}else{
		f = fibonacci(n-1) + fibonacci(n-2);
	}
	return f;
}

int main(){
	int n;
	cout << "Qual numero da sequencia voce quer calcular? ";
	cin >> n;
	cout << "O valor eh: " << fibonacci(n) << endl;
  return 0;
}
