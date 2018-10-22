#include<iostream>
using namespace std;

int strstr(char C[],char D[])//function to find the first occurance of the substring
{
	int i,j=1,m=0,temp=-2;//declaring variables for controlling the loop sand to store the value of m
	for(i=0;C[i]!='\0';i++)//first for loop inside this for loop onother for loop to compare strings
	{
		if(C[i]==D[0])//if the first element of the second substring is equal to the element in the first string the below code is excecuted
		{	
			m=0;//m store the number of similar charecters in the main string
			for(j=0;D[j]!='\0';j++)//loop to compare the substring and the main string 
			{
				if(C[i+j]==D[j])//comparing the substring and the main string
				m++;//increamenting m
			}
			if(m==j)/*if the number of similarities betwenn the strings is equal to the length of 
			the small string then the second string is a substring of the first*/
			{
				temp=i;//stroing the value of i in temp which is the position of first charcter of the substring in the main string
				break;//breaking the further excecution we only need to find the first occurance of such a substring
		    }
   	   }
   }/* If the second string is not a substring then the returned value will be the initially assingned value of temp which is minus two */
   return temp;//returning the value stored in temp
}
int main()
{
	char A[30],B[20];//declaring the character arrays
	int k;//integer variable to store the location of first ocurrance of the second string in the first
	cout<<"Enter the first array:";//instruction to the user
	cin>>A;//receving the first string
	cout<<"Enter the second array which is to be searched as a sub string in the first string: ";//instruction to the user
	cin>>B;//receving the second string
	k=strstr(A,B);//calling the function and assinging the return value to k
	if(k>=0)//comparing wheter the k is greater than zero
	cout<<"the position of first occurance of second string in first string is(the given value is the position of the beging of the second string):"<<k+1;//output
    else 
    cout<<"that sub string is absent";//if the second string is present as a sub string
	return 0;
}
