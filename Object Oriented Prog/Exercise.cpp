#include<iostream>
#include<cmath>
using namespace std;
/*
Create 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utility function and perfoms +, -, *, / and displays the results using another function.
    2. ScientificCalculator - Takes input of 2 numbers using a utility function and perfoms any four scientific operation of your chioice and displays the results using another function.

    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of Inheritance are you using?--Multiple
    Q2. Which mode of Inheritance are you using?--public simcal, public scientificcal
    Q3. Create an object of HybridCalculator and display results of simple and scientific calculator.
    Q4. How is code reusability implemented?
*/

class simcal
{
public:
	float a,b;
	void setnumbersimple();
	void resultsimple(void);
};

void simcal::setnumbersimple()
{
	cout<<"***Simple Calculator***"<<endl;
	cout<<"\nEnter the First number"<<endl;
	cin>>a;
	cout<<"Enter the Second number"<<endl;
	cin>>b;
}

void simcal::resultsimple()
{
	cout<<"The addition of two numbers are : "<<a+b<<endl;
	cout<<"The Substraction of two numbers are : "<<a-b<<endl;
	cout<<"The Multiplication of two numbers are : "<<a*b<<endl;
	cout<<"The Division of two numbers are : "<<a/b<<endl;
}

class scientificcal
{
public:
	float a,b;
	void setnumberscientific()
	{
	cout<<"\n***Scientical Calculator***"<<endl;
	cout<<"\nEnter the First number"<<endl;
	cin>>a;
	cout<<"Enter the Second number"<<endl;
	cin>>b;
}
	void resultscientific(void)
	{

	cout<<"The cos of first and second number are : "<<cos(a)<<" and "<<cos(b)<<endl;
	cout<<"The sin of first and second number are : "<<sin(a)<<" and "<<sin(b)<<endl;
	cout<<"The tan of first and second number are : "<<tan(a)<<" and "<<tan(b)<<endl;
	cout<<"The Square root of first and second number are : "<<sqrt(a)<<" and "<<sqrt(b)<<endl;
	
}
};

class hybridcal : virtual public simcal, virtual  public scientificcal
{

};

int main()
{
	hybridcal uday;
	uday.setnumbersimple();
	uday.resultsimple();
	uday.setnumberscientific();
	uday.resultscientific(); 
}
