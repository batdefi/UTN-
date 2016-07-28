#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	cin.ignore();
	for(int x=0;x<n;x++){
		string j;
		getline(cin,j);
		int tam=j.length(),par=0,impar=0;
		for(int x=0;x<tam;x++){
			if(x%2){
				impar+=j[x]-'0';
			}else{
				par+=j[x]-'0';
			}
		}
		if(par==impar || (par-impar)%11==0){
			cout<<"El número "<<j<<" es divisible por 11"<<endl;
		}else{
			cout<<"El número "<<j<<" no es divisible por 11"<<endl;
		}
	}
	return 0;
}
