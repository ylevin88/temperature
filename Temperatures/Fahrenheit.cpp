#include "Fahrenheit.h"
#include <iomanip>
#include "Celsius.h"


Fahrenheit::Fahrenheit()
{
}

Fahrenheit::Fahrenheit(double temperature) :m_temperature(temperature)
{
}

Fahrenheit::Fahrenheit(const Celsius & cTemperature)
{
	m_temperature = cTemperature.getTemperature() * C_CONVERT_NULT + CONVERT_NUMBER;
}


Fahrenheit::~Fahrenheit()
{
}

double Fahrenheit::getTemperature() const
{
	return m_temperature;
}

void Fahrenheit::setTemperature(double temperature)
{
	m_temperature = temperature;
}

std::ostream & operator<<(std::ostream & os, const Fahrenheit &fTemperature)
{
	os << std::setprecision(3) << fTemperature.m_temperature << char(248) << " F";
	return os;
}
