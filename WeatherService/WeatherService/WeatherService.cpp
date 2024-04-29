
#include "Service.h"
#include "JsonService.h"
#include "json.hpp"
#include "XmlService.h"
#include "pugixml-1.13/src/pugixml.hpp"
#include <iostream>

int main()
{
	XmlService xs;
	Weather w = xs.getWeather("weather.xml");

}


