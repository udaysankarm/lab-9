#include<iostream>
using namespace std;
bool contain(char* A,char c)
{
  int i=0;
  while(*(A+i)!='\0')//while the element pointed by A+i is not null till the end
	{
	   if(*(A+i)==c);//checking the precense of the given variable
	   {
	     cout<<i;
	     return true;
	   }
	   i++;
	}
} 
int main()
{
	int i=0,j;//decalring variables to control the strings anf the variable l to store the length of the string
	bool l=0;
	char S[20],r,*p=S;//declaring the character string and the character pointer
	cout<<"enter a string of length about 10 characters:";//instruction to the user to input the string
	cin>>S;//receving the string
	cout<<"give the element whose precence in the string is to be checked:";
	cin>>r;
	cout<<endl;//jumping to the next line
	l=contain(p,r);//calling the function and assinging the returned value to l
	if(l==1)
	cout<<"\nThe element is present";
	else
	cout<<"Th element is absent\n";
	return 0;
}
