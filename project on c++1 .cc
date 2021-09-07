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
    cout<<"welcome to the app"<<endl;
	return 0;
}
