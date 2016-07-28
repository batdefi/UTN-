#include<iostream>
using namespace std;
#define MAX 50
char arr[MAX][MAX];
int n,m;
bool convexa=true,l1,l2;

int main(){
	cin>>n>>m;
	for(int x=0;x<n;x++){
		for(int j=0;j<m;j++){
			cin>>arr[x][j];
		}
	}
	for(int i1=0;i1<n;i1++){
		for(int j1=0;j1<m;j1++){
			for(int i2=0;i2<n;i2++){
				if(arr[i1][j1]=='B'){
					continue;
				}
				l1=true;
				l2=true;
				for(int j2=0;j2<m;j2++){
					if(arr[i2][j2]=='B'){
						continue;
					}
					l1=l2=true;
					for(int c=min(j1,j2);c<=max(j1,j2);c++){
						if(arr[i1][c]=='B') l1=false;
					}
					for(int i=min(i1,i2);i<=max(i1,i2);i++){
						if(arr[i][j2]=='B') l1=false;
					}
					for(int c=min(i1,i2);c<=max(i1,i2);c++){
						if(arr[c][j1]=='B') l2=false;
					}
					for(int i=min(j1,j2);i<=max(j1,j2);i++){
						if(arr[i2][i]=='B') l2=false;
					}
					if(!l1 && !l2){
						convexa=false;
						break;
					}
				}
			}
		}
	}
	if(convexa){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
}
