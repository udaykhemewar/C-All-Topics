#include<iostream>
using namespace std;

int main()
{
	int n=15;
	
	 for (int i=1; i<=n; i++)
	 {
	 	for (int j=1; j<=n; j++)
	 	{
	 		
	 			if ((i==1) || (i==n) || (j==1) || (j==n))
	 				cout<<"*";
	 			else 
	 				cout<<" ";
	 		
	 	
	 	}
	 	{cout<<endl;}
	 }
	 	return 0;
}	 	