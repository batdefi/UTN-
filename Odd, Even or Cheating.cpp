#include<iostream>
using namespace std;

int main(){
	int p,j1,j2,r,a,gan=0;
	cin>>p>>j1>>j2>>r>>a;
	
	if(r==1 && a==1){
		gan=2;
	}else{
		if(r!=a){
			gan=1;
		}else{
			int tot=j1+j2;
			if((tot%2==0 && p==1) || (tot%2!=0 && p==0)){
				gan=1;
			}else
				gan=2;
		}
	}
	cout<<"Jogador "<<gan<<" ganha!";
	return 0;
}
