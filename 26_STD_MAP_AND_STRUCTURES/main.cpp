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
struct Books{
    int id;
    double price;
}book[4];
int main(){
    // inserting values into a structure Books using a loop
    for(size_t i =0; i<sizeof(book)/sizeof(book[0]); i++){
      cout<<"Enter book id: \t";
      string id;
      string price;
      cin>>id;
      cout<<"Enter book price: \t";
      cin>>price;
      stringstream(id)>>book[i].id;
      stringstream(price)>>book[i].price;
    }
    /// creating a multimap
    multimap<int, double> books;
    // inserting values in a multimap
    for(size_t i =0; i<sizeof(book)/sizeof(book[0]); i++){
      books.emplace(book[i].id, book[i].price);
    }
    // creating an iterator that will print the keys corresponding to their books prices
    auto it = books.begin();
    cout<<"The id of the books corresponding to their price"<<endl;
    for(size_t i =0; i<sizeof(book)/sizeof(book[0]); i++){
      cout<<it->first<<"\t->\t"<<it->second<<endl;
    }
  return 0;
}

