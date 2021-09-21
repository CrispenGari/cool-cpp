
/*Construct a structure of the following nature. Construct a structure
person. This structure must have the following elements in it.

                                     PERSON
                                       |
          ---------------------------------------------------------------------------------
          |                                    |                                           |
   PERSON IDENTIFICATION            PERSON'S OCCUPATION                             PERSON'S FAVOURATES
           |                                   |                                           |
   --------------------             -----------------------                      --------------------------
   |     |     |      |             |          |           |                     |           |            |
  NAME  SURNAME YOB   ID         PROFFESION  SALARY   POSITION_AT_WORK        COLOR       SPORT         FOOD

  HINT: USE NESTED STRUCTURES
  a) modify the structure so that you can loop and add values of 5 people in it.
  b) display all the values on the screen in any way.
  c) write a function that will print all the values of each person using pointers

*/#include <iostream>
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

//GLOBAL VARIABLES
const int maximum =5;
//array of values
string names[maximum]={"Jonh","Peter","Shadrack","Musa","Colonel"};
string surnames[maximum]={"Doe","Mario","Scario","Imprial","Socketo"};
string profesions[maximum] ={"Web Dev","Software Dev","Teacher","Finance officer","Cleck"};
string position_at_works[maximum] ={"General Manager","Worker","Manager","Instructor","Advisor"};
string colors[maximum] ={"red","purple","gray","blue","white"};
string sports[maximum] ={"Foot Ball","Rugby","NetBall","Volley","Tennis"};
string foods[maximum] ={"Bread","Pizza","Burger","Buns","Champs Chicken"};
// INNER STRUCTURES
//structure of person Id
struct person_Identification{
   string name, surname;
   int year_of_birth, ID;
}person_id[maximum];
// structure of person Ocupation
struct person_Ocupation{
   string proffesion, position_at_work;
   double salary;
}person_occ[maximum];
// structure of person's favourites
struct person_favorites{
  string color,food,sport;
}person_fav[maximum];
// MAIN STRUCTURE
struct person{
   person_Identification personID;
   person_Ocupation personOcc;
  person_favorites personFav;
};
void printPerson(person p, int index){
    cout<<"THE INFOMATION ABOUT: PERSON "<<index+1<<endl;
     cout<<"PERSON IDENTIFICATION"<<endl;
        p.personID = person_id[index];
        cout<<"PERSON ID:\t" <<p.personID.ID<<endl;
        cout<<"PERSON NAME:\t" <<p.personID.name<<endl;
        cout<<"PERSON SURNAME:\t"<<p.personID.surname<<endl;
        cout<<"PERSON YEAR OF BIRTH:\t"<<p.personID.year_of_birth<<endl<<endl;
    cout<<"PERSON OCCUPATION"<<endl;
            p.personOcc= person_occ[index];
        cout<<"PERSON'S POSITION AT WORK: "<<p.personOcc.position_at_work<<endl;
        cout<<"PERSON'S SALARY:\t"<<p.personOcc.salary<<endl;
        cout<<"PERSON'S PROFESSION:\t"<<p.personOcc.proffesion<<endl<<endl;
       cout<<"PERSON'S FAVOURITES"<<endl;
        p.personFav = person_fav[index];
        cout<<"PERSON'S FAVOURITE COLOR: "<<p.personFav.color<<endl;
        cout<<"PERSON'S FAVOURITE FOOD: "<<p.personFav.food<<endl;
        cout<<"PERSON'S FAVOURITE SPORT: "<<p.personFav.sport<<endl<<endl;
        cout<<"-----------------------------------------------------"<<endl<<endl;
}
// number c
void printPointers(int index, person *p){
       cout<<"THE INFOMATION ABOUT: PERSON "<<index+1<<endl;
     cout<<"PERSON IDENTIFICATION"<<endl;
        p->personID = person_id[index];
        cout<<"PERSON ID:\t" <<p->personID.ID<<endl;
        cout<<"PERSON NAME:\t" <<p->personID.name<<endl;
        cout<<"PERSON SURNAME:\t"<<p->personID.surname<<endl;
        cout<<"PERSON YEAR OF BIRTH:\t"<<p->personID.year_of_birth<<endl<<endl;
    cout<<"PERSON OCCUPATION"<<endl;
            p->personOcc= person_occ[index];
        cout<<"PERSON'S POSITION AT WORK: "<<p->personOcc.position_at_work<<endl;
        cout<<"PERSON'S SALARY:\t"<<p->personOcc.salary<<endl;
        cout<<"PERSON'S PROFESSION:\t"<<p->personOcc.proffesion<<endl<<endl;
       cout<<"PERSON'S FAVOURITES"<<endl;
        p->personFav = person_fav[index];
        cout<<"PERSON'S FAVOURITE COLOR: "<<p->personFav.color<<endl;
        cout<<"PERSON'S FAVOURITE FOOD: "<<p->personFav.food<<endl;
        cout<<"PERSON'S FAVOURITE SPORT: "<<p->personFav.sport<<endl<<endl;
        cout<<"-----------------------------------------------------"<<endl<<endl;
}
int main(){
    /// setting the values of people's favourites
    for(int i=0;i<sizeof(person_fav)/sizeof(person_fav[0]);i++){
        person_fav[i].color=colors[i];
        person_fav[i].food=foods[i];
        person_fav[i].sport=sports[i];
    }
       /// setting the values of person's identifications
     for(int i=0;i<sizeof(person_id)/sizeof(person_id[0]);i++){
        person_id[i].ID =i+1;
        person_id[i].name =names[i];
        person_id[i].surname =surnames[i];
        person_id[i].year_of_birth =i+1990;
     }
     // setting person's occupation.
     for(int i=0;i<sizeof(person_occ)/sizeof(person_occ[0]);i++){
        person_occ[i].position_at_work = position_at_works[i];
        person_occ[i].proffesion = profesions[i];
        person_occ[i].salary =i+1*(rand()%1000);
     }
     person personObject;
     //PRINTING ALL THE VALUES WITHOUT USING POINTERS NUMBER B
      for(int i=0;i<sizeof(person_fav)/sizeof(person_fav[0]);i++){
           printPerson(personObject,i);
     }
     /// PRINTING POINTER TO AN ABJECT ATTEMPTING NUMBER C
     for(int i=0;i<sizeof(person_fav)/sizeof(person_fav[0]);i++){
           printPointers(i,&personObject);
     }
  return 0;
}

