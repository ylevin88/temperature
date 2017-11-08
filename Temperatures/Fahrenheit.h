#pragma once
#include <iostream>

const double F_CONVERT_NULT = 5.0 / 9.0;
const double C_CONVERT_NULT = 9.0 / 5.0;
const unsigned int CONVERT_NUMBER = 32;

class Celsius;

/*
class that implements the Fahrenheit temperature measure
*/
class Fahrenheit
{
private:
	double m_temperature;
public:
	Fahrenheit();
	Fahrenheit(double temperature);
	explicit Fahrenheit(const Celsius&);
	~Fahrenheit();
	double getTemperature() const;
	void setTemperature(double temperature);
	friend std::ostream& operator<<(std::ostream&, const Fahrenheit&);
};

