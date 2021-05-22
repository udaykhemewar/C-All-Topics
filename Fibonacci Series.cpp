#include <iostream>
using namespace std;

class fibonacci
{
public:
	int n, a, b, c;
	fibonacci(int w,int x,int y,int z)
	{
		n=w;
		a=x=0;
		b=y=1;
		c=z;

		cout<<"Enter the No. of Fibonacci Term : ";
	cin>>n;

	cout<<a<<" "<<b<<" " ;
	for (int i=2; i<n; i++)
	{
		c=a+b;
		cout<<c<<" ";
		a=b;
		b=c;

	}
	cout<<endl;

	}

};

int main()
{
	fibonacci(0,0,0,0);
}

// int main()
// {
// 	int n, a=0, b=1, c;
// 	cout<<"Enter the No. of Fibonacci Term : ";
// 	cin>>n;

// 	cout<<a<<" "<<b<<" " ;
// 	for (int i=2; i<n; i++)
// 	{
// 		c=a+b;
// 		cout<<c<<" ";
// 		a=b;
// 		b=c;

// 	}
// 	cout<<endl;
// 	return 0;

// }
