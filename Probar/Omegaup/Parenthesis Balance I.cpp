#include<iostream>
using namespace std;

int main(){
	string j;
	getline(cin,j);
	int tam=j.length();
	int cant=0,cantc=0;
	bool valido=true;
	for(int x=0;x<tam;x++){
		if(j[x]=='('){
			cant++;
		}else if(j[x]==')'){
			cant--;
		}else if(j[x]=='{'){
			cantc++;
		}else if(j[x]=='}'){
			cantc--;
		}
		if(cant<0 || cantc<0){
			valido=false;
			break;
		}
	}
	if(valido && cant==0 && cantc==0){
		cout<<"SI"<<endl;
	}else{
		cout<<"NO"<<endl;
	}

	return 0;
}
