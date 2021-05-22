#include<iostream>
using namespace std;

int main()
{
	
	 for (int i=0; i<=2; i++)
	 {
	 	for (int j=0; j<7; j++)
	 	{
	 		if((j>=3-i) && (j<=3+i))
	 			cout<<" ";
	 		else
	 			cout<<"*";
	 	}
	 	
	 	cout<<endl;
	 }
	 for (int i=3; i>=0; i--)
	 {
	 	for (int j=0; j<7; j++)
	 	{
	 		if((j>=3-i) && (j<=3+i))
	 			cout<<" ";
	 		else
	 			cout<<"*";
	 	}
	 	
	 	cout<<endl;
	 }
	return 0;
}

