#include<iostream>
#include<fstream>
#include<string>
#include<cstring>
using namespace std;
main(){
	char uname[20];
	int cnum [11];
	char pin [4];
	float Balance;
	string fileName;
	
	cout<<"Enter Username and add .txt : ";
	cin >> uname;
	
	ofstream writer(uname,19);
	writer<<"Number"<<endl;
	writer<<"Pin"<<endl;
	
}
