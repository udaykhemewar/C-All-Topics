#include <iostream>
using namespace std;

int main ()
{
	int a=5;
	int *ptr = &a;
	int &ref= a;


	cout<<"Adress of "<<a<<" is : "<<&ref<<endl;
	cout<<"Pointer "<<ptr<<" is pointing towards "<<*ptr<<endl;

	return 0;
}