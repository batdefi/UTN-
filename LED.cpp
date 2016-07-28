#include<iostream>
#include<string>
using namespace std;
const int arr[]={6,2,5,5,4,5,6,3,7,6};

int main(){
	int n;
	cin>>n;
	string j;
	cin.ignore();
	while(n){
		n--;
		getline(cin,j);
		int leds=0;
		int tam=j.length();
		for(int x=0;x<tam;x++){
			leds+=arr[int(j[x]-'0')];
		}
		cout<<leds<<" leds"<<endl;
	}
	return 0;
}
