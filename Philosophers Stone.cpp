#include<iostream>
using namespace std;
int arr[101][101];

int main(){
	int t;
	cin>>t;
	while(t){
		int n,m;
		cin>>n>>m;
		for(int x=0;x<n;x++){
			for(int j=0;j<m;j++){
				cin>>arr[x][j];
			}
		}
		for(int i=1;i<n;i++){
			for(int j=0;j<m;j++){
				if(j>0 && j<m-1){
					arr[i][j]+=max(arr[i-1][j-1],max(arr[i-1][j],arr[i-1][j+1]));	
				}else if(j>0){
					arr[i][j]+=max(arr[i-1][j-1],arr[i-1][j]);
				}else{
					arr[i][j]+=max(arr[i-1][j],arr[i-1][j+1]);
				}
			}
		}
		int max=arr[n-1][0];
		for(int x=1;x<m;x++){
			if(arr[n-1][x]>max){
				max=arr[n-1][x];
			}
		}
		cout<<max<<"\n";
		t--;
	}
}
