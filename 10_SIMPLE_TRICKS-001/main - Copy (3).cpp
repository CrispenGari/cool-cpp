#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <afxres.h>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;

//#include <Crispen.h>
// #include <sqlite3.h/sqlite3>
#include <iostream>
#include <cstdlib>
using namespace std;
#include <map>
#include <string>

/*
SIMPLE LITTLE C++ TRICKS
*/
void odd_Even(int num);
int main(){
  cout<<"Enter an integer digit: ";
  int n;
  cin>>n;
  odd_Even(n);
  return 0;
}

/*
A FUNCTION THAT CHECKS IF A NUMBER IS ODD OR EVEN WITHOUT
USING ANY CONDITIONAL STATEMENT.
*/

void odd_Even(int num){
((num%2==0)&&cout<<num<<" is an even number"<<endl || cout<<
num<<" is an odd number"<<endl);
}
