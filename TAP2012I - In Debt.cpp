#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	while(n!=-1){
		int k=0;
		long sum=0;
		for(int x=0;x<n;x++){
			int j;
			cin>>j;
			sum+=j;
			if(sum%100==0){
				sum=0;
				k++;
			}
		}
		cout<<k<<endl;
		cin>>n;
	}
	return 0;
}
