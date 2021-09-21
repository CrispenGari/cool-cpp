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
Write a C++ Program to read character from keyboard and display message whether
character is alphabet , digit or special symbol
*/
bool isAlphabet(char ch){
    // using American Standard Code of Infomation Interchange(ASCII)approach
    if((ch>=65 && ch<=65+26) || (ch>=97 && ch<=97+26)){
        return true;
    }
    return false;
}
int main(){
    char ch;
    cout<<"Enter a character to check if it is an Alphabet: ";
    cin>>ch;
    !isAlphabet(ch) && cout<<ch<<" :is not a letter of Alphabet\n"||
    cout<<ch<<" :is a letter of Alphabet\n";
    return 0;
}
// @ competetive coding STRAWBERRY







