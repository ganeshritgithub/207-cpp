#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
class count
{
 private:
     char name[25];
     int i,vowel,space,n,l;
 public:
    void get();
    void call();
};
 void count::get()
 {
  cout<<"\nenter the string to count length space and vowel\n\t";
  gets(name);
 }
 void count::call()
 {
   vowel=0;
   space=0;
   n=0;
   l=strlen(name);
   for(i=0;i<l;i++)
 {
   switch(name[i])
   {
    case'a':vowel++;
    break;
    case'e':vowel++;
    break;
    case'i':vowel++;
    break;
    case'o':vowel++;
    break;
    case'u':vowel++;
    break;
    case ' ':space++;
    break;
    default:n++;
    }
 }
 cout<<"\nvowels in sentence are:"<<vowel;
 cout<<"\nspace in sentence are:"<<space;
 cout<<"\nconsonant in sentence are:"<<n;
 cout<<"\nlength of sentence is:"<<l;
 }
 void main()
 {
  clrscr();
  count c;
  c.get();
  c.call();
  getch();
 }