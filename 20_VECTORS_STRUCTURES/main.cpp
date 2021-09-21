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
#include <vector>
#include <string>
/*
VECTORS AND STRUCTURES

*/
struct Person{
    int age;double weight;string name;
    string surname;
}person[5];

/// creating vectors of ages, weight, names and surnames
vector<int> ages = {22, 20, 21, 21,27};
vector<double> weights ={78.7, 69.4,88.9,100,79.8};
vector<string> names = {"Grossary", "Maxwell", "Clocktick", "Rebbalion", "Stalion"};
vector<string> surnames = {"Mark", "Zoran", "Clasic", "Mark", "Peter"};
void printSruct();
int main(){
   /// inserting names into our structur person
   int i=0;
   for(string nam: names){
    person[i].name = nam;
    i++;
   }
   /// inserting surnames into our structure person
   int s=0;
    for(string element: surnames){
        person[s].surname = element;
        s++;
    }
   int k=0;
   for(int i: ages){
    person[k].age =i;
    k++;
   }
   size_t j=0;
   for(double w: weights){
    person[j].weight = w;
    j++;
   }
   printSruct();
return 0;
}
void printSruct(){
    for(int i =0; i<sizeof(person)/sizeof(person[0]);i++){
       cout<<"("<<person[i].name<<", " <<person[i].surname<<", " <<person[i].age<<", " <<person[i].weight<<")"<<endl;
   }
}



