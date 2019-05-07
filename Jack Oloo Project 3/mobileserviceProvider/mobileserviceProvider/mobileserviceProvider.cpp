// mobileserviceProvider.cpp : Defines the entry point for the console application.
//This program calculates the customer's monthly bill and display amount due to be paid

#include "stdafx.h"
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;


int main()
{

	const double PACKAGE_A = 39.99, //stores package A and its price in dollars
		PACKAGE_B = 59.99, //stores package B and its price in dollars
		PACKAGE_C = 69.99; //stores package C and its price in dollars

	char packageName;  //stores package input by customer

	int packageAmins = 450; //stores minutes of package A
	int packageBmins = 900; //stores minutes of package B
	int custmins; //stores the minutes input by customer
	int additionalmins;
	double monthlybill;


	//ask the customer to enter minutes used
	cout << "Please enter the minutes you used  \n";
	cin >> custmins;
	//cin.ignore();
	//ask customer to input package purchased
	cout << "Please input the package you purchased as either A, B OR C \n";
	//packageName = cin.get();
	cin >> packageName;


	//validate the package input to make sure correct input 
	if (packageName != 'A' && packageName != 'B' && packageName != 'C')
	{
		cout << "Enter a valid package name; either A, B or C \n";
	}

	//display correct monthly bill if input is A
	else if (packageName == 'A')
	{
		if (custmins <= 450)
		{


			monthlybill = PACKAGE_A;
			cout << "Monthly bill is: " << setprecision(2) << fixed << monthlybill << endl;
		}
		else if (custmins > 450) //display computed monthly bill if minutes was in excess for package A
		{
			additionalmins = custmins - packageAmins;
			monthlybill = PACKAGE_A + (additionalmins * 0.45);
			cout << "Monthly bill is: " << setprecision(2) << fixed << monthlybill << endl;
		}
	}

	//display correct monthly bill if input is B
	else if (packageName == 'B')
	{

		if (custmins <= 900)
		{


			monthlybill = PACKAGE_B;
			cout << "Monthly bill is: " << setprecision(2) << fixed << monthlybill << endl;
		}
		else if (custmins > 900) //display computed monthly bill if minutes was in excess for package B
		{
			additionalmins = custmins - packageBmins;
			monthlybill = PACKAGE_B + (additionalmins * 0.40);
			cout << "Monthly bill is: " << setprecision(2) << fixed << monthlybill << endl;
		}

	}
	//display correct monthly bill if input is C
	else if (packageName == 'C')
	{

		cout << "Monthly bill is: " << PACKAGE_C << endl;
	}

	system("pause");
	return 0;
}