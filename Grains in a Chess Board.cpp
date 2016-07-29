#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	while(n){
		int k;
		cin>>k;
		unsigned long long n1;
		n1=pow(2,k)/12000;
		cout<<n1<<" kg\n";
		n--;
	}
	return 0;
}
