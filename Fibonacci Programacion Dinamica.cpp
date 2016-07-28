#include<iostream>
using namespace std;
int arr[100];

int fib(int n){
	if(arr[n]!=-1){
		return arr[n];
	}else{
		arr[n]=fib(n-1)+fib(n-2);
		return arr[n];
	}
}

int main(){
	for(int x=0;x<100;x++){
		arr[x]=-1;
	}
	int n;
	cin>>n;
	arr[0]=0;
	arr[1]=1;
	cout<<fib(n);
	return 0;
}
