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
5. Write a C Program to check if given number 
is present in an array or not
*/

bool exist(int arr[], int n, int element){
    for(int i =0;i<n;i++){
        if(arr[i]==element){
            return true;
        }else{
            continue;
        }
    }
    return false;
}
int main(){
	int arr[]={2,1,3,4,6,8,0,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int element;
    cout<<"Enter an element: ";
    cin>>element;
    if(!exist(arr,n,element)){
        cout<<element<<" doesn't exist!!"<<endl;
    }else{
        cout<<element<<" Boom exist!!"<<endl;
    }
    return 0;
}
// @ competetive coding STRAWBERRY







