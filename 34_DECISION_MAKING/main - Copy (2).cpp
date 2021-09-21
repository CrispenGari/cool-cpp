#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <afxres.h>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;
#include <map>
#include <vector>
#include <string>
//#include <Crispen.h>
// #include <sqlite3.h/sqlite3>
#include <utility>
#define TRUE "true"
#define FALSE "false"
#include <time.h>
#include <stdio.h>
#include<stdlib.h>
#include <optional>
#include <cstdlib>
#include <vector>
#define PI 3.1429
#include <iostream>
using namespace std;
#include <string>
#include <iomanip>
#include  <iterator>



/*
You run an online shopping company. Your company sells 10 products in a month.
Given the number of customers you got that month, did you make profit? It cost you 2,000 to build 
a product and you are selling them form 3000. You also pay 1000 each month for insurance. Detemine
wether or not you made a profit based on how of the ten how many of 10 products you were able 
to sell that month and output 'Profit', 'Loss', 'Break Even';
Input: 5
Output: Loss
*/
int main(){
	string decisions[3]  		 = {"Profit", "Loss", "Break Even"};
	int n_customers;
	cout<<"Enter number of customers: ";
	cin>>n_customers;
	int cost_of_production 		 = 2000;
	double price_of_each_product = 3000;
	double cost_of_insurence	 = 1000;
	int products_per_month		 = 10;
	int total_cost				 = cost_of_production * products_per_month + cost_of_insurence;
	int total_amount			 = price_of_each_product * n_customers;

	if((total_amount - total_cost)<0){
		cout<<decisions[1];
	}else if((total_amount - total_cost)>0){
		cout<<decisions[0];
	}else{
		cout<<decisions[2];
	}
	return 0;
}
// @ competetive coding STRAWBERRY







