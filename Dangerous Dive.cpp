#include<iostream>
using namespace std;
bool arr[10002];

int main(){
	long n,s;
	while(cin>>s>>n){
		for(int x=0;x<10002;x++){
			arr[x]=0;
		}
		for(int x=0;x<n;x++){
			long j;
			cin>>j;
			arr[j]=1;
		}
		if(n==s){
			cout<<'*';
		}else{
			bool cond=true;
			for(int x=1;x<=s;x++){
				if(arr[x]==0){
					cond=false;
					cout<<x<<" ";
				}
			}	
		}
		cout<<endl;
	}
	return 0;
}
