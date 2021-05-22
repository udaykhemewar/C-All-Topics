#include <iostream>
using namespace std;

bool isPrime(int n)
{
	if(n<3)
	{
		return true;
	}
	for(int i=2; i*i<=n; i++)
	{
		if((n%i)==0)
			return false;
	}
	return true;
}

int main()
{
	int n;
	cout<<"Enter No. : ";
	cin>>n;
	if (isPrime(n))
	{
		cout<<n<<" is a Prime Number"<<endl;
	}
	else{
		cout<<n<<" is Not a Prime Number"<<endl;
	}
	return 0;
}