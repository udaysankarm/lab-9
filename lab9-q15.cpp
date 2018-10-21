#include<iostream>
using namespace std;
int main()
{
	int i=0,j,l;//decalring variables to control the strings anf the variable l to store the length of the string
	char S[20],*p;//declaring the character string and the character pointer
	cout<<"enter a string of length about 10 characters:";//instruction to the user to input the string
	cin>>S;//receving the string
	p=S;//pointing p to the character string
	cout<<endl;//jumping to the next line
	while(S[i]!='\0')//while loop to print the string
	{
		cout<<*(p+i);//cout statement to print each element
		i++;//increamenting i
	}
	l=i;//After the loop is excecuted the length of the string will be one less than the current value of i
	//we need a loop to start printing the elements in the i th position to the end of the string 
	for(j=1;j<l;j++)//for loop to print each line the needed number of times
	{
		cout<<endl;//jumping to the next line
		for(i=j;S[i]!='\0';i++)//for loop to print each line
		cout<<*(p+i);//printing each element in each position starting from the ith position
		
	}
	
	return 0;
}
