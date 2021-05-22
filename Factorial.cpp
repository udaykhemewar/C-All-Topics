#include <iostream>
using namespace std;
int main()
{
	long n,ans = 1;
	cout<<"Enter No. to find Factorial : ";
	cin>>n;

	for (long i=1; i<=n; i++)
	{
		ans=ans*i;
	}
	cout<<n<<"! = "<<ans<<endl;
	return 0;
}