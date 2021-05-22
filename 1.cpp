// #include<iostream>
// using namespace std;


// class Student {
//   public:
//     int scores[5];
//     int sum;
//     int calculateTotalScore() {return sum;}
//     void input() {
//         for(int i=0; i<5; i++) {
//             cin >> scores[i];
//             sum+=scores[i];
//         }
//     }
// };

// int main() {
//     int n; // number of students
//     cin >> n;
//     Student *s = new Student[n]; // an array of n students
    
//     for(int i = 0; i < n; i++){
//         s[i].input();
//     }

//     // calculate kristen's score
//     int kristen_score = s[0].calculateTotalScore();

//     // determine how many students scored higher than kristen
//     int count = 0; 
//     for(int i = 1; i < n; i++){
//         int total = s[i].calculateTotalScore();
//         if(total > kristen_score){
//             count++;
//         }
//     }

//     // print result
//     cout << count;
    
//     return 0;
// }







#include <iostream>
#include <string>
using namespace std;

int main() {
	string a;
    string b;
    cin>>a>>b;
    cout<<a.length()<<" "<<b.length()<<endl;
    cout<<a+b<<endl;

    swap(a[0],b[0]);
    {
    	cout<<a<<" "<<b;
    }


    
  
    return 0;
}






// #include<iostream>
// #include<string>
// using namespace std;

// class Info
// {
//     public:
//         int age, std;
//         string fname, lname;
//         void print(){
//             cin>>age;
//     cin>>fname;
//     cin>>lname;
//     cin>>std;
//             cout<<age<<endl;
//             cout<<fname<<", ";
//             cout<<lname<<endl;
//             cout<<std<<endl;
//         }
// };

// int main(){
//     Info uday;
    
//     uday.print();
//     cout<<"\n"<<uday.age<<",";
//             cout<<uday.fname<<",";
//             cout<<uday.lname<<",";
//             cout<<uday.std;
//     return 0;
// }



// #include<iostream>
// using namespace std;

// class Employee
// {

//     public:
//         int a, b, c;
//         int d, e;
//         // void setData(int a, int b, int c); // Declaration
//         void getData(){
//             cout<<"The value of a is "<<a<<endl;
//             cout<<"The value of b is "<<b<<endl;
//             cout<<"The value of c is "<<c<<endl;
//             cout<<"The value of d is "<<d<<endl;
//             cout<<"The value of e is "<<e<<endl;
//         }
// };

// // void Employee :: setData(int a1, int b1, int c1){
// //     a = a1;
// //     b = b1;
// //     c = c1;
// // }

// int main(){
//     Employee harry;
//     // harry.setData();
//     harry.a = 1;
//     harry.b = 2;
//     harry.c = 3;
//     // harry.a = 134; -->This will throw error as a is private
//     harry.d = 34;
//     harry.e = 89;
//     harry.getData();
//     return 0;
// }


// #include<iostream>
// using namespace std;

// class Employee
// {
//     private:
//         int a, b, c;
//     public:
//         int d, e;
//         void setData(int a1, int b1, int c1); // Declaration
//         void getData(){
//             cout<<"The value of a is "<<a<<endl;
//             cout<<"The value of b is "<<b<<endl;
//             cout<<"The value of c is "<<c<<endl;
//             cout<<"The value of d is "<<d<<endl;
//             cout<<"The value of e is "<<e<<endl;
//         }
// };

// void Employee :: setData(int a1, int b1, int c1){
//     a = a1;
//     b = b1;
//     c = c1;
// }

// int main(){
//     Employee harry;
//     // harry.a = 134; -->This will throw error as a is private
//     harry.d = 34;
//     harry.e = 89;
//     harry.setData(1,2,4);
//     harry.getData();
//     return 0;
// }

