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
8. Assuming that a textfile named FIRST.TXT contains some written text into it, write 
   a function named copyupper(), that will reads the file FIRST.TXT and creates a new file
   named SECOND.TXT containing all words from the file FIRST.TXT in uppercase.
*/
void copyupper(ifstream *fileobject, ofstream *fileobject2){
     string str;
        while(getline(*fileobject, str)){
          transform(str.begin(), str.end(), str.begin(), ::toupper);
          *fileobject2<<str<<'\n';
        }
        cout<<"The second.txt file was created!!"<<endl;
}
int main(){
    string path("first.txt"), str, path2("second.txt");
    ifstream fileread(path);
    ofstream filewrite(path2);
    try{
      if(fileread.is_open() && filewrite.is_open()){
        copyupper(&fileread, &filewrite);
        
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

