#include<iostream>
using namespace std;

void revString(char* p)
{
  int l,i=0;
  char temp;
  for(i=0;i<2;i++)
  { 
    temp=*(p+i);
    *(p+i)=*(p-i+4);
    *(p-i+4)=temp;
  }
}
int main()
{
  char s[10] = "abcde";
  revString(s);  // call the function
  cout<<s;
  return 0;
}


