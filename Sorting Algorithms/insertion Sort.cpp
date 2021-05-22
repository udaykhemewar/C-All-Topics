#include<iostream>
using namespace std;

void insertionSort(int arr[], int size)

{
	int temp;
	int minIndex;
	for(int i=0; i<size-1; i++)
	
	{
		minIndex = i;
		for (int j= i+1; j<size; j++)
		{
		if(arr[minIndex] > arr[j])
			minIndex=j;
	}
	temp = arr[i];
	arr[i]=arr[minIndex];
	arr[minIndex]= temp;
}
}

void printArray(int arr[], int size)
{
	for(int i=0; i<size; i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}

int main ()
{
	int arr[]={6,4,8,3,5};
	int size = 5;

	cout<<"Default Unsorted Array is : ";
	for(int i=0; i<size; i++)
		cout<<arr[i]<<" ";

	insertionSort(arr,size);

	cout<<"\nNew Sorted array is : ";
	for (int i=0; i<size; i++)
		cout<<arr[i]<<" ";
	cout<<endl;
	return 0;
}