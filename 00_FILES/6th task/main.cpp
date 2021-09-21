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
/*6. Write a function in C++ to print the count of word 'the'  as an independent
   word in a text file  STORY.TXT for example if the content in the file STORY.TXT is 
   "There was a monkey in the zoo. The monkey was very naughty." Then the output of
   the program shoud be 2.
 */
int the_Count(ifstream *fileobject){
        int number_of_words =0;
        string str, converted;
        /*We have to convert every word we get to lowercase to work with it easy*/
        while(*fileobject>>str){
          transform(str.begin(), str.end(),str.begin(), ::tolower);
          if(str=="the"){
            number_of_words++;
          }
        }
        return number_of_words;
}
int main(){
    string path("story.txt"), str;
    ifstream fileread(path);
    try{
      if(fileread.is_open()){
        cout<<"The number of apearence of the word 'the' in a file STORY.TXT are: "<<the_Count(&fileread)<<" apearance(s)"<<endl;
      }else{
        throw -1;
      }
    }catch(int i){
      cout<<"Error: ("<<i<<") can not read to a closed file"<<endl;
    }
    fileread.close();
  return 0;
}

