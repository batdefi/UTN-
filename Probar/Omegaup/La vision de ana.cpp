#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	for(int x=1;x<=n;x++){
		int s,d,k=0;
		cin>>s>>d;
		float z,sum;
		cin>>z;
		sum=z;
		for(int j=1;j<d;j++){
			cin>>z;
			if(z<sum){
				sum=z;
				k=j;
			}
		}
		cout<<"Case "<<x<<": comprar en dia "<<k+1<<endl;
	}
}
