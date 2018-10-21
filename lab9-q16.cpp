#include<iostream>
using namespace std;

int main()
{
	int i=0,j;//declaring variables to control the loop
	char S[20],*p;//declaring the character string and the character pointer
	cout<<"enter a string of length about 10 characters:";//instruction to teh user to input the string
	cin>>S;//receving the string in S(which is a character string)
	p=S;//pointing the character pointer p to S 
	cout<<endl<<"the string you entered is:";//printing teh enterd string
	//we need aloop in which i starts from zero till it reches the end of the string
	while(S[i]!='\0')//loop to print the string 
	{
		cout<<*(p+i);//printinh each element in each position
		i++;//increamenting i
	}
	cout<<endl<<endl;//leaving a line
	//now we need a loop to print the needed number of lines
	for(i=i-1;i>=0;i--)//in this loop i is the position of '\0'.We need the loop to start from from position of the last element to the first element(the position of last elemnt is i-1)
	{
		cout<<endl;//jumping to the next line
		//now we need a loop to print each line such the printing starts from the (last position minus the current line number) this is i
		for(j=i;S[j]!='\0';j++)//loop to print each line(starting from i till the end)
		cout<<*(p+j);//printing the elements 		
	}	
	return 0;
}
