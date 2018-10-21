#include<iostream>
using namespace std;
int main()
{
	int a,b,*p;//declaring two variables a and b and the pointer variable p
	p=&a;//pointing p to the location of a
	b=*p;//storing value pointed by p in b
	cout<<a<<" "<<b<<" "<<*p<<endl;//printing the value stored in a and b and also the value pointed by p
	a=2;//assinging the value 2 to a
	b=3;//assinging the value 3 to b
	cout<<a<<" "<<b<<" "<<*p<<endl;//printingthe value stored in a and b and also the value pointeed by p
	p=&b;//pointing p to b
	cout<<a<<" "<<b<<" "<<*p<<endl;//printing the value stored in a and b and also the value pointedby  p
	return 0;
}
