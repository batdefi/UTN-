#include<iostream>
using namespace std;
char l[]={'A','B','C','D','E'};

int main(){
	int n;
	cin>>n;
	while(n){
		for(int z=0;z<n;z++){
				char c;
			int valido=0;
			for(int x=0;x<5;x++){
				int j;
				cin>>j;
				if(j<=127){
					valido++;
					c=l[x];
				}
			}
			if(valido==1){
				cout<<c<<endl;
			}else{
				cout<<'*'<<endl;
			}	
		}
		cin>>n;
	}
	return 0;
}
