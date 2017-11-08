#include <iostream>
#include <iomanip>
#include "Celsius.h"

using namespace std;

/*
function to help printing table heder
*/
void printHeder()
{
	cout << '|' << internal << setw(39) << setfill('-') << '|' << endl;
}

/*
function to help printing line from the table
*/
void printLine(char* category, const Celsius& cTemperature, const Fahrenheit& fTemperature)
{
	cout << '|' << left << setw(20) << setfill(' ') << category << '|'
		<< setw(5) << cTemperature << '|'
		<< setw(5) << fTemperature << '|' << endl;
}

void main()
{
	Celsius cWaterBoiling(100);
	Fahrenheit fWaterBoiling(cWaterBoiling);

	Fahrenheit fWaterFreezing(32);
	Celsius cWaterFreezing;
	cWaterFreezing = static_cast<Celsius>(fWaterFreezing);

	Fahrenheit fAbsoluteZero(459.67);
	Celsius cAbsoluteZero;
	cAbsoluteZero = static_cast<Celsius>(fAbsoluteZero);

	printHeder();
	printLine("Water boiling point", cWaterBoiling, fWaterBoiling);
	printLine("Water freezing point", cWaterFreezing, fWaterFreezing);
	printLine("Absolute zero", cAbsoluteZero, fAbsoluteZero);
	printHeder();
}