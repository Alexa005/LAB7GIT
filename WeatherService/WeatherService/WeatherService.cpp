
#include "Service.h"
#include "JsonService.h"
#include "json.hpp"
#include <iostream>

int main()
{
    JsonService js;
    Weather w = js.getWeather("weather.json");

}


