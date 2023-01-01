#include <iostream>
using namespace std;
main()
{
int red;
int white;
int tulips;
int price;
cout<<"enter number of red flowes:";
cin>>red;
cout<<"enter number of white flowers:";
cin>>white;
cout<<"enter number of tulips:";
cin>>tulips;
price=red*2.00+white*4.10+tulips*2.50;
cout<<"original price:"<<price<<endl;
if(price > 200)
{
cout<<"disconted price is:"<<price-0.2*price;
}
}
