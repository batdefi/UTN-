#include<iostream>
#include<string>
using namespace std;

int main(){
	int a,d,b;
	bool cero=true;
	char c;
	cin>>a>>c>>c;
	string j;
	int k=0;
	while(c!='e'){
		j+=c;
		if(c!='0'){
			cero=false;
		}
		cin>>c;
		k++;
	}
	k--;
	cin>>b;
	if(a!=0 && b!=0){
		cero=false;
	}
	cout<<a;
	if(!cero){
		for(int x=0;x<k+1 || x<b;x++){
			if(x==b){
				cout<<'.'<<j[x];
			}else if(x<k+1){
				cout<<j[x];	
			}else{
				cout<<'0';
		}
	}			
	}
	return 0;
}
