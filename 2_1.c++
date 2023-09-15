#include<iostream>
using namespace std;
class student
 

{
	public:
	student()  //default constructor
	{
	 cout <<"Welcome to the constructor\n";
	 
	}
	student (int a,int b)
    {
    	cout<<"a = "<<a;
    	cout<<"b = "<<b;
		}	

} ;
main()
{
	// object creation
	student s1=student();
	student s2=student(10,20);
}
