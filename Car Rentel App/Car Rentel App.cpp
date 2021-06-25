// Car Rentel App.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <Windows.h>
#include <fstream>
using namespace std;

int main()
{
	char wc;
	fstream welcome;
	welcome.open("welcome.txt", ios::in);
	while (welcome.get(wc))
	{
		cout << wc;
	}
	Sleep(1000);
	cout << "\nStarting up the program..\n";
	Sleep(1000);
	cout << "Loading up file please wait...\n";
	Sleep(1000);
	system("cls");
	string pass;
	string real_pass;
	string bypass;
	string name;
	string car_number;
	int days;
	int price;
	char choice;
	char details;
	fstream password;
	password.open("password.txt", ios::in);
	password >> real_pass;
	password.close();
	cout << "\t\t\t CAR RENTAL SYSYTEM \n";
	cout << "\t\t\t------------------------\n";
	cout << "\t\t\t\t LOGIN\n";
	cout << "\t\t\t------------------------\n";
	cout << "\t\t Enter Your Password :- ";
	cin >> pass;
	if (pass == real_pass)
	{
		cout << "\t\t\t Access Granted\n";
		system("pause");

		system("cls");
		cout << "\t\t\t Please Enter Your Name :- ";
		cin >> name;
		cout << "\t\t\t Please Select a Car\n";
		cout << "\t\t\t Enter 'A' for Tesala 2011\n";
		cout << "\t\t\t Enter 'B' for Hyundai 2015\n";
		cout << "\t\t\t Enter 'C' for Ford 2017\n";
		cout << "\n\t\t\t Choosea car from the above option :- ";
		cin >> choice;
		system("cls");
		if (choice == 'A')
		{
			price = 50;
			fstream choices;
			choices.open("A.txt", ios::in);
			while (choices.get(details))
			{
				cout << details;
			}
			Sleep(5000);
			cout << "--------------------------------------------------------------------------\n";
			cout << "Please provide following information\n";
			cout << "Please select a Car No. :- ";
			cin >> car_number;
			cout << "No. of days you wish to rent a car :- ";
			cin >> days;
			Sleep(1000);
			system("cls");
			cout << "Calculating  rent Please wait...\n";
			Sleep(5000);
			cout << "\t\t\t  Car Rental - Customer Invoice\n";
			cout << "\t\t\t///////////////////////////////////////////////////////////\n";
			cout << "\t\t\t	| Invoice No. :------------------ | #Cnb81353 |\n";
			cout << "\t\t\t	| Customer Name : ----------------| " << name << " |\n";
			cout << "\t\t\t	| Car Model : --------------------| " << choice << "|\n";
			cout << "\t\t\t	| Car No. : ----------------------| " << car_number << " |\n";
			cout << "\t\t\t	| Number of days : -------------- | " << days << "|\n";
			cout << "\t\t\t	| Your Rental Amount is : --------| " << price * days << " |\n";
			cout << "\t\t\t	| Caution Money : ----------------| 0 |\n";
			cout << "\t\t\t	| Advanced : -------------------- | 0 |\n";
			cout << "\t\t\t	________________________________________________________\n";
			cout << "\n";
			cout << "\t\t\t	| Total Rental Amount is : ------ | " << price * days << " |\n";
			cout << "\t\t\t	________________________________________________________\n";
			cout << "\t\t\t	# This is a computer generated invoce and it does not\n";
			cout << "\t\t\t	require an authorised signture #\n";
			cout << "\n";
			cout << "\t\t\t///////////////////////////////////////////////////////////\n";
			cout << "\t\t\t	You are advised to pay up the amount before due date.\n";
			cout << "\t\t\t	Otherwise penelty fee will be applied\n";
			cout << "\t\t\t///////////////////////////////////////////////////////////\n";
			system("pause");
		}
		else if (choice == 'B')
		{
			price = 60;
			fstream choices;
			choices.open("B.txt", ios::in);
			while (choices.get(details))
			{
				cout << details;
			}
			Sleep(5000);
			cout << "--------------------------------------------------------------------------\n";
			cout << "Please provide following information\n";
			cout << "Please select a Car No. :- ";
			cin >> car_number;
			cout << "No. of days you wish to rent a car :- ";
			cin >> days;
			Sleep(1000);
			system("cls");
			cout << "Calculating  rent Please wait...\n";
			Sleep(5000);
			cout << "\t\t\t  Car Rental - Customer Invoice\n";
			cout << "\t\t\t///////////////////////////////////////////////////////////\n";
			cout << "\t\t\t	| Invoice No. :------------------ | #Cnb81353 |\n";
			cout << "\t\t\t	| Customer Name : ----------------| " << name << " |\n";
			cout << "\t\t\t	| Car Model : --------------------| " << choice << "|\n";
			cout << "\t\t\t	| Car No. : ----------------------| " << car_number << " |\n";
			cout << "\t\t\t	| Number of days : -------------- | " << days << "|\n";
			cout << "\t\t\t	| Your Rental Amount is : --------| " << price * days << " |\n";
			cout << "\t\t\t	| Caution Money : ----------------| 0 |\n";
			cout << "\t\t\t	| Advanced : -------------------- | 0 |\n";
			cout << "\t\t\t	________________________________________________________\n";
			cout << "\n";
			cout << "\t\t\t	| Total Rental Amount is : ------ | " << price * days << " |\n";
			cout << "\t\t\t	________________________________________________________\n";
			cout << "\t\t\t	# This is a computer generated invoce and it does not\n";
			cout << "\t\t\t	require an authorised signture #\n";
			cout << "\n";
			cout << "\t\t\t///////////////////////////////////////////////////////////\n";
			cout << "\t\t\t	You are advised to pay up the amount before due date.\n";
			cout << "\t\t\t	Otherwise penelty fee will be applied\n";
			cout << "\t\t\t///////////////////////////////////////////////////////////\n";
			system("pause");
		}
		else if (choice == 'C')
		{
			price = 40;
			fstream choices;
			choices.open("C.txt", ios::in);
			while (choices.get(details))
			{
				cout << details;
			}
			Sleep(5000);
			cout << "--------------------------------------------------------------------------\n";
			cout << "Please provide following information\n";
			cout << "Please select a Car No. :- ";
			cin >> car_number;
			cout << "No. of days you wish to rent a car :- ";
			cin >> days;
			Sleep(1000);
			system("cls");
			cout << "Calculating  rent Please wait...\n";
			Sleep(5000);
			cout << "\t\t\t  Car Rental - Customer Invoice\n";
			cout << "\t\t\t///////////////////////////////////////////////////////////\n";
			cout << "\t\t\t	| Invoice No. :------------------ | #Cnb81353 |\n";
			cout << "\t\t\t	| Customer Name : ----------------| " << name << " |\n";
			cout << "\t\t\t	| Car Model : --------------------| " << choice << "|\n";
			cout << "\t\t\t	| Car No. : ----------------------| " << car_number << " |\n";
			cout << "\t\t\t	| Number of days : -------------- | " << days << "|\n";
			cout << "\t\t\t	| Your Rental Amount is : --------| " << price * days << " |\n";
			cout << "\t\t\t	| Caution Money : ----------------| 0 |\n";
			cout << "\t\t\t	| Advanced : -------------------- | 0 |\n";
			cout << "\t\t\t	________________________________________________________\n";
			cout << "\n";
			cout << "\t\t\t	| Total Rental Amount is : ------ | " << price * days << " |\n";
			cout << "\t\t\t	________________________________________________________\n";
			cout << "\t\t\t	# This is a computer generated invoce and it does not\n";
			cout << "\t\t\t	require an authorised signture #\n";
			cout << "\n";
			cout << "\t\t\t///////////////////////////////////////////////////////////\n";
			cout << "\t\t\t	You are advised to pay up the amount before due date.\n";
			cout << "\t\t\t	Otherwise penelty fee will be applied\n";
			cout << "\t\t\t///////////////////////////////////////////////////////////\n";
			system("pause");
		}
		else
		{
			cout << "Please Enter vaid choice";
		}
	}
	else
	{
	cout << "Wrong Password";
	}
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
