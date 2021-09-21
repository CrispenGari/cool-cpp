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
/*5. Write a function to count number of words in a text file named OUT.TXT
 */
int wordsCount(ifstream *fileobject){
        int number_of_words =0;
        string str;
        while(getline(*fileobject, str)){
    
           for(int i=0;i<str.length()-1;i++){
            if(str[i]==' '){
              number_of_words++;
            }
           }
           number_of_words+=1;
        }
        return number_of_words;
}
/*Or the function can be writen as follows*/
/*int wordsCount(ifstream *fileobject){
        int number_of_words =0;
        string str;
        while(*fileobject>>str){
           number_of_words+=1;
        }
        return number_of_words;
}*/
int main(){
    string path("out.txt"), str;
    ifstream fileread(path);
    try{
      if(fileread.is_open()){
        cout<<"The the file output.txt contains: ("<<wordsCount(&fileread)<<")  word(s)"<<endl;
      }else{
        throw -1;
      }
    }catch(int i){
      cout<<"Error: ("<<i<<") can not read to a closed file"<<endl;
    }
    fileread.close();
  return 0;
}

