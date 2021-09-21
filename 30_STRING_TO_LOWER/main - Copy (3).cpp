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

USING ASCII APROACH TO CONVERT A GIVEN STRING TO
LOWER CASES
*/
string toLower(string &str){
	// a string is an array of characters
	for(int i=0;i<=str.size();i++){
		if(str[i]>=65 && str[i]<=65+26){
			str[i] +=32;
		}else{
            str[i] = str[i];
		}
	}
	return str;
}
int main(){
    string str;
    cout<<"ENTER A STRING: "<<endl;
    getline(cin, str);
    cout<<str<<" to lower case is: "<<toLower(str)<<endl;
    return 0;
}
// @ competetive coding STRAWBERRY







