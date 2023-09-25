#include<iostream>
using namespace std;
template <calss T>
 void swapping(T &a,T &b)
{
	T temp=a;
	a=b;
	b=temp;
}
main()
{
	char a='A',b='B';
	int x=10,y=20;
	cout<<"before swapping:"<<"a= "<<a<<"b ="<<b<<endl;
	swapping(a,b);
	cout<<"after swapping:"<<"a= "<<a<<"b ="<<b<<endl;
	
	cout<<"before swapping:"<<"x= "<<x<<"y ="<<y<<endl;
	swapping(x,y);
	cout<<"after swapping:"<<"x= "<<x<<"y ="<<y;
}
