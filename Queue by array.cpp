#include <iostream>
using namespace std;
int queue[100], n = 100, front = - 1, rear = - 1;
void Enqueue() {
   int val;
   if (rear == n - 1)
   cout<<"Queue Overflow"<<endl;
   else {
      if (front == - 1)
      front = 0;
      cout<<"Enter Element to Enqueue : "<<endl;
      cin>>val;
      rear++;
      queue[rear] = val;
   }
}
void Dequeue() {
   if (front == - 1 || front > rear) {
      cout<<"Queue Underflow ";
      return ;
   } else {
      cout<<"Enter Element to Dequeue : "<< queue[front] <<endl;
      front++;;
   }
}
void Display() {
   if (front == - 1)
   cout<<"Queue is empty"<<endl;
   else {
      cout<<"Queue elements are : ";
      for (int i = front; i <= rear; i++)
      cout<<queue[i]<<" ";
         cout<<endl;
   }
}
void Front() {
   if (front >= 0)
   cout<<"Queue is empty"<<endl;
   else {
      cout<<"Queue Front elements is : ";
      for (int i = front; i <= 1; i++)
      cout<<queue[i]<<" ";
         cout<<endl;
   }
}
int main() {
   int ch;
   cout<<"1) Enqueue"<<endl;
   cout<<"2) Dequeue"<<endl;
   cout<<"3) Display "<<endl;
   cout<<"4) Front"<<endl;
   cout<<"5) Exit"<<endl;
   do {
      cout<<"Enter your choice : "<<endl;
      cin>>ch;
      switch (ch) {
         case 1: Enqueue();
         break;
         case 2: Dequeue();
         break;
         case 3: Display();
         break;
         case 4: Front();
         break;
         case 5: cout<<"Exit"<<endl;
         break;
         default: cout<<"Invalid choice"<<endl;
      }
   } while(ch!=4);
   return 0;
}