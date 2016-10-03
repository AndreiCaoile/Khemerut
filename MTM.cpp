#include<iostream>
#include<conio.h>
#include<iomanip>
#include<cmath>
#include<string.h>
using namespace std;
int ans;

void checker();
void bmenu();
void title();
void withdraw();
void deposit();
void balance();
void transfer();

struct Profile{
	struct{
	char fname; // First Name
	char lname;// Last   "
	}Name;
	struct {
	char cnum[11];
	char pin[4];
	}	Cdetails;
	float Balance;
};



Profile prof;

void newLine();

main(){
	cout<<fixed<<setprecision(2);
	do{
	system("cls");
	bmenu();
	system("cls");
	cout<<endl;
	cout<<"Another Transaction?\nPress [1] to make another transaction\nPress [2] to exit\n";
	cin>>ans;
	}while(ans==1);
	system("pause");
	return 0;
}














void deposit(){
	float depo;
	system("cls");
	title();
	cout<<"Enter Amount to Deposit: ";
	cin>>depo;
	cout<<endl<<endl<<"Deposit Money"<<endl;
	cin.ignore();
	cout<<"Previous Balance: "<<prof.Balance<<endl;
	prof.Balance+=depo;
	cout<<"New Balance: "<<prof.Balance<<endl;
	
	
	system("pause");
}

void balance(){
	system("cls");
	title();
	cout<<prof.Cdetails.cnum
	cout<<"Your Balance is: "<prof.Balance;
	system("Pause");
}

void transfer(){
	float trans;
	char text[20];
	system("cls");
	title();
	cout<<"Enter Amount to Transfer: ";
	cin>>trans;
	cout<<"Enter Recipient: ";
	cin.getline(text,19);
	
	
	cout<<endl<<endl<<"Press any key for confirmation"<<endl;
	cin.ignore();
	cout<<"Previous Balance: "<<prof.Balance<<endl;
	prof.Balance-=trans;
	cout<<"New Balance: "<<prof.Balance<<endl;
	cout<<trans<<"Successfully transferred to: "<<text;
	system("pause");
	system("pause");
}

void withdraw(){
	system("cls");
	title();
	float with;
	cout<<"Enter Amount to Withdraw: ";
	cin>>with;
	cout<<endl<<endl<<"Press any key to get the money"<<endl;
	cin.ignore();
	cout<<"Previous Balance: "<<prof.Balance<<endl;
	prof.Balance-=with;
	cout<<"New Balance: "<<prof.Balance<<endl;
	
	system("pause");
	
}

void bmenu(){
	int choice;
	title();
	cout<<endl<<endl;
	cout<<"Select Transaction: "<<endl;
	cout<<setw(12)<<"[1]:Withdraw Money" << setw(50)<<"[2]:Deposit Money\n";
	cout<<setw(12)<<"[3]:Balance Inquiry"<< setw(50)<<"[4]:Transfer Money\n";
	cout<<setw(40)<<"[5]:Exit\n";
	cout<<setw(50)<<"********************************************************************************"<<endl;
	cin>>choice;
	
		switch(choice){
			case 1:{
				withdraw();
				break;
			}
			case 2:{
				deposit();
				break;
			}
			case 3:{
				balance();
				break;
			}
			case 4:{
				transfer();
				break;
			}
			case 5:{
				system("cls");
				cout<<"Thank you for using this machine...";
				system("pause");
				exit(0);
				break;
			}
			default:{
				system("cls");
				cout<<"Invalid Choice";
				system("pause");
				system("cls");
				return bmenu();
				break;
			}
		}
	}
	


void title(){
	cout<<setw(50)<<"********************************************************************************"<<endl;
	cout<<setw(50)<<"SAFE DREAMS BANK"<<endl;
	cout<<setw(57)<<"Make your dream in the reality"<<endl;
	cout<<setw(50)<<"********************************************************************************"<<endl;
}
