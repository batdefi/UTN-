#include<bits/stdc++.h>
using namespace std;
int arr[1001], arr2[1001];

int main(){
	int n;
	cin>>n;
	while(n){
		for(int x=0;x<n;x++){
			cin>>arr[x];
			arr2[x]=arr[x];
		}
		sort(arr2,arr2+n);
		int max=arr2[n-2];
		for(int x=0;x<n;x++){
			if(arr[x]==max){
				cout<<x+1<<"\n";
				break;
			}
		}
		cin>>n;
	}
	return 0;
}
