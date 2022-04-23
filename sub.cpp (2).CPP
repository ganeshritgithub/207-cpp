#include<iostream.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	cout <<"enter a";
	cin>>a;
	cout<<"enter b";
	cin>>b;
	a=a+b;
	b=a-b;
	a=a-b;

	cout<<"values of a after swaping is="<<a;
	cout<<"\nvalue of b after swaping is="<<b;
	getch();
}