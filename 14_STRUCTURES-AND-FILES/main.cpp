/*
STRUCTURES AND FILES

CREATE A NESTED STRUCTURE LIBRARY WHICH LOOKS EXACTLY THE SAME AS SHOWN BELLOW:

                        LIBRARY
                           |
         -------------------------------------------------
         |                                               |
      BOOKS                                           LIBRARIAN
         |                                               |
-  -----------------                            -------------------------
   |      |        |                            |          |            |
TITLE    ID      AUTHOUR                     NAME        SURNAME      TITLE

CREATE A FILE CALLED library
ADD VALUES INT A library FILE FROM A STRUCTURE
*/
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <afxres.h>
#include <fstream>
#include <sstream>
using namespace std;
//#include <Crispen.h>
//#include "sqlite/sqlite3.h"
#include <vector>

string book_titles[]={"Python for proffesions","Introduction to OOP with Java","Intoduction to hacking","C for beginners"};
string authors[] ={"Strawberry team","Crispen Gari","Mark Hennry","Markusom Redfox"};
// ARRAY OF MEMBERS
struct Books{
   string book_title;
   string author;
   int id;
}books[4];
struct Librarian{
   string name, surname, title;
};
struct Library{
   Librarian librarian;
   Books bookS;
};
int main(){
   string file_path ="C:\\Users\\garid\\Documents\\CRISPEN _PERSONAL _BOOKS\\library.txt";
   // insterting values in the structures
   //STRUCTURE LIBRARIAN
    Librarian librarian1;
    librarian1.name="Zig-Zag Magic";
    librarian1.title ="Miss: ";
    librarian1.surname ="Gromatong";

    ///STRUCTURE BOOKS
    for(int i=0;i<4;i++){
        books[i].book_title =book_titles[i];
        books[i].author =authors[i];
        books[i].id =i+1;
    }
    ofstream fileWrite(file_path);
    try{
        if(fileWrite.is_open()){
                fileWrite<<"LIBRARY \n";
                fileWrite<<"BOOKS IN THE LIBRARY\n";
                Library libry;
                for(int i=0;i<4;i++){
                   libry.bookS = books[i];
                    fileWrite<<"Book_Title: "<<libry.bookS.book_title<<"|| Book_Author: "<<libry.bookS.author<<"|| Book_Id: "<<libry.bookS.id<<"\n";
                }
                fileWrite<<"\nTHE LIBRARY'S LIBRARIAN \n";
                Library libry2;
                libry2.librarian = librarian1;
                fileWrite<<"THE LIBRARY'S Name: "<<libry2.librarian.name<<"\n";
                fileWrite<<"THE LIBRARY'S Surname: "<<libry2.librarian.surname<<"\n";
                fileWrite<<"THE LIBRARY'S Title: "<<libry2.librarian.title<<"\n";
        }else{
            throw -8;
        }
    }catch(...){
        cout<<"Something went wrong during reading a file!"<<endl;
    }
    fileWrite.close();
   return 0;
}
