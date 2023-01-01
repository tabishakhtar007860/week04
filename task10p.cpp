#include <iostream>
using namespace std;
void country(string name ,float ticket);
main()
{ 
while(true)
{ 
 string name;
  float ticket;
  
  cout << "enter country name:";
  cin >> name;
  country(name,ticket);
}
 }
     
void country(string name,float ticket)
{
if(name == "pakistan")
{
  cout<<"enter ticket price:";
  cin>>ticket;
  
  cout<<"Final Price is..."<<ticket-ticket*5/100<<endl;
}
if(name == "ireland")
{
 cout<<"enter ticket price:";
  cin>>ticket;

  cout<<"Final Price is..."<<ticket-ticket*10/100<<endl;
}
if(name == "india")
{
 cout<<"enter ticket price:";
  cin>>ticket;
 
  cout<<"Final Price is..."<<ticket-ticket*20/100<<endl;
}
if(name == "England")
{
 cout<<"enter ticket price:";
  cin>>ticket;
 
  cout<<"Final Price is..."<<ticket-ticket*30/100<<endl;
}
if(name == "Canada")
{
 cout<<"enter ticket price:";
  cin>>ticket;
 
  cout<<"Final Price is..."<<ticket-ticket*45/100<<endl;
}
    }