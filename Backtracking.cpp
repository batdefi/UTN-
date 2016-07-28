#include <iostream>
#include <string>

using namespace std;

void backtracking(string &s, int i) {
/*  
  for(int i=0;i<s.size()-1;i++){
	for(int j=i;j<s.size()-1;j++){
	  bool valida=false;
	  for(int h=i; h<=j;h++){
	    if (s[h] != '1'){
		valida=true;
		}
	if(valida){
	  for(int p=i; p<=j;p++){
		cout << s[p];
		}
	}
	*/
  if (i == s.size()) {
    cout << s << endl;
  } else {
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
}
