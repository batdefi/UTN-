#include<bits/stdc++.h>
using namespace std;
int arr[91];
bool l[92];

int main(){
	int b,n;
	bool listo;
	cin>>n>>b;
	while(n!=0 || b!=0){
		listo=true;
		for(int x=1;x<92;x++){
			l[x]=0;
		}
		for(int x=0;x<b;x++){
			cin>>arr[x];
		}
		sort(arr,arr+b);
		int k=1;
		for(int x=0;x<b-1;x++){
			for(int j=x+1;j<b;j++){
				l[arr[j]-arr[x]]=1;
			}
		}
		for(int x=1;x<=n;x++){
			if(!l[x]){
				listo=false;
			}
		}
		if(listo){
			cout<<"Y\n";
		}else{
			cout<<"N\n";
		}
		cin>>n>>b;
	}
	return 0;
}
