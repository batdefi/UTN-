#include<iostream>
using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	int n1,n2;
	cin>>n1;
	for(int x=1;x<n;x++){
		cin>>n2;
		if(n1<n2){
			cout<<n2;
			n1=n2;
		}
	}
	return 0;
}
