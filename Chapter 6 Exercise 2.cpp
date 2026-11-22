// Chapter 6 Exercise 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

void fahrenheit_to_celcius(double farhrenheit)
{
	double celcius = (farhrenheit - 32) * 5 / 9;
	cout << farhrenheit << " degrees fahrenheit is equal to " << celcius << " degrees celcius." << endl;
}
int main()
{
	int fahrenheit = 0;
	cout << "Enter a temperature in farhrenheit: ";
	cin >> fahrenheit;
	fahrenheit_to_celcius(fahrenheit);

	cout << "\nFahrenheit to celcius conversion table\n";
	cout << left << setw(15) << "Fahrenheit" << setw(15) << "Celcius" << endl;
	cout << "----------------------------------" << endl;
	for (int fahrenheit = 1; fahrenheit <= 100; fahrenheit++)
	{
		double celcius = (fahrenheit - 32) * 5 / 9;
		cout << left << setw(15) << fahrenheit << setw(15) << celcius << endl;
	}

	return 0;
}
