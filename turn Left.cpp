#include<iostream>
using namespace std;
const char arr[]={'N','L','S','O'};

int main(){
	int n;
	cin>>n;
	while(n){
		char c;
		int pos=0;
		for(int x=0;x<n;x++){
			cin>>c;
			if(c=='D'){
				pos++;
			}else{
				pos--;
			}
		}
		cout<<arr[((pos%4)+4)%4]<<endl;
		cin>>n;
	}
	return 0;
}
