#include<iostream>
#include<cmath>
using namespace std;
int arr[500];

int main(){
	int n,sum=0;
	cin>>n;
	for(int x=0;x<n;x++){
		cin>>arr[x];
		sum+=arr[x];
	}
	if(sum%n!=0){
		cout<<"-1";
	}else{
		int k=sum/n;
		sum=0;
		for(int x=0;x<n;x++){
			sum+=abs(arr[x]-k);
		}
		cout<<sum/2+1;
	}
	return 0;
}
