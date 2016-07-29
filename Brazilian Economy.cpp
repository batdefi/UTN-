#include<iostream>
using namespace std;

int main(){
	int k;
	cin>>k;
	int n=0,s=0,t;
	for(int x=0;x<k;x++){
		cin>>t;
		if(t){
			n++;
		}else{
			s++;
		}
	}
	if(s>n){
		cout<<"Y\n";
	}else{
		cout<<"N\n";
	}
	return 0;
}
