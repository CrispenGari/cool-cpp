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
void semicolon();
int main(){
  semicolon();
  return 0;
}
/*
FUNCTION THAT PRINT A SEMICOLON WITH OUT WRITTING A SEMICOLON
*/
#define SEMICOLON 59
void semicolon(){
  cout<<char(SEMICOLON)<<endl;
}
