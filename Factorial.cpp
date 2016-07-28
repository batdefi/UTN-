#include<iostream>
using namespace std;

long long factorial(int n){
	if(n==0){
		return 1;
	}
	return n*factorial(n-1);
}

int main(){
	int n;
	cin>>n;
	long long r=1;
	for(int x=0;x<n;x++){
		char c;
		cin>>c;
		int numero=c-'0';
		r*=factorial(numero);
	}
	cout<<r;
}
