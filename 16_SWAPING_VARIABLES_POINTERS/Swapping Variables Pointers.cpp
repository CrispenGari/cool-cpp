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
Write a C++ language program to swap two numbers using pointers and
function.
*/
/* Without using a temporary variable*/
void swap2(int *a, int *b){
    *a = *a-*b;
    *b = *a+*b;
    *a=  *b-*a;
}
/*By using a temporary variable*/
void swap1(int *a, int *b){
    int temp = *a;
    *a =*b;
    *b = temp;
}
int main(){
     cout<<"Enter two integers a and b respectively: ";
     int a,b;
     cin>>a>>b;
     cout<<"Before swapp"<<endl;
     cout<<"a = "<<a<<", b = "<<b<<endl;
     cout<<"After swapp"<<endl;
     swap2(&a,&b);
     cout<<"a = "<<a<<", b = "<<b<<endl;
     return 0;
}
// @ competetive coding STRAWBERRY







