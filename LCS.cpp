#include<iostream>
using namespace std;
int x[200],y[200];

int main(){
	int n,m;
	cin>>n>>m;
	for(int j=0;j<n;j++){
		cin>>x[j];
	}
	for(int j=0;j<m;j++){
		cin>>y[j];
	}
	int c[200];
	for(int j=0;j<200;j++){
		c[j]=0;
	}
	for(int i=0,i<m;i++){
		for(int j=0;j<n;j++){
			if(x[i]==y[j]){
				c[i][j]=c[i-1][j-1]+1;
			}else if (c[i-1][j]>c[i][j-1]){
				c[i][j]=c[i-1][j];
			}else{
				c[i][j]=c[i][j-1];
			}
		}
	}
	return c[m][n];
}
