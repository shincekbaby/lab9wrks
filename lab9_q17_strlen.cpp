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
int main()
{
	int k;
	char a[15];
	cout<<"\n Enter your string ";
	cin>>a;
	k=fstrlen(a);
	cout<<"\n The string length is "<<k<<endl;
	return 0;
}
