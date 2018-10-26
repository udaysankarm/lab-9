#include<iostream>
using namespace std;

void revString(char* p)
{
  int l,i=0;
  char temp;//we are swapping the elements tempmis used store the vharacters temporarly
  for(i=0;i<2;i++)//we sholu swap avaery element except the middle element
  { 
    temp=*(p+i); //storing the i th element to temp
    *(p+i)=*(p-i+4); //storing the ith character from last to the i th position
    *(p-i+4)=temp;//storing ith to charcter to the ith position from last
  }
}
int main()
{
  char s[10] = "abcde";
  revString(s);  // call the function
  cout<<s;
  return 0;
}


