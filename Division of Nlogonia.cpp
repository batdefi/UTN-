#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	while(n){
		int x,y;
		cin>>x>>y;
		int px,py;
		for(int j=0;j<n;j++){
			cin>>px>>py;
			if(px==x || py==y){
				cout<<"divisa";
			}else if(px<x){
				if(py>y){
					cout<<"NO";
				}else{
					cout<<"SO";
				}
			}else{
				if(py>y){
					cout<<"NE";
				}else{
					cout<<"SE";
				}
			}
			cout<<endl;
		}
		cin>>n;
	}
	return 0;
}
