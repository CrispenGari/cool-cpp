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
13. Write a C Program to calculate factorial of a given number using recursion
*/

int factorial(int element){
    if(element==0 || element ==1){
        return 1; // 0! and 1! =1
    }
    return element*factorial(element-1);
}
int main(){
    int element;
    cout<<"Enter an integer: ";
    cin>>element;
    cout<<element<<"! is equal to: "<<factorial(element)<<endl;
    return 0;
}
// @ competetive coding STRAWBERRY







