#include<iostream>
using namespace std;

// we need a function that copies one string to another. So we need  2 srtings as arguments and another argumnet to know the length of the string 
void strcpy(char a[],char b[],int L)
{
// We need to acess each elemnts of the string and copy it to the corresponding  element in the new string 
//for this we are using a for loop
	for(int k=0;k<L;k++)
	b[k]=a[k]; //assinging corresponding element of a to b
	b[L]='\0';//the last element shoul be slash zero
}

int main()
{
	int i,j;//variables to control the loop and store the length of the string
	char A[20],B[20],c;// two character strings to store the origial and teh copy
	cout<<"Enter a string of lenght about 10:";//instruction to the user
	cin>>A;//receving the string
	cout<<endl<<"the entered string is :";
	//printing the given string and also determining the length of the string
	for(i=0;A[i]!='\0';i++)//After the loop ends the value of i will be equal to one more than the length of the string 
	cout<<A[i];//print the elemnts one by one
	//length of the string=i
	strcpy(A,B,i);//callin the function to copy the strings the arguments are the original string the duplicate string and the length of the string
	//this function call is call by refernce. any change in b is reflected in B .
	cout<<endl<<"the copied string B is:"<<B;//printing the string B	
	return 0;
	
}
