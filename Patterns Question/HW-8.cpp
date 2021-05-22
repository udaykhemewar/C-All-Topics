#include <iostream>

using namespace std;

int main()
{

	for (int i = 1; i <=10; i++)
	{
		for(int j = 1; j <= 10; j++)
		{
			if(j>10-i)
			{
				cout<<j%10;
			}	
			else
				cout<<" ";
		}
		for(int j=1; j<i; j++)
		{
			cout<<10-j;
		}
		cout<<endl;
	}

	return 0;
}