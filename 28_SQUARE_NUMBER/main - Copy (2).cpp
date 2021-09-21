#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <afxres.h>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;
#include <map>
#include <vector>
#include <string>
//#include <Crispen.h>
// #include <sqlite3.h/sqlite3>
#include <utility>
#define TRUE "true"
#define FALSE "false"
#include <time.h>
#include <stdio.h>
#include<stdlib.h>
#include <optional>
#include <cstdlib>
#include <vector>
#define PI 3.1429
#include <iostream>
using namespace std;
#include <string>
#include <iomanip>
/*
WRITE A FUNCTION THAT PRINTS A SQUARE OF AN INTEGER WITHOUT USING 
MULTPLICATION, DIVISION, OR EXPONENTIAL OPERARTORS

*/
int squared(int n){
  // n can be either positive or (-ve)
  int answer=0;
  for(int i=0; i<abs(n);i++){
      answer+= abs(n);
  }
  return answer;
}
int main(){
    cout<<"Enter an integer: ";
    int n;
    cin>>n;
    cout<<n<<" to the power of 2 is: "<<squared(n)<<endl;
  return 0;
}


