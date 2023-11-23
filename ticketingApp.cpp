#pragma once

#include <iostream>
#include <string>

#include "EventLocation.h"


using namespace std;


int main()
{
    EventLocation firstLocation(1, "Arena Nationala", 57000, 40, true, 4, "Bulevardul Basarbia", "Bucharest");
    EventLocation secondLocation(2, "Stadion Arc de Triumf" , 900, 20, false, 2, "Bulevardul Kiseleff", "Bucharest");
    firstLocation.isValidLocation();
    firstLocation.displayLocation();
    secondLocation.isValidLocation();
    secondLocation.displayLocation();
    secondLocation.displayNumberOfLocations();


    return 0;
}
