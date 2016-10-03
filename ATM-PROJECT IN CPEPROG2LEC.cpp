#include<iostream>
using namespace std;

struct new_identity{
	int pin;
	char name[100];
};
struct identity{
	int pin;
	int choose;
	int choose2;
	int choose3;
	int amount;
	int amount2;
	int amount3;
	int deposit;
	int deposit2;
	int deposit3;
	
};
int main()
{	//a code
	//b choose transaction
	int a1 = 100000;
	int a2 = 203450;
	int a3 = 346535;

	int x,i,cancel,trans;
	char yn;
	identity atm;
	cout<<"----WELCOME----"<<endl;
	cout<<"Please enter your pin: ";
	cin>>atm.pin;
	if((atm.pin)==1290)//code
	{
		account:cout<<"Welcome Caoile"<<endl;
		cout<<"1.	Balance Inquiry"<<endl;
		cout<<"2.	Withdraw Cash"<<endl;
		cout<<"3.	Deposit Cash"<<endl;
		cout<<"4.	Quit"<<endl;
		cout<<"Enter transaction: ";
		cin>>atm.choose;
		switch(atm.choose)
		{
			if(atm.choose=='1','2','3','4')
			{
				case 1:
				{
					cout<<endl;
					cout<<"Balance Check"<<endl;
					cout<<"Your balance is: "<<a1<<endl;
					cout<<"Press 1 to go back ";
					cin>>cancel;
					if(cancel==1)
					{
						goto account;//pupunta siya sa welcome caoile 
					}else(cancel!=1);
					{			
						cout<<"Invalid ";
						cout<<"Try Again [Y]";
						cin>>yn;
						if(yn==1);
						{
							goto account;//pupunta sya WELCOME ACCOUNT
						}
					}
					break;
			}
			case 2:
				{
					cout<<endl;
					withdraw:cout<<"Withdraw Cash"<<endl;
					cout<<endl;
					cout<<"Enter your amount: ";
					cin>>atm.amount;
					if(atm.amount>a1) 
					{
						cout<<"Insufficient Balance";
						cout<<"Enter Again: ";
						goto withdraw;
					}
					else if(atm.amount<a1)
					{
						a1=a1-atm.amount;
						cout<<"Please collect the cash\n";
						cout<<"Your current balance is "<<a1;
					}else
					{
						cout<<"Try Again ";
						goto withdraw;
					}
						cout<<endl;
						cout<<"Press 1 to go back ";
						cin>>cancel;
						if(cancel==1)
						{
							goto account;//pupunta siya sa welcome caoile 
						}else(cancel!=1);
						{			
							cout<<"Invalid ";
							cout<<"Try Again ";
							cin>>yn;
							if(yn==1);
							{
								goto account;//pupunta sya WELCOME ACCOUNT
							}	
						}
						break;
				}
			case 3:
			{
				cout<<"Deposit Cash"<<endl;
				cout<<"Enter the amount to deposit: ";
				cin>>atm.deposit;
				a1=a1+atm.deposit;
				cout<<"Your new balance is: "<<a1;
				cout<<endl;
				cout<<"Press 1 to go back ";
				cin>>cancel;
				if(cancel==1)
				{
					goto account;//pupunta siya sa welcome caoile 
				}else(cancel!=1);
				{		
				
					cout<<"Invalid ";
					cout<<"Try Again: ";
					cin>>yn;
					if(yn==1);
					{
						goto account;//pupunta sya WELCOME ACCOUNT
					}
				}
				break;
			}
		case 4:
			{
				system("pause>0");
				break;
			}
			}else //ayaw siya mag invalid huhuh
				{
					cout<<"Invalid";
					cout<<"Enter Again";
					cin>>atm.choose;
					goto account;
				}

		}
		}
		// 2
		if((atm.pin)==1639) //code
		{
			account2:cout<<"Welcome Salazar"<<endl;
			cout<<"1.	Balance Inquiry"<<endl;
			cout<<"2.	Withdraw Cash"<<endl;
			cout<<"3.	Deposit Cash"<<endl;
			cout<<"4.	Quit"<<endl;
			cout<<"Enter transaction: ";
			cin>>atm.choose2;
			switch(atm.choose2)
			{
				if(atm.choose2=='1','2','3','4')
				{
				case 1:
					{
						cout<<endl;
						cout<<"Balance Check"<<endl;
						cout<<"Your balance is: "<<a2<<endl;
						cout<<"Press 1 to go back ";
						cin>>cancel;
						if(cancel==1)
						{
							goto account2;//pointer pupunta siya sa welcome account
						}else(cancel!=1);
						{		
							cout<<"Invalid ";
							cout<<"Try Again [Y]";
							cin>>yn;
						if(yn==1);
						{
							goto account2;//pointer pupunta sya WELCOME ACCOUNT
						}	
						}
						break;
					}
				case 2:
					{
						cout<<endl;
						withdraw2:cout<<"Withdraw Cash"<<endl;
						cout<<endl;
						cout<<"Enter your amount: ";
						cin>>atm.amount2;
						if(atm.amount2>a2) 
						{
							cout<<"Insufficient Balance";
							cout<<"Enter Again: ";
							goto withdraw2; //pointer sa widthdraw
						}
						else if(atm.amount2<a2)
						{
							a2=a2-atm.amount2;
							cout<<"Please collect the cash\n";
							cout<<"Your current balance is "<<a2;
						}else
						{
							cout<<"Try Again ";
							goto withdraw2;
						}
						cout<<endl;
						cout<<"Press 1 to go back ";
						cin>>cancel;
						if(cancel==1)
						{
							goto account2;// pointer gamit pupunta siya sa welcome account 
						}else(cancel!=1);
						{		
							cout<<"Invalid ";
							cout<<"Try Again ";
							cin>>yn;
							if(yn==1);
							{
								goto account2;// pointer gamit pupunta sya WELCOME ACCOUNT
							}
							break;
						}
						
					}
				case 3:
					{
						cout<<"Deposit Cash"<<endl;
						cout<<"Enter the amount to deposit: ";
						cin>>atm.deposit2;
						a2=a2+atm.deposit2;
						cout<<"Your new balance is: "<<a2;
						cout<<endl;
						cout<<"Press 1 to go back ";
						cin>>cancel;
						if(cancel==1)
						{
							goto account;//pupunta siya sa welcome caoile 
						}else(cancel!=1);
						{						
							cout<<"Invalid ";
							cout<<"Try Again: ";
							cin>>yn;
							if(yn==1);
							{
								goto account;//pupunta sya WELCOME ACCOUNT
							}
						}
						break;
					}
				case 4:
					{		
						system("pause>0");
						break;
					}
				}else
				{
					cout<<"Invalid";
					cout<<"Enter Again";
					cin>>atm.choose2;
					goto account2;
				}
			}
				
		}
		//3
		if((atm.pin)==9720)
		{
			account3:cout<<"Welcome Revellame"<<endl;
			cout<<"1.	Balance Inquiry"<<endl;
			cout<<"2.	Withdraw Cash"<<endl;
			cout<<"3.	Deposit Cash"<<endl;
			cout<<"4.	Quit"<<endl;
			cout<<"Enter transaction: ";
			cin>>atm.choose3;
			switch(atm.choose3)
			{
				if(atm.choose3 =='1','2','3','4')
				{
			
				case 1:
					{
						cout<<endl;
						cout<<"Balance Check"<<endl;
						cout<<"Your balance is: "<<a3<<endl;
						cout<<"Press 1 to go back ";
						cin>>cancel;
						if(cancel==1)
						{
							goto account2;//pointer pupunta siya sa welcome account
						}else(cancel!=1);
						{		
							cout<<"Invalid ";
							cout<<"Try Again [Y]";
							cin>>yn;
						if(yn==1);
						{
							goto account2;//pointer pupunta sya WELCOME ACCOUNT
						}	
						}
						break;
					}
				case 2:
					{
						cout<<endl;
						withdraw3:cout<<"Withdraw Cash"<<endl;
						cout<<endl;
						cout<<"Enter your amount: ";
						cin>>atm.amount3;
						if(atm.amount2>a3) 
						{
							cout<<"Insufficient Balance";
							cout<<"Enter Again: ";
							goto withdraw3; //pointer sa widthdraw
						}
						else if(atm.amount3<a3)
						{
							a2=a2-atm.amount3;
							cout<<"Please collect the cash\n";
							cout<<"Your current balance is "<<a3;
						}else
						{
							cout<<"Try Again ";
							goto withdraw3;
						}
						cout<<endl;
						cout<<"Press 1 to go back ";
						cin>>cancel;
						if(cancel==1)
						{
							goto account2;// pointer gamit pupunta siya sa welcome account 
						}else(cancel!=1);
						{		
							cout<<"Invalid ";
							cout<<"Try Again ";
							cin>>yn;
							if(yn==1);
							{
								goto account2;// pointer gamit pupunta sya WELCOME ACCOUNT
							}
							break;
						}
						
					}
				case 3:
					{
						cout<<"Deposit Cash"<<endl;
						cout<<"Enter the amount to deposit: ";
						cin>>atm.deposit3;
						a3=a3+atm.deposit3;
						cout<<"Your new balance is: "<<a3;
						cout<<endl;
						cout<<"Press 1 to go back ";
						cin>>cancel;
						if(cancel==1)
						{
							goto account;//pupunta siya sa welcome caoile 
						}else(cancel!=1);
						{						
							cout<<"Invalid ";
							cout<<"Try Again: ";
							cin>>yn;
							if(yn==1);
							{
								goto account;//pupunta sya WELCOME ACCOUNT
							}
						}
						break;
					}
				case 4:
					{		
						system("pause>0");
						break;
					}	
				}else //ayaw siya mag invalid huhuh
				{
					cout<<"Invalid";
					cout<<"Enter Again";
					cin>>atm.choose;
					goto account;
				}
			}		
		}
	

}


