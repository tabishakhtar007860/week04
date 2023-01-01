#include <iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x ,int y );
void move(int x ,int y );
main(){

int x=50;
int y=10;
gotoxy(x ,y);
move(x,y);
}

void gotoxy(int x,int y)
{
 COORD coordinates;
 coordinates.X=x;
 coordinates.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
 }
void move(int x,int y)
{
gotoxy(x,y);
cout<<"A";
gotoxy(x,y+1);
cout<<"W";
gotoxy(x,y+2);
cout<<"A";
gotoxy(x,y+3);
cout<<"I";
gotoxy(x,y+4);
cout<<"S";
}