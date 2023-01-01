#include <iostream>
using namespace std;
main()
{
int holidays;
int free;
int hr;
int total;
cout<<"enter holidays:";
cin>>holidays;
free=30000-(365-holidays*63+holidays*127);
hr=free%60;
total=(free/60-hr);
cout<<"tom will run away"<<hr<<"  hours"<<total<<"  minutes for play";
} 