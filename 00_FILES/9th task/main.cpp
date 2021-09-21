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
Assuming that a text file named FIRST.TXT contains some text written into it, write a function
    named vowelwords() that will read the file FIRST.TXT and create a new file named SECOND.TXT,
    to contain only those words from the file FIRST.TXT which start with the lowercase vowel that 
    is ('a', 'e', 'i', 'o', 'u') For example if the  file FIRST.TXT contains 
    'Carry umbrella and overcoat when it rains' Then the file SECOND.TXT shall contains 
    umbrella and overcoat it.
*/
void vowelwords(ifstream *fileobject, ofstream *fileobject2){
     string str;
      string vowels("aeiou");
        while(*fileobject>>str){
          for(int i=0;i<vowels.size();i++){
            if(str[0]==vowels[i])
            *fileobject2<<str<<" ";
          }
        }
        cout<<"The second.txt file was created!!"<<endl;
}
int main(){
    string path("first.txt"), str, path2("second.txt");
    ifstream fileread(path);
    ofstream filewrite(path2);
    try{
      if(fileread.is_open() && filewrite.is_open()){
        vowelwords(&fileread, &filewrite);
        
      }else{
        throw -1;
      }
    }catch(int i){
      cout<<"Error: ("<<i<<") can not read/write to a closed file"<<endl;
    }
    fileread.close();
    filewrite.close();
  return 0;
}

