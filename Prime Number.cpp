#include<iostream>
using namespace std;
int main()
{
	int n,i;
	cout<<"Enter Number to Check Prime : ";
	cin>>n;

	for(i=2; i*i<=n; i++)
	{
		cout<<i;
		if ((n%i)==0)
		{
			cout<<"Not Prime"<<endl;
			break;
		}
	if(i*i==n)
	{
		cout<<"Prime";
	}
	}
	return 0;
}