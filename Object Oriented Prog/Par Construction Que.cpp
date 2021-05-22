#include<iostream>
using namespace std;

class Point{
    public:
    int a, b,c,d;
        Point(int x1, int x2, int y2, int y1){
            x1 = a;
            x2 = b;
            y1 = c;
            y2 = b;
        }

        void displayPoint(){
            cout<<"The point is ("<<a<<" , "<<b<<c<<")"<<endl;
        }

};

int main(){
    Point p(5,0,8,9);
    p.displayPoint();

    return 0;
}


