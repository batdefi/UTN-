#include<iostream>
using namespace std;
int main(){
	long long int n,m;
	cin>>n>>m;
	while(n!=-1 && m!=-1){
		long long j=0;
		int k;
		for(int x=0;x<n;x++){
			cin>>k;
			j+=k*(n-x)*m;
		}
		cout<<j<<endl;
		cin>>n>>m;
	}
}
