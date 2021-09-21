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
Qn 15: Cristy writes fabulous quotes on a paper everyday. But she has a problem
that she writes every alphabet is 2 places left from the current alphabet she
think to write. If she want to write c she write a instead. You have to convert
it and read the original thougths of Cristy.

Input: bm, ufyr wms jmtc
Output: do. what you love
*/
char Convetor(char chr){
    if (chr == ' ')
        return chr; // return space when it is a space
    else if (chr == 'y')
        return 'a';
    else if(chr == 'z')
        return 'b';
    else
        return chr += 2;
}
int main(){
    cout<<"Enter Cristy's thoughts: "<<endl;
    string cristy_thougths;
    getline(cin, cristy_thougths);

    cout<<"Cristy is thinking about: '";
    for(int i=0; i<cristy_thougths.size(); i++){
        cout<<Convetor(cristy_thougths.at(i));
    }
    cout<<"'"<<endl;
	return 0;
}
// @ competetive coding STRAWBERRY

























