#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
unsigned int arr[2];

int main(){
	while(cin>>arr[0]>>arr[1]){
		string t[3]={"","",""};
		arr[0]=abs(arr[0]);
		arr[1]=abs(arr[1]);
		for(int x=0;x<2;x++){
			while(arr[x]>=2){
				t[x]+=char((arr[x]%2)+'0');
				arr[x]/=2;
			}
			t[x]+=char(arr[x]+'0');
		}
		while(t[0].length()!=t[1].length()){
			if(t[0].length()>t[1].length()){
				t[1]+='0';
			}else{
				t[0]+='0';
			}
		}
		long long tam=t[0].length();
		for(int x=0;x<2;x++){
			reverse(t[x].begin(),t[x].end());
		}
		for(long long x=0;x<tam;x++){
			long long a,b;
			a=t[0][x]-'0';
			b=t[1][x]-'0';
			t[2]+=(a-b)*(a-b)+'0';
		}
		reverse(t[2].begin(),t[2].end());
		unsigned int sal=0,z=1;
		for(long long x=0;x<tam;x++){
			if(t[2][x]=='1'){
				sal+=z;
			}
			z*=2;
		}
		cout<<sal<<endl;
	}
	
}
