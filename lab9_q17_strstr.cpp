#include<iostream>
using namespace std;
int fstrlen(char a[])
{ 
	char *p;
	int i=0;
	p=a;
	while(*p!='\0')
	{i++;p++;}
	return i;
}
int fstrstr(char a[],char b[])
{
	char *p,*q,*r;
	int l=fstrlen(b),n=fstrlen(a);
	l=n-l+1;
	p=a;
	while(*p!=a[l])
	{
		q=b;
		if(*p==*q)
		{
			r=p;
			while(*q==*r && *q!='\0')
			{r++;q++;}
		    if(*q=='\0')
		    return 1;
		 }
		 p++;
	 }
	 return 0;
}
int main()
{
		int k;
		char a[15],b[15];
		cout<<"\n Enter your main string ";
		cin>>a;
		cout<<"\n Enter substring ";
		cin>>b;
		k=fstrstr(a,b);
		if (k==1)
		   cout<<"\n The given substring is present in the string";
		   else 
		   cout<<"\n Given substring is not present in the string";
	   return 0;
} 
	 		
