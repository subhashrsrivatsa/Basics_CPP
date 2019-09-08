//============================================================================
// Name        : Basics_CPP.cpp
// Author      : Subhash SRIVATSA
// Version     :
// Copyright   : @ Programming
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include <string.h>

void display()
{
	cout<<"\nHI.. I am a display method called from Main method\n";
}

void Calculator()
{
	int a=8,b=3;
	cout<<"\n\nSample Calculator DEMO\n";
	cout<<"SUM of "<<a<<" and "<<b<<" is : \t\t"<<(a+b);
	cout<<"\nDIFFERENCE of "<<a<<" and "<<b<<" is : \t"<<(a-b);
	cout<<"\nPRODUCT of "<<a<<" and "<<b<<" is : \t"<<(a*b);
	cout<<"\nDIFFERENCE of "<<a<<" and "<<b<<" is : \t"<<(a/b);

}

void Sizes()
{
	cout<<"\n\nThe sizes of different variables on my PC\n";
	cout<<"int : \t"<<sizeof(int);
	cout<<"\nlong : \t"<<sizeof(long);
	cout<<"\nchar : \t"<<sizeof(char);
	cout<<"\ndouble : "<<sizeof(double);
	cout<<"\nfloat : "<<sizeof(float);
}
void Characters()
{
	cout<<"\nThe Character set in the PC keyboard are\n";
	for(int i=32;i<128;i++)
	{
		cout<<(char) i;
	}
}

double Area_Circle()
{
	double r = 5;
	cout << "\nThe AREA of the circle for radius of "<<r<<" is : "<< 3.14*r*r;
	return 0;
}

double greatest()
{
	cout<<"Enter the two numbers of your choice\n";
	int a,b;
	cin>>a>>b;
	if(a>b){
		cout<<a<<" is the greatest number\n";
	}
	else if (a==b) {
		cout<<a<<" and "<<b<<" are equal\n";
	}
	else {
		cout<<b<<" is the greatest number\n";
	}
	return 0;
}

void studentGrade()
{
	cout<<"\nEnter the grades you obtained : ";
	char ch;
	cin>>ch;
	//std::toupper(ch);
	switch(ch)
	{
	case 'A':cout<<"\nCongrats....!!! You are among the toppers";
				break;
	case 'B':cout<<"\nOK...!!! Satisfactory";
				break;
	case 'C':cout<<"\nTime to Improve";
				break;
	case 'D':cout<<"\nYou have just escaped";
				break;
	default :cout<<"SORRY... Try next time";
				exit(0);
	}
}
void sumnavgint()
{
	int n,a[100],sum=0;
	cout<<"Enter the total numbers of your choice\n";
	cin>>n;
	cout<<"Enter the numbers\n";
	for(int i =0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i =0;i<n;i++)
	{
		sum+=a[i];
	}
	cout<<"\nThe SUM of the numbers is : "<<sum;
	cout<<"\nThe AVERAGE of the numbers is : "<<(sum/n);
}


int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	display();
	cout<<"\n-----------------*******-----------------";
	Calculator();
	cout<<"\n-----------------*******-----------------";
	Sizes();
	cout<<"\n-----------------*******-----------------";
	Characters();
	cout<<"\n-----------------*******-----------------";
	Area_Circle();
	cout<<"\n-----------------*******-----------------";
	cout<<"\nFOR loop demonstration in C++\n";
	cout<<"Enter the number of your choice : ";
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cout<<n<<" * "<<i<<" = "<<(n*i);
		cout<<"\n";
	}
	cout<<"-----------------*******-----------------";
	cout<<"\nWHILE loop demonstration in C++ for the same number : "<<n<<"\n";
	while(n>0)
	{
		cout<<n<<"\n";
		n--;
	}
	cout<<"-----------------*******-----------------";
	cout<<"\nDO-WHILE loop demonstration in C++ for the same number : "<<n<<"\n";
	do
	{
		n++;
		cout<<n<<"\n";
	}
	while(n<=5);
	cout<<"\n-----------------*******-----------------";
	cout<<"\n Greatest of 2 Numbers using IF-ELSE loop\n";
	greatest();
	cout<<"\n-----------------*******-----------------";
	cout<<"\n C++ function to demonstrate SUM and AVG cases\n";
	sumnavgint();
	cout<<"\n-----------------*******-----------------";
	cout<<"\n C++ function to demonstrate SWITCH cases\n";
	studentGrade();
	cout<<"\n-----------------*******-----------------";
	cout<<"\n-----------------*******-----------------";

	return 0;
}
