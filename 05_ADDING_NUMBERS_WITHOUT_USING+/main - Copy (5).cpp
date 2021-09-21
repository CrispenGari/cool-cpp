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
int sum2(int a, int b);
int main(){
  cout<<sum2(9,8);
  return 0;
}
/*
A FUNCTION THAT ADDS TWO NUMBERS WITHOUT USING THE (+) OPERATOR
*/
int sum2(int a, int b){
  return -(-a-b);
}
