#include<iostream>
using namespace std;
long long arr[1001];

int main(){
	for(int x=0;x<1001;x++){
		arr[x]=0;
	}
	int n;
	cin>>n;
	long long tot=0;
	for(int x=0;x<n;x++){
		long long z=0;
		for(int j=0;j<n;j++){
			long long c;
			cin>>c;
			arr[j]+=c;
			z+=c;
		}
		cout<<z<<endl;
		tot+=z;
	}
	for(int x=0;x<n;x++){
		cout<<arr[x]<<endl;
	}
	cout<<tot;
}
