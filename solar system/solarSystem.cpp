#include "solarSystem.h"
#include <cmath>

//solarSystem{}

void solarSystem::setMass(double mass)
{
	this->mass = mass;
}

double solarSystem::getMass()
{
	return mass;
}

void solarSystem::setVolume(double volume)
{
	this->volume = volume;
}

double solarSystem::getVolume()
{
	return volume;
}

void solarSystem::setRadius(double radius)
{
	this->radius = radius;
}

double solarSystem::getRadius()
{
	return radius;
}

double solarSystem::getPI()
{
	return PI;
}

double calcVolume()
{
	return (4 / 3) * PI * pow(radius, 3);
}