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
7. Write a C Program to find the position of given number in array
*/

int position(int arr[], int n, int element){
    int pos =-1;
    for(int i =0;i<n;i++){
        if(arr[i]==element){
            pos =i;
            break; // first pos of an element
        }else{
            continue;
        }
    }
    return pos;
}
int main(){
	int arr[]={2,1,3,4,6,8,0,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int element;
    cout<<"Enter an element: ";
    cin>>element;
    if(position(arr,n,element)<0){
        cout<<element<<" doesn't exist!!"<<endl;
    }else{
        cout<<element<<" Boom exist!!"<<endl;
        cout<<"position: "<<position(arr,n,element)+1
        <<" index: "<<position(arr,n,element)<<endl;
    }
    return 0;
}
// @ competetive coding STRAWBERRY







