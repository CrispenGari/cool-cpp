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
Given a boolean 2D array, where each row is soted. Find the row with
the maximum number of 1(s).
EXAMPLE
0 1 0 1
1 1 1 0
0 0 0 1
ANSWER
->Row #1
*/
int main(){
  bool arr[3][4] ={
    {0, 1, 0 ,1},
    {1, 1, 1, 0},
    {0, 0, 0, 1}
  };
  int row_with_more_1s=0, temp_variable =0;
  for(size_t i=0;i<sizeof(arr)/sizeof(arr[0]); i++){
    int count_1s =0;
    for(size_t j=0;j<sizeof(arr[0])/sizeof(arr[0][0]);++j ){
       if(arr[i][j]){
         count_1s++;
       }else{
         count_1s=count_1s;
       }
       
    }cout<<count_1s<<endl;
    // cheching a row with more ones
    if(count_1s>temp_variable){
       row_with_more_1s =i;
    }else{
      row_with_more_1s = row_with_more_1s;
    }
    temp_variable = count_1s;
  }
  cout<<"The row with more 1s is row number: "<<row_with_more_1s<<endl;
  return  0;
}

