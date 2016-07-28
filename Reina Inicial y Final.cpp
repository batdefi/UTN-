#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int i1,i2,f1,f2;
	cin>>i1>>i2>>f1>>f2;
	if(i1==f1 || i2==f2 || abs(i1-f1)==abs(i2-f2)){
		cout<<"1";
	}else{
		cout<<"2";
	}
	return 0;
}
