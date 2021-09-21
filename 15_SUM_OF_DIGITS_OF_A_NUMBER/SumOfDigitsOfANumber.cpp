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
4. Write a C Program to find sum of digits in a given number
*/
// first of all we have to find the digits of a number
int sumOfDigits(int num){
    int digit;
    int sums=0;
    while(num>0){
        digit = num%10;
        num /=10;
        sums+=digit;
    }
    return sums;
}

int main(){
	int n;
    cout<<"Enter an integer: ";
    cin>>n;
    cout<<"The sum of digits of a number ["<<n<<"] is "<<sumOfDigits(n)<<endl;
    return 0;
}
// @ competetive coding STRAWBERRY







