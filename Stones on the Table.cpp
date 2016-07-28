#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	char a,b;
	cin>>a;
	int k=0;
	for(int x=0;x<n-1;x++){
		cin>>b;
		if(a==b){
			k++;
		}else{
			a=b;
		}
	}
	cout<<k;
}
