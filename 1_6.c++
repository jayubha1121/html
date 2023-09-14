#include<iostream>
using namespace std;
class student
{
	public:
		int id;
		string name;
		string subject;
		
    void inputData()
	{
		cout<<"Enter id:"<<endl;
		cin>>id;
		cout<<"Enter name:"<<endl;
		cin>>name;
		cout<<"Enter subject:"<<endl;
		cin>>subject;	
   }
   void displaydata()
   {
   	cout <<"ID:"<<id<<endl;
   	cout <<"Name:"<<name<<endl;
   	cout <<"Subject:"<<subject<<endl;
   }
};
main()
{
	student obj;
	obj.inputData();
	obj.displaydata();
}
