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
 10. Write a program that input an integer in the main function and passes this 
 value to the user defined function. The function should calculate the sum of the
 and the last digit of integer
*/
int sum_of_fist_and_last(int *n){
  int sum =0;
  int last_num = *n%10, first_num;
  sum= last_num;
   first_num=*n;
  while(first_num>=10){
    first_num = first_num/10;
  }
  sum+=first_num;
  return sum;
}
int main(){
    int num;
    cout<<"Enter an integer that is positive: \t";
    cin>>num;
    int integer = abs(num);
    cout<<"The sum of the first and the last digit of integer: "<<integer<<" is: "<<sum_of_fist_and_last(&integer);
    cout<<endl;
  return 0;
}

