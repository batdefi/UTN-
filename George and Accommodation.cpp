#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int k=0;
	for(int x=0;x<n;x++){
		int a,b;
		cin>>a>>b;
		if(a<=(b-2)){
			k++;
		}
	}
	cout<<k;
}
