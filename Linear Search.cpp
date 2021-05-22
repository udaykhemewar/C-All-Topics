#include <iostream>
using namespace std;

int search(int array[], int x) {


  for (int i = 0; i < 5; i++)
    if (array[i] == x)
      return i;
  return -1;
}

int main() {
  cout<<"\nEnter the Numbers: "<<endl;;
  int array[5];
  for (int i=0; i<5; i++)
  {
    cin>>array[i];
  }
  int x;
  cout<<"Enter the number that you want to search :";
  cin>>x;


  int result = search(array, x);

  (result == -1) ? cout << "Element not found" : cout << "Element found at index: " << result;
}