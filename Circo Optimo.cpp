#include<iostream>
using namespace std;
int arr[51],c[51];

int main(){
	int n,c,res;
	while(cin>>n>>c){
		int elem;
		cin>>elem;
		elem-=c;
		int res=max(0,elem),act=elem,peor=min(0,elem);
		
		for(int i=1;i<n;i++){
			cin>>elem;
			act+=elem-c;
			res=max(res,act-peor);
			peor=min(peor,act);
		}
		cout<<res<<endl;
	}
	return 0;
}
