#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	switch(n){
		case 3:
		case 4:
		case 5:cout<<"PRIMAVERA";
				break;
		case 6:
		case 7:
		case 8:cout<<"VERANO";
			   break;
		case 9:
		case 10:
		case 11:cout<<"OTONIO";
			   break;
		case 1:
		case 2:
		case 12:cout<<"INVIERNO";
				break;
		default:cout<<"ERROR";
	}
	return 0;
}
