#include<iostream>
using namespace std;

void insertionSort(int arr[])

{
	int temp;
	int minIndex;
	for(int i=0; i<4; i++)
	
	{
		minIndex = i;
		for (int j= i+1; j<5; j++)
		{
		if(arr[minIndex] > arr[j])
			minIndex=j;
	}
	temp = arr[i];
	arr[i]=arr[minIndex];
	arr[minIndex]= temp;
}
}

void printArray(int arr[])
{
	for(int i=0; i<5; i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}

int main ()
{

	cout<<"\nEnter the Array to sort : "<<endl;;
	int arr[5];
	for (int i=0; i<5; i++)
	{
		cin>>arr[i];
	}

	cout<<"Default Unsorted Array is : ";
	for(int i=0; i<5; i++)
		cout<<arr[i]<<" ";

	insertionSort(arr);

	cout<<"\nNew Sorted array is : ";
	for (int i=0; i<5; i++)
		cout<<arr[i]<<" ";
	cout<<endl;
	return 0;
}