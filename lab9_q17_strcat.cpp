#include<iostream>
using namespace std;
void fstrcat()
{
	char a[30],b[15],*m,*p;
	cout<<"\n Enter the first string ";
	cin>>a;
	cout<<"\n Enter the second string ";
	cin>>b;
	p=b;
	m=a;
	while(*m!='\0')
	m++;
	while(*p!='\0')
	{	 *m=*p;
	     p++;
	     m++;
	     if (*p=='\0')
	     *m='\0';
	     }
	 m=a;
	 cout<<"\n Resulting string is ";
	 while(*m!='\0')
	 {cout<<*m;
		 m++;}
	 
}
int main()
{
	fstrcat();
	cout<<"\n";
	return 0;
}
