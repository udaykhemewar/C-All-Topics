#include <iostream>
using namespace std;

char firstcap(char arr[4], int n)
{
	for(int i=0; i<n; i++)
	{
		if(arr[i]>='A' && arr[i]<='Z')
	return arr[i];
}
};

int main()
{
	int n=4;
	char arr[n];
	for(int i=0; i<n; i++)
		cin>>arr[i];
	cout<<"First Capital Letter is : "<<firstcap(arr,n)<<endl;
	return 0;
}