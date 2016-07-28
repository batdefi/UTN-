#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	while(n){
		n--;
		bool resp[4]={0,0,0,0};
		int f2048=false;
		const string direcciones[]={"DOWN","LEFT","RIGHT","UP"};
		int arr[4][4];
					//  A Ab D I
		const int cambio_l[]={1,0,0,-1};
			const int cambio_c[]={0,-1,1,0};
		for(int x=0;x<4;x++){
			for(int j=0;j<4;j++){
				cin>>arr[x][j];
				if(arr[x][j]==2048){
					f2048=true;
				}
			}
		}
		for(int d=0;d<4;d++){
			for(int i=0;i<4;i++){
				for(int j=0;j<4;j++){
					if(((i+cambio_l[d]>=0 && i+cambio_l[d]<4) &&
					j+cambio_c[d]>=0 && j+cambio_c[d]<4 && arr[i][j]!=0) &&
					(arr[i+cambio_l[d]][j+cambio_c[d]]==0 || arr[i+cambio_l[d]][j+cambio_c[d]]==arr[i][j])){
						resp[d]=true;
					}
				}
			}
		}
		bool r=true,s=false;
		for(int d=0;d<4;d++){
			if(!f2048 && resp[d]){
				if(s){
				cout<<" ";
				}
				s=true;
				cout<<direcciones[d];
				r=false;
			}
		}
		if(r){
			cout<<"NONE";
		}
		cout<<endl;
	}
	return 0;
}
