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
	
	void getdata ()
	{
	cout<<"Model Name : ";
	cin>>name;
	cout<<"Brand : ";
	cin>>brand;
	cout<<"Price : ";
	cin>>price;
	cout<<"Processor : ";
	cin>>processor;}


	void showdata ()
	{
	cout<<"Model Name : "<<name<<endl<<"Brand : "<<brand<<endl<<"Price : "<<price<<endl<<"Processor : "<<processor<<endl;}



	void startup()

	{cout<<"laptop "<<name<<" has been started."<<endl;}


	void shutdown()

	{cout<<"laptop "<<name<<" is shutting down."<<endl;}
};


int main ()
{
	laptop l;
	l.getdata();
	l.showdata();
	l.startup();
	l.shutdown();

	return 0;
}