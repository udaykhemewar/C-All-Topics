#include <iostream>
using namespace std;

int pow(int n, int p)
{
	int ans=1;
	for(int i=0; i<p; i++)
	{
		ans = ans * n;
	}
	return ans;
}

int main()
{
	int n,p,answer;
	cout<<"Enter No. : ";
	cin>>n;
	cout<<"Enter Power : ";
	cin>>p;
	cout<<"Answer is : "<<pow(n,p)<<endl;
	return 0;
}