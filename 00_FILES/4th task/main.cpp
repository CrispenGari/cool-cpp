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
/*4. Write a program that will count the number of blank present in a text file OUT.TXT
 */

/*int main(){
    string path("out.txt"), str;
    ifstream fileread(path);
    try{
      if(fileread.is_open()){
        int black_spaces =0, j;
        while(getline(fileread, str)){
           for(int i=0;i<str.length();i++){
            j = str[i];
            if(isspace(j)){
              black_spaces++;
            }
         }
        }
        cout<<"The bank spaces are "<<black_spaces;
      }else{
        throw -1;
      }
    }catch(int i){
      cout<<"Error: ("<<i<<") can not write to a closed file"<<endl;
    }
    fileread.close();
  return 0;
}*/
/*OR can be written as follows*/

int main(){
    string path("out.txt"), str;
    ifstream fileread(path);
    try{
      if(fileread.is_open()){
        int black_spaces =0;
        while(getline(fileread, str)){
           for(int i=0;i<str.length();i++){
            if(isspace(int(str[i]))){
              black_spaces++;
            }
         }
        }
        cout<<"The bank spaces are "<<black_spaces;
      }else{
        throw -1;
      }
    }catch(int i){
      cout<<"Error: ("<<i<<") can not read to a closed file"<<endl;
    }
    fileread.close();
  return 0;
}

