#include<iostream>
#include<string>
using namespace std;
int main(){
	string j;
	getline(cin,j);
	int tam=j.length();
	cout<<toupper(j[0]);
	
	for(int x=1;x<tam;x++){
		cout<<tolower(j[x]);
	}
	return 0;
}

