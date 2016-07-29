#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>

using namespace std;
unsigned int pn,sn,rf;
string pnb,snb,sf;
char res[32];
string Binario(int n)
{
    string r;
    while(n!=0) {
	r=(n%2==0 ?"0":"1")+r;
	 n/=2;
	}
    return r;
}
int b2d(int n) {
    int salida = 0;
    for(int i=0; n > 0; i++) {
        if(n % 10 == 1) {
            salida += pow(2, i);
        }
        n /= 10;
    }
    return salida;
}

int main(){
	while (cin >> pn >> sn){
		sf="";
		pnb = Binario (pn);
		snb = Binario (sn);
		if (pnb.size() < snb.size()){
			for (int i = 0; i < (snb.size()-pnb.size());i++){
			pnb = "0"+pnb;
			}
		}
		else if (snb.size() < pnb.size()){
			for (int i = 0; i < (pnb.size()-snb.size());i++){
			snb = "0"+snb;
			}
			}
		for (int h=pnb.size()-1; h>=0;h--){
				res[h]=(pnb[h]+snb[h])-'0';
				if (res[h]=='2'){
				res[h]= '0';
				}
			}
			
		for (int h = 0; h < pnb.size(); h++) {
			 sf += res[h];
		}
		unsigned int p=0,rf=0;
		for (int h=sf.size()-1; h>=0;h--){
				rf += (sf[h]-'0')*(1 << (sf.size()-1-h));
				/*
				cout << sf << endl;
				cout << rf << ' '<< (int)sf[h]-'0' << ' ' << sf.size()-1-h << ' '<< h<<endl;
				*/
			} 
			cout << rf << endl;
		
	}
}			
			

		
	
