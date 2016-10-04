#include<iostream>
#include<conio.h>
#include<iomanip>
#include<cmath>
#include<string.h>
#include<windows.h>
#include<fstream>
using namespace std;
int ans;
char uname[20];
char format[4]={'.','t','x','t'};
void checker(); //function for the user
void bmenu(); //function for the menu
void title(); //function for the title
void withdraw(); //function for withdraw
void deposit(); //function for deposit
void balance(); //function for balance
void transfer(); //function for transfer amount
void finalwrite(); //Save new Balance

struct Profile{ //file handling
	struct{
	char uname; //user name
	}Name;
	struct {
	char pin[4];
	}	Cdetails;
	float Balance;
};




Profile prof;

void newLine();

main(){
	cout<<fixed<<setprecision(2);
	checker(); //this will directly go to function checker
	do{
	system("cls"); //this will prompt the user
	bmenu(); //directly go to function menu
	system("cls"); //this will prompt the user
	cout<<endl;
	cout<<"Another Transaction?\nPress [1] to make another transaction\nPress [2] to exit\n";
	cin>>ans; // this will make another transaction
	}while(ans==1);
	finalwrite();
	system("pause"); //this will prompt the user
	return 0;
}











void checker(){ //code for the user
	int i,b;
	
	char inpin[4];
	char filename[40];
	
	int leng(0),u;
	title();
	cout<<"\n\n\n";
	cout<<"Welcome"<<endl;
	
	cout<<"Enter User Name: ";
	cin>>uname; //this will get every character with an specific size
	
	
	
	 ifstream info(strcat(uname,format));
	 int *bal;
	 if(info.is_open()){
	 	for(u=0;u<4;u++){
	 	info>>prof.Cdetails.pin[u];
	 	
		 }
		info>>prof.Balance;
	 }
	 else{
	 	cout<<"Invalid Username / Username does not exist\n";
	 	cin.ignore();
	 	exit(0);
	 }
	 
	 
	cout<<"Enter Your Pin: "; 
	for(i=0;i<4;i++){ //the output of the pin is asterisk
		inpin[i]=getch();
		cout<<"*";
		Beep(700,300);
	}
	cout<<endl;
		if(strcmp(prof.Cdetails.pin,inpin)==0){ //this will compare the inputed pin to another conformation pin 
		cout<<"Pin Successfully Entered..."<<endl;
		
	}
	else{
		cout<<"Pin does not match..."<<endl;
		cin.ignore();
		exit(0);
	}

	
	system("pause"); //this will prompt the user
	
}


void deposit(){ //code for deposit
	float depo;
	system("cls"); //this erase the previous output
	title();
	cout<<"Enter Amount to Deposit: ";
	cin>>depo;
	cout<<endl<<endl<<"Deposit Money"<<endl;
	cin.ignore(); //depositing money
	cout<<"Previous Balance: "<<"P"<<prof.Balance<<endl;
	prof.Balance+=depo;
	cout<<"New Balance: "<<"P"<<prof.Balance<<endl;
	
	
	system("pause"); //this will prompt the user
}

void balance(){ //code for balance account
	system("cls"); //this erase the previous output
	title();
	cout<<"Your Balance is: "<<prof.Balance<<endl;
	system("Pause"); //this will prompt the user
}

void transfer(){ //code for transfering money
	float trans; 
	char text[20]; 
	system("cls"); //this will erase previous the output
	title(); //this will display title
	cout<<"Enter Amount to Transfer: "; 
	cin>>trans;
	cin.ignore(); 
	cout<<"Enter Recipient: ";
	cin.getline(text,19); //this will input the name of the user
	
	cout<<endl<<endl<<"Press any key for confirmation"<<endl;
	system("pause"); //this will prompt the user
	if(trans<prof.Balance) //this will compare the transfered amount to your balance
	{
	cout<<"Previous Balance: "<<"P"<<prof.Balance<<endl;
	prof.Balance-=trans;
	cout<<"New Balance: "<<"P"<<prof.Balance<<endl;
	cout<<"P"<<trans<<" Successfully transferred to: "<<text<<endl;
}
else
{
	system("cls"); //this erase the previous output
	cout << "Amount suceeded preceeding balance !" << endl; 
}
	system("pause"); //this will prompt the user
}

void withdraw(){
	system("cls"); //this erase the previous output
	title(); //this will display title
	float with;
	cout<<"Enter Amount to Withdraw: ";
	cin>>with;
	if(with<prof.Balance) //this will compare the inputed withdraw to your balance
	{
	cout<<endl<<endl<<"To claim the money"<<endl;
	system("pause");
	for(int b=0;b<=5;b++){ //this will create beep sound
		Beep(900,100);	
	}
	cout<<"Previous Balance: "<<"P"<<prof.Balance<<endl;
	prof.Balance-=with;
	cout<<"New Balance: "<<"P"<<prof.Balance<<endl;
	}
	else 
	{
		cout << "invalid amount !"<<endl;
		
		}	
	system("pause"); //this will prompt the user
	
}

void bmenu(){ //code for menu
	int choice;
	title(); //display title
	cout<<endl<<endl;
	cout<<"Select Transaction: "<<endl;
	cout<<setw(12)<<"[1]:Withdraw Money" << setw(50)<<"[2]:Deposit Money\n";
	cout<<setw(12)<<"[3]:Balance Inquiry"<< setw(50)<<"[4]:Transfer Money\n";
	cout<<setw(40)<<"[5]:Exit\n";
	cout<<setw(50)<<"********************************************************************************"<<endl;
	cin>>choice;
	
		switch(choice){ //this will determine the choice
			case 1:{
				withdraw(); //will go to withdraw function
				break;
			}
			case 2:{
				deposit(); //will go to deposit function
				break;
			}
			case 3:{
				balance(); //will go to balance function
				break;
			}
			case 4:{
				transfer(); //will go to transfer function
				break;
			}
			case 5:{ 
				system("cls"); //this erase the previous output
				cout<<"Thank you for using this machine...\n";
				system("pause"); //this will prompt the user
				exit(0); //will exit the program
				finalwrite();
				break;
			}
			default:{ //for invalid
				system("cls"); //this erase the previous output
				cout<<"Invalid Choice\n";
				system("cls"); //will exit the program
				break;
			}
		}
	}
	


void title(){ //will display title
	cout<<setw(50)<<"********************************************************************************"<<endl;
	cout<<setw(50)<<"SAFE DREAMS BANK"<<endl;
	cout<<setw(57)<<"Make your dream in the reality"<<endl;
	cout<<setw(50)<<"********************************************************************************"<<endl;
}

void finalwrite(){
	int u;
	ofstream update(uname);
	for(u=0;u<4;u++){
	 	update<<prof.Cdetails.pin[u]<<endl;
	 	
		 }
		update<<prof.Balance;
		 update.close();
}
/* 
CATM (Card-less Automatic Teller? Machine)
Account Storage (File Handling)***
Menu Function(Checker fxn)
Main Menu (bmenu fxn prioritize switch)
In Choice Functions (dep, with, trans,)
Pangwakas Afterspeech
*/
