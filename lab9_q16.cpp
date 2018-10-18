#include<iostream>
using namespace std;
int main()
{
	char a[20],*p,*m,i=0;
	cout<<"\n Enter a String ";
	cin>>a;
	while(a[i]!='\0')
	i++;
	m=&a[i-1];
	while(*m!=a[0])
	{	
		p=m;
		while(*p!='\0')
		{cout<<" "<<*p;
		p++;}
		cout<<endl;
		m--;
	}
	while(*m!='\0')
	{cout<<" "<<*m;
	m++;}
	cout<<"\n";
	return 0;
}
