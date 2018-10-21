
#include<iostream>
using namespace std;

// we need a function which accept the string and return the legth of the string
int strlen(char a[])//function to find the legth of the string
{
	int y=0;//variable used to acess the elements of the string
	while(a[y]!='\0')//function to find the length
	{
		y++;//increamenting y after each excecution
	}	
	return y;//retrurning the final value of y to the main function
	
}

int main()
{
	int i;//variables to control the loop 
	char A[20];// two character strings to store the origial and teh copy
	cout<<"Enter the  string of whoes  lenght you want (should be less than 20):";//instruction to the user
	cin>>A;//receving the first string
	cout<<"the entered string is :";
	//printing the given string and also determining the length of the string
	for(i=0;A[i]!='\0';i++)//After the loop ends the value of i will be equal to one more than the length of the string 
	cout<<A[i];//print the elements one by one
	cout<<"\n the length of the string is:"<<strlen(A);//function call ;//printing the output here it is the length of the string
}
