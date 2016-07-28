#include<iostream>
using namespace std;
long long arr[101];

int main(){
	arr[0]=0;
	for(int x=1;x<101;x++){
		arr[x]=x*x+arr[x-1];
	}
	int n;
	cin>>n;
	while(n){
		cout<<arr[n]<<endl;
		cin>>n;
	}
	return 0;
}
