//include the libraies
#include<iostream>
using namespace std;
//main function
int main()
{	//declare char string and pointer
	char name[14]={'S','h','i','n','c','e',' ','K',' ','B','a','b','y'};
	char *p;
	cout<<"\n Printing the array elements using normal index method\n";
	for(int i=0;name[i]!='\0';i++)//final element of the character array is always \0
	cout<<""<<name[i];
	cout<<"\n Printing array elements using pointer method\n";
	p=name;
	for(int i=0;*p!='\0';i++)//final element of the character array is always \0
	{	cout<<""<<*p;
		p++;
		}cout<<"\n";
	return 0;
}	
