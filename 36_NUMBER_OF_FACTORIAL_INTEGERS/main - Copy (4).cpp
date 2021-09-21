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
Given an integer N. The task is to find the digits that appear in its factorial
where factorial is defined as factorial(n) = 1*2*3*....N and factorial 0 = 1.

Input: 5
Output: 3
*/

int Factorial(int N){
    if(N == 0 || N == 1)
        return 1;
    return N * Factorial(N - 1);
}
int CountDigits(int n_factorial){
    int count = 0;
    while(n_factorial > 0){
        count ++;
        n_factorial /= 10;
    }
    return count;
}
int main(){
    cout<<"Enteran integer: ";
    int num;
    cin>>num;
    cout<<num <<"! is equal to [" <<Factorial(abs(num)) <<"] which contains: ";
    cout<<CountDigits(Factorial(abs(num)))<<" digit(s)";
	return 0;
}
// @ competetive coding STRAWBERRY

























