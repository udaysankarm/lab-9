#include<iostream>
using namespace std;
double* maximum(double D[],int L)//function to find the maximum number 
{
  double *max=D;
  if(L>0)
  {
  for(int i=0;i<L;i++)//loop to acess each element and find the maximum
   if(D[i]>*max)//checking whether each number is greater than maximum
   max=&D[i];
  return max;//returning to main function
  }
  else 
  return NULL;
}
int main()
{
  int a,l;
  double A[20],*max;
  cout<<"\nEnter the number of integers you are inputting";//instruction to user
  cin>>l;
  for(a=0;a<l;a++)//loop for storing each number
  { 
   cout<<"\nEnter the element in position "<<a+1<<":";//instruction to user
   cin>>A[a];//receving the elements into the array
  }
  max=maximum(A,l);//calling the function and assinging the return value to leven
  cout<<"the largest number in the array is:"<<*max;//printing the number in the position pointed by the returned pointer
  return 0;
}
