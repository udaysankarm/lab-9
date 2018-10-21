#include<iostream>
using namespace std;

int main()
{
	
	int a=1;//declaration and initializing variable to store integer
	float b=243;//declaration and initializing variable to store float
	double c=3535;//declaration and initializing variable to store double
	bool d=1;//declaration and initialising boolian variable 
	char e='A';//declaration and initialising charachter variable
	
	cout<<endl<<"size of int:"<<sizeof(a);//using the size of operator to print the size of integer variable a

	cout<<endl<<"size of float:"<<sizeof(b);//using the size of operator to print the size of float variable b
	
	cout<<endl<<"size of double:"<<sizeof(c);//using the size of operator to print the size of double variable c
	
	cout<<endl<<"size of boolian:"<<sizeof(d);//using the size of operator to print the size of boolian variable d
	
	cout<<endl<<"size of char:"<<sizeof(e);//using the size of operator to print the size of integer variable e
	int *p;//declaration and initializing of integer pointer variable 
	float *q;//declaration and initializing of float pointer variable 
	double *r;//declaration and initializing of double pointer variable 
	bool *s;//declaration and initializing of boolian pointer variable 
	char *t;//declaration and initializing of charachter pointer variable 
	
	cout<<endl<<"size of integer pointer:"<<sizeof(p);//using the size of operator to print the size of integer pointer variable p
	
	cout<<endl<<"size of float pointer:"<<sizeof(q);//using the size of operator to print the size of float pointer variable q
	
	cout<<endl<<"size of double pointer:"<<sizeof(r);//using the size of operator to print the size of double pointer variable r
	
	cout<<endl<<"size of boolian pointer:"<<sizeof(s);//using the size of operator to print the size of boolian pointer variable s
	
	cout<<endl<<"size of char pointer:"<<sizeof(t);//using the size of operator to print the size of character pointer  variable t
	
	return 0;
}
