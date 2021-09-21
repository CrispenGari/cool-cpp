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
4. Write a C Program to print square of all numbers 1 to 20 and print sum squares
*/
// first of all we have to find the digits of a number
void sumOfSquares(){
    int sumofSq =0;
    cout<<"Squares of numbers"<<endl;
    for(int i=1; i<20+1; i++){
        cout<<i<<" -> "<<i*i<<endl;
        sumofSq += i*i;
    }
    cout<<endl;
    cout<<"The sum of squares is: "<<sumofSq<<endl;

}
int main(){
	sumOfSquares();
    return 0;
}
// @ competetive coding STRAWBERRY







