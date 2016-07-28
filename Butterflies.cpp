#include<iostream>
using namespace std;
int arr[201][201];
bool enc[1001];

int main(){
	for(int x=0;x<1001;x++){
		enc[x]=0;
	}
	int n;
	cin>>n;
	for(int x=0;x<n;x++){
		for(int j=0;j<n;j++){
			cin>>arr[x][j];
		}
	}
	for(int x=0;x<n*2;x++){
		int a,b;
		cin>>a>>b;
		a--;
		b--;
		enc[arr[a][b]]=1;
	}
	int sum=0;
	for(int x=0;x<1001;x++){
		if(enc[x]){
			sum++;
		}
	}
	cout<<sum;
}
