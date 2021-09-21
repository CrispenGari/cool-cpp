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
Reversing Strings in C++
*/
string ReverseWord(string str){
    reverse(str.begin(), str.end());
	return str;
}

/* Qn 18
You have two friends who are speaking strange language. The language is the same expect that
you take the first of each word and put it on the end, then you add 'ay' to the end of that
word for example 'hello', = 'ellohay'
Take the sentence in english and turn it into the same sentence as the strange languge
Input: hello everyone this is TDC
Output: ohellay eeveryonay sthiay siay CTDay.
*/
string StrangeLanguage(string str){
	string delimeter		= " ";
	string strange_string	= "";
	int count_spaces 		= 0;
	for(size_t i=0; i<str.length(); i++){
		if(isspace(char(str[i]))){
			count_spaces 	+= 1;
		}else{
			count_spaces 	+= 0;
		}
	}
	for(int i=0; i<count_spaces + 1; i++){
		int del_pos 		= str.find(delimeter);
		string token		= str.substr(0, del_pos);
		char last_character	= token.at(token.size() -1);
		string temp 		= token.erase(token.length()-1, 1);
		strange_string	   += last_character + temp + "ay"+ delimeter;
		str.erase(0, del_pos + delimeter.size());
	}
	return strange_string;
}
int main(){
	cout<<"Enter the sentence in Eng: "<<endl;
	string eng_string;
	getline(cin, eng_string);
	cout<<StrangeLanguage(eng_string);
    return 0;
}
// @ competetive coding STRAWBERRY







