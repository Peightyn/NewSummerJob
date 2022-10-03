// NewSummerJob.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Name: Peightyn Boyd
//Date: 9/15/2022
//Program Title: NewSummerJob 
//Program Description: Using the program to find the total wage, and to allocate percents of the wage 
//for certain expenses inputted by the user. 


#include <iostream>
#include <string>
#include <iomanip>

using namespace std; 

//Named Constants
const double TAX_PERCENT = 0.15; 

int main()
{
	//Variable Declarations
	string name; 
	double hourlyRate, hoursWorked, totalWage; 
	double shoppingPercent, entertainmentPercent, savingsPercent; 
	double taxTotal, shoppingTotal, entertainmentTotal, savingsTotal, remainderTotal; 

	//Program Title and Description for the User
	cout << "Program Title: \'NewSummerJob\' " << endl; 
	cout << "Using the program to find the total wage, and to allocate percents of the wage" << endl;
	cout << "for certain expenses inputted by the user." << endl; 
	cout << endl; 


	//User Input 

	cout << "Enter your Full Name: "; 
	getline(cin, name); //allows you to enter your full name all at once
	cout << endl; 

	cout << "Enter your Hourly Pay Rate: $"; 
	cin >> hourlyRate; 
	cout << endl; 

	cout << "Enter the Number of Hours Worked: "; 
	cin >> hoursWorked; 
	cout << endl;

	cout << "Enter the Percentage you want to allocate to \'Shopping\' for example (0.10 for 10%): ";
	cin >> shoppingPercent;
	cout << endl; //allows person to allocate there own budgets instead of having constants, allows room for customization/change

	cout << "Enter the Percentage you want to allocate to \'Entertainment\' for example (0.10 for 10%): ";
	cin >> entertainmentPercent;
	cout << endl;
	
	cout << "Enter the Percentage you want to allocate to \'Savings\' for example (0.10 for 10%): ";
	cin >> savingsPercent;
	cout << endl;


	//Calculations
	totalWage = hourlyRate * hoursWorked; 
	taxTotal = totalWage * TAX_PERCENT; 
	shoppingTotal = totalWage * shoppingPercent; //takes the percentage inputted and multiplies it by the totalWage to find allocated monetary value
	entertainmentTotal = totalWage * entertainmentPercent; 
	savingsTotal = totalWage * savingsPercent; 
	remainderTotal = totalWage - (taxTotal + shoppingTotal + entertainmentTotal + savingsTotal);
	//to find the remainder, you have to subtract the totals since the percentages are not constants
	//in this program

	system("cls");

	//Output to the Screen 

	cout << fixed << showpoint << setprecision(2);
	//makes a fixed format, where all the data outputted will be in line and formatted the same. 

	cout << setw(25) << left << "Name: " << right << name << endl; 
	//all output information is automatically right adjusted so you have to tell the program when you want it left adjusted
	//and then once you are left adjusted you have to tell it when to go back to the original adjustment 
	cout << setw(25) << left << "Wages: " << setw(1) << "$" << right << totalWage << endl;
	cout << setw(25) << left << "Taxes: " << setw(1) << "$" << right << taxTotal << endl;
	cout << setw(25) << left << "Shopping: " << setw(1) << "$" << right << shoppingTotal << endl;
	cout << setw(25) << left << "Entertainment: " << setw(1) << "$" << right << entertainmentTotal << endl;
	cout << setw(25) << left << "Savings:: " << setw(1) << "$" << right << savingsTotal << endl;
	cout << setw(25) << left << "Remainder: " << setw(1) << "$" << right << remainderTotal << endl;

	return 0; 

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
