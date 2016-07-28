#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	long long n;
	while(cin>>n){
		string s1[n];
		string s2[n];
		cin.ignore();
		for(int x=0;x<n;x++){
			getline(cin,s1[x]);
		}
		for(int x=0;x<n;x++){
			getline(cin,s2[x]);
		}
		sort(s1,s1+n);
		sort(s2,s2+n);
		long long k=0;
		int x=1,z=1;
		while(z<n && x<n){
			int j=1;
			while(s1[z]==s1[z-1] && z<n){
				j++;
				z++;
			}
			int i=1;
			while(s2[x]==s2[x-1] && x<n){
				i++;
				x++;
			}
			if(s1[z-1]==s2[x-1]){
				k+=min(i,j);
				z++;
				x++;
			}else if(s1[z-1]>s2[x-1]){
				x++;
			}else{
				z++;
			}
		}
		cout<<k<<endl;	
	}
	return 0;
}
