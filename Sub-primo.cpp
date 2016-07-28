#include<iostream>
using namespace std;
long long arr[22];

int main(){
	int n,b;
	cin>>n>>b;
	while(n!=0 || b!=0){
		for(int x=1;x<=n;x++){
			cin>>arr[x];
		}
		for(int x=0;x<b;x++){
			long long d,c,v;
			cin>>d>>c>>v;
			arr[d]-=v;
			arr[c]+=v;
		}
		bool cond=true;
		for(int x=1;x<=n;x++){
			if(arr[x]<0){
				cout<<"N\n";
				cond=false;
				break;
			}
		}
		if(cond){
			cout<<"S\n";
		}
		cin>>n>>b;
	}
	return 0;
}
