#include <iostream>
#include <string>

using namespace std;

int tot;

void backtracking(string &s, int i) {
//	cout<<s<<endl;
	if (i == s.length()) {
		bool cond=true;
  		for(int x=0;x<s.length()-2;x++){
  			if(s[x]==s[x+1] && s[x]==s[x+2]){
  				cond=false;
  				break;
			}
		}
		if(cond){
			tot++;
		}
    }else{
    if (s[i] == '*') {
       s[i] = '0';
       backtracking(s, i+1);
       s[i] = '1';
       backtracking(s, i+1);
       s[i] = '*';
    } else {
       backtracking(s, i+1);
    }       
  }
}

int main(){
  string s;
  cin >> s;
  backtracking(s, 0);
  cout<<tot;
}
