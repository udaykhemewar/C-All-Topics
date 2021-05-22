#include <iostream>
#include <string>
using namespace std;

class laptop 
{
	public :
	string name;
	string brand;
	float price;
	string processor;

	laptop()
	{
		name = "MacBook Pro";
		brand = "Apple";
		price = 99.8;
		processor = "Intel i5";

		cout<<"Name : "<<name<<endl<<"Brand : "<<brand<<endl<<"Price : "<<price<<endl<<"Processor : "<<processor<<endl;
	}

};

int main ()
{
	laptop l;

	return 0;
}