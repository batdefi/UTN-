#include <bits/stdc++.h>

using namespace std;
int t,n;
int a[4]={2,3,4,5};
int b[4]={0,0,0,0};
int main(){

	cin >> t;
	for(int i=0;i<t;i++){
		cin >> n;
		for(int h=0;h<4;h++){
			if (n%a[h]==0)
			b[h]+=1;
		}
	}
	for(int i=0;i<4;i++)
	cout << b[i] << " Multiplo(s) de "<< a[i] << endl;	
					
}
