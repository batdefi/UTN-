#include<iostream>
using namespace std;
int arr[2001];

int main(){
	int n;
	cin>>n;
	for(int x=0;x<2001;x++){
		arr[x]=0;
	}
	for(int x=0;x<n;x++){
		int j;
		cin>>j;
		arr[j]+=1;
	}
	for(int x=0;x<2001;x++){
		if(arr[x]>0){
			cout<<x<<" aparece "<<arr[x]<<" vez(es)"<<endl;
		}
	}
	return 0;
}
