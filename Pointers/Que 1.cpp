#include <iostream>
using namespace std;

int main()
{
	int a=32, *ptr = &a;
	char ch = 'A', &cha = ch;

	cha += a;
	*ptr += ch;
	cout<<a<<" , "<<ch<<endl;
	return 0;
}