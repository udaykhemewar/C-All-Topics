#include <iostream>
using namespace std;

void selectionSort (int arr[], int size)
{
	int minIndex;
	for(int i=0; i<size-1; i++)
	{
		minIndex=i;
		for (int j= i+1; j< size; j++)
		{
			if(arr[minIndex]>arr[j])
				minIndex = j;
		}
	}
};	


void swap(int temp, int arr[], int minIndex, int i)
{
	temp = arr[minIndex];
		arr[minIndex] = arr[i];
		arr[i] = temp;
};

int main ()
{
	int arr [] = {5,4,1,3,2};
	int size = sizeof(arr)/sizeof(int);

	cout<<"Default Unsorted Array is : ";
	for(int i=0; i<size; i++)
		cout<<arr[i]<<" ";

	selectionSort(arr,size);

	cout<<"\nNew Sorted array is : ";
	for (int i=0; i<size; i++)
		cout<<arr[i]<<" ";
	cout<<endl;
	return 0;
}