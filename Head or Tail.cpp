#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	while(n){
		int k;
		int x=0,y=0;
		for(int j=0;j<n;j++){
			cin>>k;
			if(k){
				y++;
			}else{
				x++;
			}
		}
		cout<<"Mary won "<<x<<" times and John won "<<y<<" times"<<endl;
		cin>>n;
	}
	return 0;
}
