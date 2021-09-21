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
2. Write a C++ Program to sort an array in ascending order
3. Write a C Program to sort an array in descending order
*/
// a function that swapp variables
void swap_function(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
// a function that sort an array
void swappedArray(int arr[], int n_){
    for(int i =0;i<n_-1; i++){
        int smaller =i;
        for(int j=i+1;j<n_; j++)
            if(arr[smaller]> arr[j])
                smaller =j;
        if(i!=smaller)
            swap_function(arr[i], arr[smaller]);
    }
}
// a function that prints the members of an array
void printArray(int arr[], int n_){
    cout<<"{";
    for(int i=0;i<n_;i++){
        if(i==n_-1){
             cout<< arr[i];
        }else{
              cout<< arr[i]<<", ";
        }
    }
    cout<<"}"<<endl;
}

int main(){
	int my_array[] = {9,-9,5,4,19,0,-12,67,23,100,134,8};
	int n_ = sizeof(my_array)/sizeof(my_array[0]);
    cout<<"The original array is: "<<endl;
    printArray(my_array, n_);
    cout<<endl;
    cout<<"The sorted array is: "<<endl;
    swappedArray(my_array, n_);
    printArray(my_array, n_);
    return 0;
}
// @ competetive coding STRAWBERRY







