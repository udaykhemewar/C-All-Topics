#include <iostream>
#include <string>
using namespace std;


class laptop 
{
	public :
	string name;
	string brand;
	float price;
	laptop()
	{
		cout<<"Base Class "<<endl;
	}
};

class gaminglaptop : public laptop
{
	public :
	string name;
	string brand;
	int vram;
	gaminglaptop()
	{
		cout<<"Derived class 1"<<endl;	}
	
};

class videolaptop : public gaminglaptop
{
	public :
	
	videolaptop()
	{
		cout<<"Derived Class 2"<<endl;
	}
};



int main ()
{
	videolaptop lap1;
	return 0;
}