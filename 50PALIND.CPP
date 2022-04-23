#include<iostream.h>
#include<conio.h>
int main()
{
  int n,r,rev=0,p;
  cout<<"\nEnter Number";
  cin>>n;
  p=n;
  while(n>0)
  {
    r=n%10;
    rev=(rev*10)+r;
    n=n/10;
  }
  if(p==rev)
  {
    cout<<"Number is palindrome";
  }
  else
  {
    cout<<"Number is not palindrome";
  }
  getch();
  return 0;
}