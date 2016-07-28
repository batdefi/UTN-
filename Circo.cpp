#include<iostream>
using namespace std;
int arr[50];

int main(){
	int n,s;
	cin>>n;
	cout<<"$"; cin>>s;
	for(int x=0;x<n;x++){
		cin>>arr[x];
		arr[x]-=s;
	}
	int max=0,inicio=-1,fin=-1;
	for(int x=0;x<n;x++){
		for(int i=x;i<n;i++){
			int r=0;
			for(int j=x;j<=i;j++){
				r+=arr[j];
			}
			if(r>max){
				max=r;
				inicio=x;
				fin=i;
			}	
		}
	}
	cout<<++inicio<<endl<<++fin<<endl;
	cout<<max;
}
