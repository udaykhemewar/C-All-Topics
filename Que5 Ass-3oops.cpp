#include <iostream> 
using namespace std; 

class volume
{ 
public: 
     

    void sphere(int r) 
    { 
        cout<<"Enter Radius and Height of sphere to find volume : "<<endl;
        cout<<"Enter Radius of sphere : "<<endl;
        cin>>r;
        cout<<"Volume of Sphere is : "<<1.33*3.14*r*r*r;
    } 
    void cylinder() 
    { 
        int r,h;
        cout<<"Enter Radius and Height of Cylinder to find volume : "<<endl;
        cout<<"Enter Radius of Cylinder : "<<endl;
        cin>>r;
        cout<<"Enter Height of Cylinder : "<<endl;
        cin>>h;
        cout<<"Volume of Cylinder is : "<<3.14*r*r*h;
    } 
}; 

int main() 
{ 
    volume();
    void sphere();
    void cylinder();
    return 0; 
}