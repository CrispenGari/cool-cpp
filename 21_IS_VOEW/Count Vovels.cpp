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
Write a C Program to read a string and count number of vovels in it
*/
int countVovels(string str){
    // using American Standard Code of Infomation Interchange(ASCII)approach
    int n_ =0;
    for(char ch: str){
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'|| ch=='u'
        ||ch=='A'||ch=='E'||ch=='I'||ch=='O'|| ch=='U' ){
            n_++;
        }
    }
    return n_;
}
int main(){
    string str;
    cout<<"Enter a string: ";
    getline(cin, str);
    cout<<"The string ['"<<str<<"'] contains "<<countVovels(str)<<" vovel(s)\n";
    return 0;
}
// @ competetive coding STRAWBERRY







