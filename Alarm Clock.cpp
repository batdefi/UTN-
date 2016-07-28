#include<iostream>
using namespace std;

int main(){
	int h1,m1,h2,m2;
	cin>>h1>>m1>>h2>>m2;
	while(h1!=0 || m1!=0 || h2!=0 || m2!=0){
		int k=0;
		if(h1>h2){
			k+=(24-h1+h2)*60;
		}else if(h1==h2 && m1>m2){
			k+=24*60;
		}else{
			k+=(h2-h1)*60;
		}
		if(m1>m2){
			k-=60;
			k+=(60-m1)+m2;
		}else{
			k+=m2-m1;
		}
		cout<<k<<endl;
		cin>>h1>>m1>>h2>>m2;
	}
}
