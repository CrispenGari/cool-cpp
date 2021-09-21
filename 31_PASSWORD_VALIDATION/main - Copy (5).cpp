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

QN4: You have to validate your password based on the following
rules and print "Strong Password" if all the conditions are 
true otherwise print "Weak Password"
Rules:
1. Your password must be at least 8 characters long.
2. It should contain at least one uppercase and one lowercase letter
3. it should have at least one number
4. it should contain at least one special characters such as
 #, *, & etc.
*/

bool recomendedPassword(string password){
	int countUpper=0, countLower=0, countNumber=0, 
	countSpecialChar=0;
	// using ASCII to check each condition
	for(int i=0;i<password.size();i++){
		if(char(password[i])>=65 &&char(password[i])<=65+26){
			// count uppercases in the password
			countUpper ++;
		}else if(char(password[i])>=97 &&char(password[i])<=97+26){
			// count lowercases in the password
			countLower++;
		}else if(char(password[i])>=48 &&char(password[i])<=57){
			// counting numbers
			countNumber++;
		}else{
			// count as special character in the pass
			countSpecialChar ++;
		}
	}
	if(password.length()>=8 && countLower>=1
	 && countNumber>=1 && countUpper>=1
	  &&countSpecialChar>=1){
		return true;
	}else{
		return false;
	}
}
int main(){
     cout<<"Your password must met the following rules"<<endl;
     cout<<"1. Your password must be at least 8 characters long."<<endl;
     cout<<"2. It should contain at least one uppercase and one lowercase letter"<<endl;
     cout<<"3. it should have at least one number"<<endl;
     cout<<"4. it should contain at least one special characters such as"<<endl;
     string password;
     cout<<"Enter your password: \t";
     cin>>password;

     if(!recomendedPassword(password)){
     	cout<<"Weak Password"<<endl;
     }else{
     	cout<<"Strong Password"<<endl;
     }

    return 0;
}
// @ competetive coding STRAWBERRY







