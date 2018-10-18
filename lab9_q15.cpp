//include the libraries 
#include<iostream>
using namespace std;
//main function
int main()
{
	char a[20],*p,*m;
	cout<<"\n Enter a String ";
	cin>>a;
	m=a;
	while(*m!='\0')
	{	
		p=m;
		while(*p!='\0')
		{cout<<" "<<*p;
		p++;}
		cout<<endl;
		m++;
	}	
	return 0;
}
