#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	while(n){
		int j1=0,j2=0;
		for(int x=0;x<n;x++){
			int g1,g2;
			cin>>g1>>g2;
			if(g1>g2){
				j1++;
			}else if(g2>g1){
				j2++;
			}
		}
		cout<<j1<<" "<<j2<<endl;
		cin>>n;
	}
	return 0;
}
