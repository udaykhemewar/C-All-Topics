#include<iostream>
using namespace std;

int main()
{
	
	 for (int i=1, k=0; i<=5; i++, k=0)
	 {
	 	for (int j=2; j<i*2; j++)
	 	{	
	 		cout<<" ";
	 	}
	 		while( k != 6-i)
	 			{
	 				cout<<"*";
	 				k++;
	 	}

	 	
	 	cout<<endl;
	 }
	return 0;
}



