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

	void run()
	{
		cout<<"Run is Running"<<endl;
	}

	void run(int a)
	{
		cout<<"Run is Running with int "<<a<<endl;
	}

};

int main ()
{
	laptop l;
	l.run();
	l.run(8);
	return 0;
}