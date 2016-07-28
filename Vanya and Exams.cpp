#include<iostream>
#include<algorithm>
using namespace std;
struct notas{
	long long n1,n2;
};

bool acompare(notas lhs,notas rhs){
	return lhs.n2<rhs.n2;
}

int main(){
	long long n,r,avg,tot=0;
	cin>>n>>r>>avg;
	notas z[n];
	for(long long x=0;x<n;x++){
		cin>>z[x].n1;
		cin>>z[x].n2;
		tot+=z[x].n1;
	}
	sort(z,z+n,acompare);
	long long prom=(n*avg)-tot;
	if(prom>0){
		long long k=0;
		long long s=n*avg;
		for(long long x=0;s>tot;x++){
			long long c=s-((r-z[x].n1)+tot);
			if(c>0){
				k+=z[x].n2*(r-z[x].n1);
				tot+=r-z[x].n1;
			}else{
				k+=z[x].n2*(s-tot);
				tot=s;
			}	
		}
		cout<<k;	
	}else{
		cout<<"0";
	}
	return 0;
}
