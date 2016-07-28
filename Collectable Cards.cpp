#include<iostream>
using namespace std;

int Euclides(int x,int y){
	if(x%y==0){
		return y;
	}else{
		Euclides(y,x%y);
	}
}

int main(){
	int n;
	cin>>n;
	while(n){
		n--;
		int x,y;
		cin>>x>>y;
		cout<<Euclides(max(x,y),min(x,y))<<endl;
	}
	return 0;
}
