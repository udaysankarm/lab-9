#include<iostream>
using namespace std;
int main()
{
	int i;//initializing the loop control variable which is used to acess the each postion in the array
	char *p;//declaring the pointer variable
	char A[12]="uday sankar";//storing the string to the array
	for(i=0;i<11;i++)//for loop used the print the array by normal index method
	cout<<A[i];//printing the value at each position
	cout<<endl;//leaving a space free
	p=A;//pointing p to the first location in the array
	for(i=0;i<11;i++)//for loop to print the array using pointer
	{
		cout<<*(p+i);//printing the each element in the array
	}
	return 0;
}
