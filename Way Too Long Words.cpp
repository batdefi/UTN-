#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	cin.ignore();
	while(n){
		n--;
		string j;
		getline(cin,j);
		int tam=j.length();
		if(tam<11){
			cout<<j<<endl;
		}else{
			cout<<j[0]<<tam-2<<j[tam-1]<<endl;
		}
	}
	return 0;
}
