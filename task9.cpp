#include <iostream>
using namespace std;
void reverse(string name,string name2); 
main()
{
string name;
cout<<"enter name:";
cin>>name;
string name2;
cout<<"enter name2:";
cin>>name2;

reverse(name,name2);
}
void reverse(string name,string name2)
{
if(name == name2 )
 {
  cout<<"false";
   }
if(name != name2)
 {
  cout<<"true";
  }
} 




