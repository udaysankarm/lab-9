# include<iostream>
using namespace std;

int strchr(char D[],char x)
{
	int i;//variable used to access the individual elements
	for(i=0;D[i]!='\0';i++)//loop to compare each element with the given variable
	{
	if(D[i]==x)//comparing each element with the given element
	break;//break statement to end the excecution of the loop at this point
	}
	return i;//returnig the value of i if the break statement have been excecuted then the value of i is the position of the needed character
}
int main()
{
	char a,A[20];//declaring  the charcter string and charcter variable to 
	int k;//variable to store the position of needed element
	cout<<"Enter the string(length less than 20): ";//instruction to the user
	cin>>A;//receving the string
	cout<<"Enter the character whose position you need to find:";//instruction to the user
	cin>>a;//receving the charchter whose position is to be found to search
	k=strchr(A,a);//calling the function and assinging the return value to k;
	if(A[k]=='\0')//condition to check whether it is the end of the string or not
	cout<<"the given element is not present in the array";/*if the returned value is the end 
	of the string the we should output that there is no*/
	else /*if the returned value is not at the end of the string then the if statement in the(inside the loop) function must have 
	excecuted therefor there is a position in which the given charecter is present*/
	cout<<"The position of the entered element is(zero is the first position):"<<k+1;
	return 0;
}
