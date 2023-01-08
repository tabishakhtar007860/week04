#include <iostream>
using namespace std;
void pg();
main()
{ 

cout<<"*************************"<<endl;
cout<<"*      UET Lahore       *"<<endl;                         
cout<<"*************************"<<endl;
  cout<<"  Welcome to universty managment system"<<endl;
cout<<"";
cout<<"press 1 to enter details of first student:"<<endl;
cout<<"press 2 to enter details of second student:"<<endl;
cout<<"press 3 to caculate aggreate of first student:"<<endl;
cout<<"press 4 to caculate aggreate of second student:"<<endl;
pg();
}
void pg()
{
 string nameb,namec;
 float matricb,matricc;
 float interb,interc;
 float ecatb,ecatc;
 float resultb,resultc;

float num1;
cout<<"enter choice:";
cin>>num1;
if(num1==1)
{
system("cls");
cout<<"you choosed :1";
cout<<"enter first student name:";
cin>>nameb;
cout<<"enter matric marks(out of 1100):";
cin>>matricb;
cout<<"enter inter marks(out of 550):";
cin>>interb;
cout<<"enter ecat marks(out of 400):";
cin>>ecatb;  
resultb=(matricb/1100*0.3+interb/550*0.3+ecatb/400*.4);
int wait;
cin>>wait;
cout<<"press any key to continue...";
return pg();
}
if(num1==2)
{
system("cls");
cout<<"you chossed:2";	
cout<<"enter second name:";
cin>>namec;
cout<<"enter matric marks(out of 1100):";
cin>>matricc;
cout<<"enter inter marks(out of 550):";
cin>>interc;
cout<<"enter ecat marks(out of 400):";
cin>>ecatc; 
resultc=(matricc/1100*0.3+interc/550*0.3+ecatc/400*0.4);
int wait;
cout<<"press any key to continue...";
cin>>wait;
return pg();
}
cout<<"enter choice now:"<<num1<<endl;
if(num1==3){
cout<<resultb;
}
if(num1==4){
cout<<resultc;

}
}

