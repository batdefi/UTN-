#include<iostream>
using namespace std;
int arr[1000000],c[1000000];

int main(){
	int n;
	cin>>n;
	int elem;
	cin>>elem;
	int res=max(0,elem),act=elem,peor=min(0,elem);
	for(int i=1;i<n;i++){
		cin>>elem;
		act+=elem;
		res=max(res,act-peor);
		peor=min(peor,act);
	}
	cout<<res<<endl;
	return 0;
}
