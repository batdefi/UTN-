#include<iostream>
using namespace std;
int main(){
	int n;
	while(cin>>n){
		int arr[70][70];
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(i+j==n-1){
					arr[i][j]=2;
				}else if(i==j){
					arr[i][j]=1;
				}else{
					arr[i][j]=3;
				}
				cout<<arr[i][j];
			}
			cout<<endl;
		}
	}
	return 0;
}
