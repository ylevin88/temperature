#pragma once

#include "Fahrenheit.h"
#include <iostream>

/*
class that implements the Celsius temperature measure
*/
class Celsius
{
private:
	double m_temperature;
public:
	Celsius();
	Celsius(double temperature);
	explicit Celsius(const Fahrenheit&);
	~Celsius();
	double getTemperature() const;
	void setTemperature(double temperature);
	friend std::ostream& operator<<(std::ostream&, const Celsius&);
};

