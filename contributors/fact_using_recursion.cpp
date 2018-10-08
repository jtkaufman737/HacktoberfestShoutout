/*author: rishav krishna(https://github.com/rishu22)*/
#include<iostream>
using namespace std;
int main()
{
	int factorial(int);
	int fact,value;
	
	cout<<"Enter any number=";
	cin>>value;
	fact=factorial(value);
	
	cout<<"Factorial of "<<value<<" is : "<<fact;
	return 0;
}
int factorial(int n)
{
	if(n<0)
	{
	
	return(-1); //wrong value
	}
	
	if(n==0)
	{
	
	return(1); //terminating condition
	}
	
	else
	{
		return(n*factorial(n-1));	
	}
}
 
