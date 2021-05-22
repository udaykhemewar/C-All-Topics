#include<iostream>
using namespace std;

int main()
{
	
	 for (int i=1, k=0; i<=5; i++, k=0)
	 {
	 	for (int j=1; j<=5-i; j++)
	 	
	 		while( k != 5-i)
	 			{
	 				cout<<" ";
	 				k++;
	 	}
	 	for (int j=1; j<=(i*2)-1; j++)
	 		if (j%2==0)
	 		{
	 			cout<<" ";
	 		}
	 		else
	 			cout<<"*";
	 		
	 	

	 	
	 	cout<<endl;
	 }
	return 0;
}
