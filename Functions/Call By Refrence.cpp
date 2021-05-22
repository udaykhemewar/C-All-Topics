#include <iostream>
using namespace std;
void change(int &no)
{
	no=no*no;
	cout<<"Value in Function : "<<no<<endl;
}
int main ()
{
	int n;
	cout<<"Enter Value  : ";
	cin>>n;
	change(n);
	cout<<"Value in Main : "<<n<<endl;
	return 0;

}
