//============================================================================
// Name        : Basics_CPP.cpp
// Author      : Subhash SRIVATSA
// Version     :
// Copyright   : @ Programming
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string.h>
#include "All_Functions_Definition.hpp"

using namespace std;

int main() {
	std::string eof ="\n-----------------*******-----------------"; //end of function
	display();
	cout<<eof;
	Calculator();
	cout<<eof;
	Sizes_Datatypes();
	cout<<eof;
	Characters();
	cout<<eof;
	Area_Circle();
	cout<<eof;
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
	cout<<eof;
	cout<<"\n Greatest of 2 Numbers using IF-ELSE loop\n";
	greatest();
	cout<<eof;
	cout<<"\n C++ function to demonstrate SUM and AVG cases\n";
	sumnavgint();
	cout<<eof;
	cout<<"\n C++ function to demonstrate SWITCH cases\n";
	studentGrade();
	cout<<eof;
	int a=10, b=20;
	cout<<"\nThe values of a and b before swapping : "<<a<<" "<<b;
	swap_val(a,b);
	cout<<eof;
	cout<<"\nThe values of a and b before swapping : "<<a<<" "<<b;
	swap_ptr(&a,&b);
	cout<<"\nThe values of a and b after swapping : "<<a<<" "<<b;
	cout<<eof;
	cout<<"\nThe values of a and b before swapping : "<<a<<" "<<b;
	swap_ref(a, b);
	cout<<"\nThe values of a and b after swapping : "<<a<<" "<<b;
	cout<<eof;
	cout<<"\nARRAYS in C++:";
	matrix_addition();
	cout<<eof;
	cout<<"\nDemonstration of C++ Strings\n";
	string_demo();
	cout<<eof;
	cout<<"\nDemonstration of Pointers in C++\n";
	ptr_demo();
	cout<<eof;
	time_demo();
	cout<<eof;
	return 0;
}
