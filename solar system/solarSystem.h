class solarSystem
{
private:
	double mass;
	double volume;
	double diameter;
	double radius;
	
public:
	void setMass(double);
	double getMass();
	
	void setVolume(double);
	double getVolume();

	void setRadius(double);
	double getRadius();

	void calcVolume();
	void calcDiameter();
	void calcMass();
};