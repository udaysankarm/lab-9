#include<iostream>
using namespace std;

// we need a function which takes two strings as arguments and cpoies the second two the end of the first
void strcat(char a[],char b[])//function receving the strings
{
	int p,q;//p is to find the length of the first string and q is  to assingn each element of the second string to the first
	while(a[p]!='\0')
	p++;//increamenting p to find the length of the first string	
	for(q=0;b[q]!='\0';q++)//loop acessing each element in second string and giving the value in that position to the first string
	a[q+p]=b[q];//giving the value from second to first string
	a[p+q]='\0';//assingin \0 to the last elemnt in the combined string
}

int main()
{
	int i;//variables to control the loop 
	char A[20],B[20];// two character strings to store the origial and the copy
	cout<<"Enter the first string of lenght about 10:";//instruction to the user
	cin>>A;//receving the first string
	cout<<"the entered string is :";
	//printing the given string and also determining the length of the string
	for(i=0;A[i]!='\0';i++)//loop to print the first string
	cout<<A[i];//print the elements one by one
	cout<<"\nEnter the second string of lenght about 10:";//instruction to the user
	cin>>B;//receving the first string
	cout<<"the entered string is :";
	for(i=0;B[i]!='\0';i++)//loop to print the second string
	cout<<B[i];//print the elemnts one by one
	strcat(A,B);//calling the function with the two strings as arguments
	cout<<"\nthe combined string is:"<<A;//printing the combined string
	return 0;
}
