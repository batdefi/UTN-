#include<iostream>
using namespace std;
long long arr[1000000];

int main(){
	int n;
	cin>>n;
	cin>>arr[0];
	int j=arr[0];
	arr[0]-=j;
	for(int x=1;x<n;x++){
		cin>>arr[x];
		arr[x]-=j;
	}
	arr[n]=arr[n-1];
	for(int x=0;x<n;x++){
		if(min(arr[x]-arr[x-1],arr[x+1]-arr[x])==0){
			cout<<max(arr[x]-arr[x-1],arr[x+1]-arr[x]);
		}else{
			cout<<min(arr[x]-arr[x-1],arr[x+1]-arr[x]);
		}
		cout<<" "<<max(arr[n-1]-arr[x],arr[x])<<endl;
	}
	return 0;
}
