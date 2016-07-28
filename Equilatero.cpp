#include<iostream>
#include<algorithm>
using namespace std;
int arr[100000];

int Binario(int n,int x){
	int e=-1,d=n-1,m;
	while(d-e>1){
		m=(e+d)/2;
		if(arr[m]==x){
			return m;
		}else if(x<arr[m]){
			d=m-1;
		}else{
			e=m+1;
		}
	}
	if(arr[e]==x){
		return d;
	}else{
		return -1;
	}
}

int main(){
	int t=0,tot=0,n;
	cin>>n;
	for(int x=0;x<n;x++){
		cin>>arr[x];
		tot+=arr[x];
	}
	if(tot%3!=0){
		cout<<t;
	}else{
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				for(int k=0;k<n;j++){
					if(arr[j]==arr[i]+tot/3 && arr[k]==arr[j]+tot/3) ++t;
				}
			}
		}
	}
}
