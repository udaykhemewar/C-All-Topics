#include<iostream>
using namespace std;
/*Rules for virtual functions
They cannot be static
They are accessed by object pointers
Virtual functions can be a friend of another class
A virtual function in the base class might not be used.
If a virtual function is defined in a base class, there is no necessity of redefining it in the derived class
*/
class CWH{
    protected:
        string title;
        float rating;
    public:
        CWH(string s, float r){
            title =  s;
            rating = r;
        }
        virtual void display()=0;
};
class CWHVideo: public CWH
{
    float videoLength;
    public:
        CWHVideo(string s, float r, float vl): CWH(s, r){
            videoLength = vl;
        }
        void display(){
            cout<<"This is an amazing video with title "<<title<<endl;
            cout<<"Ratings: "<<rating<<" out of 5 stars"<<endl;
            cout<<"Length of this video is: "<<videoLength<<" minutes"<<endl;
        }
};    

class CWHText: public CWH
{
    int words;
    public:
        CWHText(string s, float r, int wc): CWH(s, r){
            words = wc;
        }
     void display(){
      cout<<"This is an amazing text tutorial with title "<<title<<endl;
      cout<<"Ratings of this text tutorial: "<<rating<<" out of 5 stars"<<endl;
      cout<<"No of words in this text tutorial is: "<<words<<" words"<<endl;
         }
};

int main(){
    string title;
    float rating, vlen;
    int words;

    // for Code With Harry Video
    title = "Django tutorial";
    vlen = 4.56;
    rating = 4.89;
    CWHVideo djVideo(title, rating, vlen);

    // for Code With Harry Text
    title = "Django tutorial Text";
    words = 433;
    rating = 4.19;
    CWHText djText(title, rating, words);

    CWH* tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}

// class standard
// {
// public:

//     string name;
//     int roll;
//     float marks;
//     char grade;

//     standard(string n, float m, char g, int r)
//     {
//         name=n;
//         marks=m;
//         grade=g;
//         roll=r;
//     }

//     virtual void show(void)
//     {

//     }
// };

// class internal : public standard
// {
// public:
//     char subject;

//     internal(char s,string n, float m, char g, int r): standard(n,m,g,r){
//         subject=s;
//     }
//     void show(void)
//     {
//         cout<<"Name of the student : "<<name;
//         cout<<"Subject Name : "<<subject;
//         cout<<"Marks in" <<subject<<" are : "<<marks<<" out of 100";
//         cout<<"Overall internal grage is : "<<grade;

//     }
// };

// class External : virtual public standard
// {
// public:
//     string Sportsname;

//     External(string sn,string n, float m, char g, int r): standard(n,m,g,r){
//         Sportsname=sn;
//     }
//     void show(void)
//     {
//         cout<<"Name of the student : "<<name;
//         cout<<"Sport played : "<<Sportsname;
//         cout<<"Points in" <<Sportsname<<" are : "<<marks<<" out of 100";
//         cout<<"Overall External grage is : "<<grade;

//     }
// };

// class overall : public standard
// {
// public:
//     string grades;
//     int percent;
//     string result;

//     overall(string gr,string rs,int p,string n, float m, char g, int r): standard(n,m,g,r)
//     {
//         grades=gr;
//         percent=p;
//         result=rs;
//     }
//     void show(void)
//     {
//         cout<<"Overall grade is : "<<grades;
//         cout<<"Final percentage is : "<<percent<<"%";
//         cout<<"Result : "<<result; 
//     }
// };


// int main()
// {
//     string name;
//     int roll;
//     float marks;
//     char grade;
//     string subject;
//     string Sportsname;
//     string grades;
//     int percent;
//     string result;

//     // standard("Uday", 88.4, 1, 417);
//     internal(1,"Uday", 88.4, 1, 417);
//     internal.show();
// }
