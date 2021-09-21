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
/*3. Write a user defined function in C++ to read the content from a text file 
   OUT.TXT, count and display the number of alphabets present in it.

   HINT: To reference an object [passing it as a parameter to a function] we have to use pointers.
 */

/*void count_Alphabe(ifstream *file_object){
    string str;
    // alphabets doesn't have spaces 
    int n_spaces=0, j;
    getline(*file_object, str);
    for(int i=0; i<str.size();i++){
      j= str[i];
      // checking if integer j is a space
      if(isspace(j)){
        n_spaces++;
      }
    }

    cout<<"The number of alphabets in a string '"<<str <<"' are: "<<str.length()-n_spaces<<" character(s)";
}*/
/* OR Can be done as follows */
void count_Alphabe(ifstream *file_object){
    string str;
    // alphabets doesn't have spaces 
    int n_characters=0, j;
    getline(*file_object, str);
    for(int i=0; i<str.size();i++){
      j= str[i];
      // checking if integer j is a space
      if(isspace(j)){
        continue;
      }else{
        n_characters++;
      }
    }
    cout<<"The number of alphabets in a string '"<<str <<"' are: "<<n_characters<<" character(s)";
}
int main(){
    string path("out.txt");
    ifstream fileread(path);
    try{
      if(fileread.is_open()){
        count_Alphabe(&fileread);
      }else{
        throw -1;
      }
    }catch(int i){
      cout<<"Error: ("<<i<<") can not read to a closed file"<<endl;
    }
    fileread.close();
  return 0;
}

