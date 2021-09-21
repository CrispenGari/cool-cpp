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
#include  <iterator>

/*
Write a C++ language program to display the largest element in the
matrix.
*/
int largestElem(int matrix[3][4], int n1, int n2){
    int largest_ = matrix[0][0];
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(matrix[i][j]>largest_){
                largest_ =matrix[i][j];
            }else{
               largest_ = largest_;
            }
        }
    }
    return largest_;
}
int main(){
     int myMatrix[3][4] ={
        {2,5,8,0},
        {-5,18,90,5},
        {45,67,8,9}
     };
     int n1 = sizeof(myMatrix)/ sizeof(myMatrix[0]);
     int n2 =  sizeof(myMatrix[0])/ sizeof(myMatrix[0][0]);
     cout<<"The largest element int the matrix is: "
     <<largestElem(myMatrix,n1,n2)<<endl;
     return 0;
}
// @ competetive coding STRAWBERRY







