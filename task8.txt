#include <iostream> 
#include<windows.h>
using namespace std;
void integers(int num1,int num2);
main(){
int num1;
int num2;
cout<<"enter first integer:";
cin>>num1;
cout<<"enter second integer:";
cin>>num2;
integers(num1,num2);
}
void integers(int num1,int num2)
 {
  if(num1 == num2 )
{
 cout<<"true";
}
 if (num1 != num2  )
{
 cout << "false";
}
 }
