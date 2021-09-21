#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <afxres.h>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;

//#include <Crispen.h>
// #include <sqlite3.h/sqlite3>
#include <iostream>
#include <cstdlib>
#include <fstream>
/*
 Add Without Integers Plus: Write a function that adds two numbers. 
 You should not use+ or any arithmetic operators.
*/

int add(int a, int b){
   while(b!=0){
     int sum = a^b; // add withoud carrying
     int carry = (a&b)<<1; // carrying without adding
     a= sum;
     b= carry;
   }
   return a;
}
// the function can be writen as follows :
int add(int a, int b){
   if(b==0){
     return a; // any number plus 0 = that number simple!
   }
   int sum = a ^ b;// adding without carrying;
   int carry = (a & b)<<1; // carry, without adding
   return add(sum, carry);
}
int main(){
   cout<<"Enter two integers seperated by a space: ";
   int num1, num2;
   cin>>num1; cin>>num2;
   cout<<"The sum of "<<num1<<" and "<< num2<<" is: "<<add(num1, num2)<<endl;
  return 0;
}

