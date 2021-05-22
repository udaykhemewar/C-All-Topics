#include<iostream>
using namespace std;


class student {
  public:
  	int rollnumber;
  	char name [];
  	void getroll()
  	{
  		cout<<"Enter Roll Number of Person " ;
  		cin>>rollnumber;
  	}
  	void display()
  	{
      int i=1;
  		cout<<"The Roll Number of Person is : " <<i<<": ";
      i++;
  	}
  };

  int main()
  {
  	student p1,p2;
  	cout<<"Enter Name of 1st student : \n";
  	cin>>p1.name;
  	cout<<"Enter Name of 2nd student : \n";
  	cin>>p2.name;
  	p1.getroll();
  	p2.getroll();
  	cout<<"\nName and Roll Number of 1st Person : \n";
  	cout<<p1.name<<" and "<<p1.rollnumber<<"\n";
  	cout<<"Name and Roll Number of 2nd Person: \n";
  	cout<<p2.name<<" and "<<p2.rollnumber;


  }