/*
 * All_Functions_Implementation.cpp
 *
 *  Created on: Sep 15, 2019
 *      Author: chinni
 */
#include <iostream>

#include "All_Functions_Definition.hpp"

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

void Sizes_Datatypes()
{
	cout<<"\n\nThe sizes of different variables on my PC in BYTES are \n";
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

void swap_val(int a, int b)
{
	cout<<"\n C++ function to demonstrate Pass by Value function\n";
	int t;
	t=a;
	a=b;
	b=t;
	cout<<"\nThe values of a and b after swapping : "<<a<<" "<<b;
}

void swap_ptr(int *a, int *b)
{
	cout<<"\n C++ function to demonstrate Pass by Pointer function\n";
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

void swap_ref(int &x, int &y)
{
   int temp;
   temp = x; /* save the value at address x */
   x = y;    /* put y into x */
   y = temp; /* put x into y */

   return;
}
