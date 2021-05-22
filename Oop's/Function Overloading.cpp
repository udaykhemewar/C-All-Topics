#include <iostream>
#include <string>
using namespace std;

void volume()
{
	cout<<"\n""Enter Radius and Height of sphere and Radius of Cylinder to find their volumes : "<<endl;

}


void sphere(int r)
{
	cout<<"\n""Enter Radius and Height of sphere to find volume : "<<endl;
	cout<<"Enter Radius of sphere : "<<endl;
    cin>>r;
    cout<<"Volume of Sphere is : "<<1.33*3.14*r*r*r<<endl;
}

void cylinder(int r, int h)
{
	// cout<<"Enter Radius and Height of Cylinder to find volume : "<<endl;
    cout<<"Enter Radius of Cylinder : "<<endl;
    cin>>r;
    cout<<"Enter Height of Cylinder : "<<endl;
    cin>>h;
    cout<<"Volume of Cylinder is : "<<3.14*r*r*h;

}



int main ()
{
	volume();
	sphere(13);
	cylinder(16,4);
	return 0;
}