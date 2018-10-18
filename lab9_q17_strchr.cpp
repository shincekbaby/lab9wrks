#include<iostream>
using namespace std;
int fstrchr(char a[],char c)
{
	char *p;int n=0;
	p=a;
	while(*p!='\0')
	{
		if(*p==c)
		n++;
		p++;
	}
	return n;
}
int main()
{
		char a[15],c;
		int k;
		cout<<"\n Enter your string ";
		cin>>a;
		cout<<"\n Enter the character you want to search ";
		cin>>c;
		k=fstrchr(a,c);
		cout<<"\n no of times "<<c<<" repeats in the string = "<<k;
		return 0;
}
