#include "Weather.h"

Weather::Weather(std::string city, double lon, double lat, double temp, std::string weather, double wind, int cloud)
{
	this->city = city;
	this->clouds = cloud;
	this->lat = lat;
	this->lon = lon;
	this->temperature = temperature;
	this->weather = weather;
	this->windSpeed = windSpeed;
}
