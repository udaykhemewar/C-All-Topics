#include<iostream>
using namespace std;

class ShopItem
{
    int id;
    float price;
    public:
        void setData(int a, float b){
            id = a;
            price = b;
        }
        void getData(void){
            cout<<"Code of this item is "<< id<<endl;
            cout<<"Price of this item is "<<price<<endl;
        }
};
        // 1 2 3
        //     ^
        //     |
        //     |
        //     ptr
        // ptrTemp
int main(){
    int size = 3;
    // int *ptr = &size;
    // int *ptr = new int [34];

    // 1. general store item
    // 2. veggies item
    // 3. hardware item
    ShopItem *ptr = new ShopItem [size];
    ShopItem *ptrTemp = ptr;
    int p, i;
    float q;
    for (i = 0; i < size; i++)
    {
        cout<<"Enter Id and price of item "<< i+1<<endl;
        cin>>p>>q;
        // (*ptr).setData(p, q);
        ptr->setData(p, q);
        ptr++; 
    }

    for (i = 0; i < size; i++)
    {
        cout<<"Item number: "<<i+1<<endl;
        ptrTemp->getData();
        ptrTemp++;
    }
    
    
    return 0;
}



// class exam
// {
// public:
//     int physics , maths , student;

//     void setdata(float p, float m, int s)
//     {
//         physics=p;
//         maths=m;
//         student=s;
//     }

//     void getdata(void)
//     {
//         cout<<"Student ID is : "<<student<<endl;
//         cout<<"Marks in Physics : "<<physics<<endl;
//         cout<<"Marks in Maths : "<<maths<<endl;
//     }
// };

// int main()
// {
//     // exam uday;
//     // uday.setdata(33 , 45, 1);
//     // uday.getdata();

// exam *ptr = new exam[5];
// // (ptr+1)->setdata(33,45,1);
// // (ptr+1)->getdata();

// int a, b, c;
// exam *ptrtemp = ptr;
// for (int i = 0; i < 5; i++)
// {
//     cout<<"Enter student Id and Marks in Physics and Maths : "<<endl;
//     cin>>c>>a>>b;
//     ptr->setdata(a , b , c);
//     ptr++;
// }

// for (int i = 0; i < 5; i++)
//     {
//         ptrtemp->getdata();
//         ptrtemp++;
//     }

// }