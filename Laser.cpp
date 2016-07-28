#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int a,b;
	while(cin>>a>>b){
		if(a==0 && b==0){
			break;
		}else{
			int ant=a,k=0;
			for(int x=0;x<b;x++){
				int s;
				cin>>s;
				k+=abs(s-ant);
				ant=s;	
			}
			k+=abs(ant-a);
			cout<<k/2<<endl;	
		}
	}
	return 0;
}
