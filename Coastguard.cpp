#include <iostream>
#include <cmath>

using namespace std;

float d,vf,vg,res,tf,tg;

int main(){
	while (cin >> d >> vf >> vg){
		res = sqrt(pow(d,2)+pow(12,2));
		tf= 12/vf;
		tg= res/vg;
		
		if (tg <= tf){
		cout << 'S' << endl;
		}else if (tg > tf){
		cout << 'N' << endl;
		}
	}
}
		
