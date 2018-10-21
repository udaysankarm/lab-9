#include<iostream>
using namespace std;

//we are using a function to caompare two strings receving the two strings in two variables and comparing the elemnts one by one 
strcmp(char D[],char E[])//function to compare the strings
{
	int i,c,b,j=0;//i is to control the loop and to acces each element using index method. c and b are used to store the ASCII value of each element int the array 
	for(i=0;D[i]!='\0';i++)//for loop to acess each element
	{
		c=D[i];//storing the ASCII value of each element to c and d
		b=E[i];
		if(c>b)//determining whether the element in first array is greater than the element in the second array 
		{
	        j=1;//if the element in the first array is greater then assinging the value one to the variable j 
			break;//if at least one element is different between the arrays we stop at that moment
		}
	    if(c<b)//determining whether the element in first array is less than the element in the second array
		{
			j=-1;//if the element in the first array is less then assinging the value minus one to the variable j
			break;//if at least one element is different between the arrays we stop at that moment
		}		 
	}
	/*if the first array has some n elements and second element has m element the above loop will excecute till the end of first array if m is greateater 
	than n and first n elements of the second and first are same. Then after the loop the value of j will still remain zero but the value should be -1 
	since the first array is smaller then the first the below if is to solve that problem*/
	if(j==0)
	{
	//comparing the last element of D(which is '\0') with the ith element of E 
	if((int)D[i]<(int)E[i])/*if the second array extends even after the first arry ends then '\0' is compared  with some charachter. 
	 lexographically '\0' is smaller than all charachters*/
	j=-1;//j is assinged the value minus one
     } 
	return j;//returing the value of j to the main function 
}
int main()
{
	char A[21],B[21];//declaring charachter arrays
	int y;//integer to store the return value of function strcmp
	cout<<"Enter the first  string to be compared (of length less than 20 without and space in between ):";//instruction to user to input the array
	cin>>A;//receving the array in A
	cout<<"Enter the second string to be compared (of length less than 20 without and space in between ):";//instruction to user to input the array
	cin>>B;//receving the next  array in B
	y=strcmp(A,B);//calling the function and assinging the return value to y
	cout<<y;//printing the value stored in y
	return 0;
}
