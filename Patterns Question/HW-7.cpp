#include<iostream>
using namespace std;

int main()
{
	
	 for (int i=1, k=0; i<=5; i++, k=0)
	 {
	 	while (k != (5-i))
	 	{	
	 		cout<<" ";
	 		k++;
	 	}
	 		for (int j=1; j<=((2*i)-1); j++)
	 			
	 			{
	 				if ((j==1) || (j==((2*i)-1)))
	 				cout<<i;
	 			else
	 				cout<<"0";
	 			}

	 	
	 	cout<<endl;
	 }
	return 0;
}

