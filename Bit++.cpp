#include<iostream>
using namespace std;

int main(){
	int n,sal=0;
	cin>>n;
	char a1,a2,a3;
	while(n){
		n--;
		cin>>a1>>a2>>a3;
		if(a1=='+' || a2=='+' || a3=='+'){
			sal++;
		}else{
			sal--;
		}
	}
	cout<<sal;
	return 0;
}
