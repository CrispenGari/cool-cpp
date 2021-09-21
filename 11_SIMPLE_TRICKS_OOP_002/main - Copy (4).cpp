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
using namespace std;
#include <map>
#include <string>

/*
SIMPLE LITTLE C++ TRICKS
*/

/* OOP
PRINTING TEXT FROM THE USER WITH NOTHING IN THE MAIN FUNCTION
*/
class printMe{
  private:
  //
  public:
  printMe(){
    int crush_age, my_age;
    cout<<"Enter your age: "<<endl;
    cin>>my_age;
    cout<<"Enter your crush's age: "<<endl;
    cin>>crush_age;
    (((my_age/2)+7 >=crush_age)&& cout<<"This is your type"<<endl || cout<<"This is not your type"<<endl)
    ;
  }
  protected:
  //
}obj;

int main(){}
