#include<iostream>
using namespace std;

int main(){
	long long n,m,a;
	cin>>n>>m>>a;
	long long x,z;
	x=n/a;
	if(n%a!=0){
		x++;
	}
	z=m/a;
	if(m%a!=0){
		z++;
	}
	if(x!=0 && z!=0){
		cout<<x*z;
	}else{
		cout<<max(x,z);
	}
	return 0;
}
