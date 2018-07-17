#ifndef SOLARSYSTEM_H
#define SOLARSYSTEM_H

class solarSystem
{
private:
	double mass;
	double volume;
	double diameter;
	double radius;
	const double PI = 3.141592653589793;

public:
	void setMass(double);
	double getMass();
	
	void setVolume(double);
	double getVolume();

	void setRadius(double);
	double getRadius();

	double getPI();

	double calcVolume();
	// double calcDiameter();
	// double calcMass();
};

#endif