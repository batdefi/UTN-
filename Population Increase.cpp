#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	while(n){
		int k=0;
		long long p1,p2;
		double g1,g2;
		cin>>p1>>p2>>g1>>g2;
		while(p1<=p2 && k<101){
			p1+=p1*g1/100;
			p2+=p2*g2/100;
			k++;
		}
		if(k<101){
			cout<<k<<" anos.\n";
		}else{
			cout<<"Mais de 1 seculo.\n";
		}
		n--;
	}
}
