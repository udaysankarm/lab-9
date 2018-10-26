#include<iostream>
using namespace std;
int myStrLen(char* A)
{
  int i=0;
  while(*(A+i)!='\0')//while the element pointed by A+i is not null
	{
	   i++;//increamenting i
	}
    return i;
  
} 
int main()
{
	int i=0,j,l;//decalring variables to control the strings anf the variable l to store the length of the string
	char S[20],*p;//declaring the character string and the character pointer
	cout<<"enter a string of length about 10 characters:";//instruction to the user to input the string
	cin>>S;//receving the string
	p=S;//pointing p to the character string
	cout<<endl;//jumping to the next line
	l=myStrLen(p);//calling the function and assinging the returned value to l
	cout<<"\nThe length of the string is:"<<l;//printing the length
	
	
	return 0;
}
