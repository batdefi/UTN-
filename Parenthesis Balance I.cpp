#include<iostream>
using namespace std;

int main(){
	string j;
	while(getline(cin,j)){
		int tam=j.length();
		int cant=0;
		bool valido=true;
		for(int x=0;x<tam;x++){
			if(j[x]=='('){
				cant++;
			}else if(j[x]==')'){
				cant--;
			}
			if(cant<0){
				valido=false;
				break;
			}
		}
		if(valido && cant==0){
			cout<<"correct"<<endl;
		}else{
			cout<<"incorrect"<<endl;
		}
	}
	return 0;
}
