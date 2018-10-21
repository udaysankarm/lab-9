#include<iostream>
using namespace std;
int main()
{
	int A[10]={1,2,3,4,5,6,7,8,9,0};//creatring a integer array
	int i=0,*p;//assing the control variable for loop i, as zero and declaring the pointer variable p
	for(i=0;i<10;i++)//for loop to print the array by noraml index method
	cout<<" "<<A[i];//printing each element of A
	p=A;//pointing the variable p to A
	cout<<endl;//leaving a line empty
	for(i=0;i<10;i++)//loop to control the variable i which is used to acess the position of the array using pointers
	cout<<*(p+i)<<" ";//printing the value stored at i+1 th position
	return 0;
}
