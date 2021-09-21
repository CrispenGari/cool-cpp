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
/*1. Write a C++ program to write numbers from 1 to 100 in a data file
    NOTES.TXT*/
int main(){
    string path("notes.txt");
    ofstream filewrite(path);
    try{
      if(filewrite.is_open()){
          int i=0;
        while(1){
            i++;
            if(i==101){
               break;
            }
            filewrite<<i<<"\n";
        }
        cout<<"A file note.txt was created!!"<<endl;
      }else{
        throw -1;
      }
    }catch(int i){
      cout<<"Error: ("<<i<<") can not write to a closed file"<<endl;
    }
    filewrite.close();
  return 0;
}

