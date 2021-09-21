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
COUNTING DIGITS IN AN INTEGER
Write a function that checks how many digits does a certain 
integer have.
*/
int countDigits(int *num){
  int count =0;
  while(*num>0){
      count++;
      *num /=10;
  }
  return count;
}
int main(){
  cout<<"Enter an integer digit: ";
  int n;
  cin>>n;
  cout<<"The number ("<<n<<") has "<<countDigits(&n)<<" digit(s)";
  return 0;
}

// checking how  many digits does an integer have
