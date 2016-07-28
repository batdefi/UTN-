#include<iostream>
using namespace std;
long long arr[1000001];

long long Binario(long long n,long long x){
	long long e=-1,d=n-1,m;
	while(d-e>1){
		m=(e+d)/2;
		if(arr[m]<x){
			e=m;
		}else{
			d=m;
		}
	}
	return d+1;
}

int main(){
	long long n;
	cin>>n;
	cin>>arr[0];
	for(long long x=1;x<n;x++){
		cin>>arr[x];
		arr[x]+=arr[x-1];
	}
	long long s,j;
	cin>>s;
	for(long long x=0;x<s;x++){
		cin>>j;
		cout<<Binario(n,j)<<endl;
	}
	return 0;
}
