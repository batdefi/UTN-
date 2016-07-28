#include<iostream>
#include<algorithm>
using namespace std;
long long c[100000];
long long p[100000];
int main(){
	long long n;
	cin>>n;
	while(n){
		for(long long x=0;x<n;x++){
			cin>>c[x];
		}
		for(long long x=0;x<n;x++){
			cin>>p[x];
		}
		long long k=0;
		sort(c,c+n);
		sort(p,p+n,greater<long long>());
		for(int x=0;x<n;x++){
			k+=c[x]*p[x];
		}
		cout<<k<<endl;
		cin>>n;
	}
}
