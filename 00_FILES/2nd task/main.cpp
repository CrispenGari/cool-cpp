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
/*2. Write a C++ program which initializes a string variable to the content
   "Time is the greater teacher but unfotunately it kills all its pupils. Berlioz" 
   and output the string to the the disk file OUT.TXT you have to include all
   the header files required.*/
int main(){
    string path("out.txt");
    ofstream filewrite(path);
    string string_variable ="Time is the greater teacher but unfotunately it kills all its pupils. Berlioz";
    try{
      if(filewrite.is_open()){
        filewrite<<string_variable<<"\n";
        cout<<"A file out.txt was created!!"<<endl;
      }else{
        throw -1;
      }
    }catch(int i){
      cout<<"Error: ("<<i<<") can not write to a closed file"<<endl;
    }
    filewrite.close();
  return 0;
}

