#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int i1,i2,f1,f2;
	cin>>i1>>i2>>f1>>f2;
	cout<<max(abs(i1-i2),abs(f1-f2));
	return 0;
}
