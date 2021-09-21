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
Write a C++ Program to print even and odd number from an array
*/
void odd_Even(int n, int arr[]){
    for(int i=1;i<n+1;i++){
        (arr[i] %2==0) && cout<<arr[i]<<" -> EVEN!\n"|| cout<<arr[i]<<"-> ODD!\n";
    }
}
int main(){
    int arr[] = {2, 3, 5,8,9,0,7,8,1,28,-9,5,67,15,267,8910};
    int n = sizeof(arr)/ sizeof(arr[1]);
    odd_Even(n, arr);
    return 0;
}
// @ competetive coding STRAWBERRY







