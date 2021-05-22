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
		name = "MacBook";
		price = 99.8;
	}
	
	void show()
	{
		
		cout<<"Name : "<<name<<endl<<"Price : "<<price<<endl;
	
	}
};

int main ()
{
	laptop lap;
	lap.show();
	cout<<lap.name<<endl;
	return 0;
}