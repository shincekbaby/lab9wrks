#include<iostream>
using namespace std;
 void fstrcpy()
{ char a[20],*p,*m,ca[20];
	cout<<"\n Enter a String ";
	cin>>a;
	m=a;p=ca;
	while(*m!='\0')
	{	*p=*m;
		 p++;
		 m++;
		 if (*m=='\0')
		 *p='\0';
	}
	cout<<"\nprinting copied string \n"; 
	p=ca;
	while(*p!='\0')
	{cout<<*p;p++;}
}
int main()
{ 
	fstrcpy();
	cout<<"\n";
	return 0;
}
