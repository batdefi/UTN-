#include <iostream>
#include <string>

using namespace std;

int backtracking(string &s, string &p) {
 if(!valida(s))
   return 0;
 if(s.size()==p.size())
   return 1;
 if(p[s.size()]=='*'){
   int total=0;
   st='0';
   total+=backtracking(s,p);
   s[s.size()-1]='1';
   total+=bt(s,p);
   s.resize(s.size()-1);
   return total;


int main(){
  string s;
  cin >> s;
  backtracking(s, 0);
}
