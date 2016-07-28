#include<iostream>
using namespace std;
const int arr[6]={2,5,10,20,50,100};

int main(){
	int c,p;
	cin>>c>>p;
	bool puede;
	while(c!=0 || p!=0){
		puede=false;
		p-=c;
		if(p<=150){
			for(int x=0;x<6;x++){
				for(int j=x+1;j<6;j++){
					if(arr[x]+arr[j]==p){
						puede=true;
						break;
					}
				}
			}	
		}
		if(puede){
			cout<<"possible\n";
		}else{
			cout<<"impossible\n";
		}
		cin>>c>>p;
	}
	return 0;
}
