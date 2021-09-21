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

QN3: Jonh is a programmer he wants to collect the infomation
of an image such as name and type of the image (.jpg, .png,
.jpeg, .svg, etc) Can you help jonh to find out the name and the 
type of the image? The value must be entered by the user for
example home.png
*/

void imageDetemination(string image){
	string delimeter(".");
	size_t pos =0;
	int i =pos;
	cout<<"Image name\t"<<"Extension"<<endl;
	string imageInfo[2];
	while(true){
		pos = image.find(delimeter);
		string token = image.substr(0, pos);
		imageInfo[i] = token;
		image.erase(0, pos+delimeter.length());
		if(i==1){
			break;
		}
		i++;
	}
	// printing the infomation about an image:
	for(string i: imageInfo){
		cout<<i<<" \t";
	}
	cout<<endl;
}
int main(){
    imageDetemination("homepage.jpeg");
    return 0;
}
// @ competetive coding STRAWBERRY







