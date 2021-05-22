#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    string a=".2K19/CO/";
    int b=1;
    ofstream rollnumber;
     rollnumber.open ("Roll Number.txt");
    for (int i = 401; i < 421; i++)
    {
        rollnumber<<b<<a<<i<<endl;
        b++;
    }
        rollnumber.close();

        ifstream roll;
        string c, d;
        roll.open("Roll Number.txt");
        roll>>c>>d;
        cout<<c<<endl<<d;

        while(roll.eof()==0)
        {
            getline(roll,c);
            cout<<c<<endl;
        }


}

