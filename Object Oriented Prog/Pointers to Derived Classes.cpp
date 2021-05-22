#include<iostream>
using namespace std;
// class BaseClass{
//     public:
//         int var_base;
//         void display(){
//             cout<<"Dispalying Base class variable var_base "<<var_base<<endl;
//         }
// };

// class DerivedClass : public BaseClass{
//     public:
//             int var_derived;
//             void display(){
//                 cout<<"Dispalying Base class variable var_base "<<var_base<<endl;
//                 cout<<"Dispalying Derived class variable var_derived "<<var_derived<<endl;
//             }
// };

// int main(){
//     BaseClass * base_class_pointer;
//     BaseClass obj_base;
//     DerivedClass obj_derived;
//     base_class_pointer = &obj_derived; // Pointing base class pointer to derived class

//     base_class_pointer->var_base = 34;
//     // base_class_pointer->var_derived= 134; // Will throw an error
//     base_class_pointer->display();

//     base_class_pointer->var_base = 3400; 
//     base_class_pointer->display();

//     DerivedClass * derived_class_pointer;
//     derived_class_pointer = &obj_derived;
//     derived_class_pointer->var_base = 9448;
//     derived_class_pointer->var_derived = 98;
//     derived_class_pointer->display();

//     return 0;
// }






class meter
{
public:
    int r;
    void setdata(int a)
    {
        r=a;
    }
    virtual void display()
    {
        cout<<"The meter reading for generation of bill is: "<<r<<endl;
    }
};

class bill:public meter
{
public:
    int c;
    void display()
    {
        cout<<"The meter reading submitted for of bill is: "<<r<<endl;
        cout<<"Total amount to be paid Rs."<<r*c<<endl;
    }
};

int main()
{
    // bill uday;
    // uday.setdata(122);
    // uday.display();
    // uday.billgeneration();

meter * meterpointer;
    meter obj1;
    bill obj2;
    meterpointer = &obj2; // Pointing meter class pointer to bill class

    meterpointer->setdata(34);
    // meterpointer->int c = 134; // Will throw an error
    meterpointer->display();

    meterpointer->r = 3400; 
    meterpointer->display();

    bill * billpointer;
    billpointer = &obj2;
    billpointer->r = 9448;
    billpointer->c = 98;
    billpointer->display();
}