#include <iostream>
using namespace std;

int factorial(int n)
{
	int ans=1;
	for(int i=n; i>0; i--)
	{
		ans = ans * i;
	}
	return ans;
}

int main()
{
	int n,answer;
	cout<<"Enter No. to find Factorial : ";
	cin>>n;
	cout<<"Answer is : "<<n<<"!"<<" "<<"="<<" "<<factorial(n)<<endl;
	return 0;
}