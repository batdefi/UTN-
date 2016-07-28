#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
	int n;
	cin>>n;
	string j;
	for(int x=0;x<n;x++){
		char c;
		cin>>c;
		switch(c){
			case'2':
			case'3':
			case'5':
			case'7':j+=c;
					break;
			case'9':j+="7332";      
				    break;
			case'4':j+="322";
				    break;
			case'6':j+="53";
					break;
			case'8':j+="7222";
					break;
		}
	}
//	sort(j.begin(),j.end(),greater<char>());
	int tam=j.length();
	for(int x=0;x<tam-1;x++){
		for(int i=x+1;i<tam;i++){
			if(j[x]<j[i]){
				char aux=j[x];
				j[x]=j[i];
				j[i]=aux;
			}
			
		}
	}
	cout<<j;
	return 0;
}
