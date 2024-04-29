#pragma once
#include <iostream>
#include <string>
class Weather
{
private:
	std::string city = "Киров"; //  Киров
	double lon = 49.6601; // 49.6601
	double lat = 58.5966; // 58.5966
	double temperature = 5.69; // 5.69
	std::string weather = "дождь"; // дождь
	double windSpeed = 4.27; // 4.27
	int clouds = 100; // 100

public:
	Weather(std::string, double, double, double, std::string, double, int);

};

