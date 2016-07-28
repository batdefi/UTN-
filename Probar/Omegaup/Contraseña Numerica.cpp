#include<iostream>
using namespace std;

int main(){
	int n;
	bool cond=false;
	cin>>n;
	int j;
	while(cin>>j){
		if(j==n){
			cond=true;
		}
	}
	if(cond){
		cout<<"Bienvenido";
	}else{
		cout<<"Gracias por Participar";
	}
	return 0;
}
