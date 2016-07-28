#include<iostream>
#include<algorithm>
using namespace std;
long long arr[100000];

int main(){
	int n;
	cin>>n;
	for(int x=0;x<n;x++){
		cin>>arr[x];
	}
	sort(arr,arr+n);
	arr[0]=1;
	for(int x=0;x<n;x++){
		if(arr[x]<arr[x+1]){
			arr[x+1]=arr[x]+1;
		}
	}
	cout<<arr[n-1]+1;
	return 0;
}
