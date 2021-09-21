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
#include <fstream>
/*
Triple Step: A child is running up a staircase with n steps and can hop either 1 step, 2 steps, or 3
steps at a time. Implement a method to count how many possible ways the child can run up the
stairs.
*/
int count_Ways(int n){
  if(n<0){
    return 0;
  }else if(n==0){
    return 1;
  }else{
    return count_Ways(n-1) +count_Ways(n-2) + count_Ways(n-3);
  }
}
int main(){
  cout<<"Enter number of stairs: ";
  int n;
  cin>>n;
  cout<<"There are "<< count_Ways(n)<<"  possible ways the child can run up thestairs."<<endl;
  return 0;
}

