#include<iostream>
using namespace std;
int arr[10003];

int main(){
	int n;
	cin>>n;
	while(n){
		for(int x=1;x<=n;x++){
			cin>>arr[x];
		}
		arr[0]=arr[n];
		arr[n+1]=arr[1];
		int k=0;
		bool aux,arriba;
		if(arr[1]<arr[0]){
			arriba=false;
		}else if(arr[1]>arr[0]){
			arriba=true;
		}
		for(int x=1;x<=n+1;x++){
			aux=arriba;
			if(arr[x]<arr[x-1]){
				arriba=false;
			}else if(arr[x]>arr[x-1]){
				arriba=true;
			}
			if(aux!=arriba){
				k++;
			}
		}
		cout<<k<<endl;
		cin>>n;
	}
}
