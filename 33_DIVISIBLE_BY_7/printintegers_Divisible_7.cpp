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
14. Write a C Program to print all numbers between 1 to n divisible by 7
*/

void divisibleBy7(int n){
    for(int i=1;i<n+1;i++){
        (i%7==0) && cout<<i<<endl || cout<<"\r";
    }
}
int main(){
    cout<<"Enter the maximum number: ";
    int n;
    cin>>n;
    divisibleBy7(n);
    return 0;
}
// @ competetive coding STRAWBERRY







