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
WRITE A FUNCTION THAT RAISE A NUMBER TO THE POWER OF 3 WITHOUT USING 
MULTIPLICATION, DIVISION AND EXPONANTIAL FUNCTIONS.

*/
int cubed(int n){
  // n can be either positive or (-ve)
  int answer=0;
  int temp_answer =0;
  for(int i=0; i<abs(n);i++){
      temp_answer+= abs(n);
  }
  // a negative number cubed is negative else positive
  if(n<0){
    temp_answer = 0- temp_answer; // without using a * sign
      for(int i=0; i<abs(n);i++){
            answer+= temp_answer;
      }
  }else{
      for(int i=0; i<abs(n);i++){
            answer+= temp_answer;
       }
  }
  return answer;
}
int main(){
    cout<<"Enter an integer: ";
    int n;
    cin>>n;
    cout<<n<<" to the power of 3 is: "<<cubed(n)<<endl;
  return 0;
}


