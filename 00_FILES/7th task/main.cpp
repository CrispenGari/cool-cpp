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
/*7. Write a function in C++ to count and display the number of lines not starting with
   Alphabet "A" present in a text file "STORY.TXT". Example 
   if the file "STORY.TXT" contains the following lines,
   The rose is red.
   A girl is playing there.
   There is a playing ground
   An aeroplane is in the sky
   Numbers are not allowed in the password

   The function should display  the output as 3.
 */
/*int start_A(ifstream *fileobject){
        int number_of_lines =0;
        string str;
        while(getline(*fileobject, str)){
            if(str[0]=='A'){
              number_of_lines++;
            }
        }
        return number_of_lines;
}*/
/*Or it can be written as follows*/
int start_A(ifstream *fileobject){
        int number_of_lines =0;
        string str;
        while(getline(*fileobject, str)){
            if(int(str[0])==65){
              number_of_lines++;
            }
        }
        return number_of_lines;
}
int main(){
    string path("story.txt"), str;
    ifstream fileread(path);
    try{
      if(fileread.is_open()){
        cout<<"The number of lines that start's with 'A' are: ("<<start_A(&fileread)<<")  line(s)"<<endl;
      }else{
        throw -1;
      }
    }catch(int i){
      cout<<"Error: ("<<i<<") can not read to a closed file"<<endl;
    }
    fileread.close();
  return 0;
}

