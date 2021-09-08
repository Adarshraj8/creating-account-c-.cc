#include <iostream>
using namespace std;
int main()
{
	cout<<"Hello, welcome to the App"<<endl;
	cout<<"please create a new Account"<<endl;
	cout<<"choose a username:"<<endl;
	string user;
	getline(cin,user);
	cout<<"choose a password:"<<endl;
	string pass;
	getline(cin,pass);
	cout<<"please enter your information"<<endl;
	cout<<"username: "<<endl;
	string username;
	getline(cin,username);
	cout<<"password"<<endl;
	string password;
	getline(cin,password);

	while(username!=user || password!=pass){
	cout<<"wrong username or password please try again"<<endl;
	cout<<"username"<<endl;
	getline(cin,username);
	cout<<"password :"<<endl;
	getline(cin,password);
}
  
    cout<<"welcome to the bagel app"<<endl;
    double balance = 5.00;
    cout<<"would you like to add money to your balance? "<<endl;
    string q1;
    getline(cin,q1);
    if(q1=="yes"){
    	cout<<"enter how much money you want to add: "<<endl;
    	double add;
    	cin>>add;
    	cout<<"your new balance  is: "<<balance+add<<"dollars"<<endl;
    	
		}
		else{
			cout<<"alright"<<endl;
		}
		cout<<"would you like to bagel today ?"<<endl;
	return 0;
    
	
}

