#include "Celsius.h"
#include <iomanip>

Celsius::Celsius() :m_temperature(0)
{
}

Celsius::Celsius(double temperature) : m_temperature(temperature)
{
}

Celsius::Celsius(const Fahrenheit & fTemperature)
{
	m_temperature = (fTemperature.getTemperature() - CONVERT_NUMBER) * F_CONVERT_NULT;//TO DO change to consts
}


Celsius::~Celsius()
{
}

double Celsius::getTemperature() const
{
	return m_temperature;
}

void Celsius::setTemperature(double temperature)
{
	m_temperature = temperature;
}

std::ostream & operator<<(std::ostream & os, const Celsius & cTemperature)
{
	os << std::setprecision(3) << cTemperature.m_temperature << char(248) << " C";
	return os;
}
