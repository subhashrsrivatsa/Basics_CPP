//============================================================================
// Name        : Basics_CPP.cpp
// Author      : Subhash SRIVATSA
// Version     :
// Copyright   : @ Programming
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

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

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	display();
	Calculator();
	Sizes();
	Characters();
	return 0;
}
