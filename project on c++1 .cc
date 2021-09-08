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
    	cout<<"your new balance  is: "<<balance+add<<" dollars "<<endl;
    	
		}
		else{
			cout<<"alright"<<endl;
		}
		cout<<"would you like to bagel today ?"<<endl;
	   
	   string q2;
	   getline(cin,q2);
	   if(q2=="yes"){
	   	cout<<"please select what bagel you want "<<endl;
	   	string bageltype[]={"nature bagel","cheese bagel","egg bagel"};
	   	double bagelprices[]={3.00,4.00,5.00};
	   	
	   	cout<<" 1. "<<bageltype[0]<<"--"<<bagelprices[0]<<" dollers "<<endl;
	   	cout<<" 2. "<<bageltype[0]<<"--"<<bagelprices[1]<<" dollers "<<endl;
	   	cout<<" 3. "<<bageltype[0]<<"--"<<bagelprices[2]<<" dollers "<<endl;
	   	cout<<"your choice: "<<endl;
	   	int q3;
	   	cin>>q3;
	   	
	   	while(q3>3||q3<1){
	   		cout<<"this is not a valid input please tery again: "<<endl;
	   		cin>>q3;
		   }
	   	
	   	if(q3==1){
	   		cout<<"you have ordered a "<<bageltype[0]<<endl;
	   		cout<<"the total of your order is "<<bagelprices[0]<<" dollars "<<endl;
	   		cout<<"you have "<<balance-bagelprices[0]<<"dollors left on your balance"<<endl;
		   }else if(q3==2){
		   	cout<<"you have ordered a "<<bageltype[1]<<endl;
		    cout<<"the total of your order is "<<bagelprices[1]<<" dollars "<<endl;
	   		cout<<"you have "<<balance-bagelprices[1]<<" dollors left on your balance"<<endl;
		   }else if(q3==3){
		   	cout<<"you have ordered a "<<bageltype[2]<<endl;
		    cout<<"the total of your order is "<<bagelprices[2]<<" dollars "<<endl;
	   		cout<<"you have "<<balance-bagelprices[2]<<"dollors left on your balance"<<endl;
		   }
	   	
	   }
	   else{
	   	cout<<"Alright have a good day"<<endl;
	   }
	   return 0;
}
	   
    
	


