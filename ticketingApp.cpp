#pragma once

#include <iostream>
#include <string>

#include "EventLocation.h"
#include "Event.h"


using namespace std;


int main()
{
   //testing for the EventLocation class
    EventLocation firstLocation(1, "Arena Nationala", 57000, 40, true, 4, "Bulevardul Basarbia", "Bucharest");
    EventLocation secondLocation(2, "Stadion Arc de Triumf" , 900, 20, false, 2, "Bulevardul Kiseleff", "Bucharest");
    firstLocation.isValidLocation();
    firstLocation.displayLocation();
    secondLocation.isValidLocation();
    secondLocation.displayLocation();
    secondLocation.displayNumberOfLocations();

    //testing for the Event class
    Event firstEvent(1, "Concert", 2023, "December", 14, "Enjoy the music", 100, false);
    Event secondEvent(2, "Hackathon", 2024, "January", 20, "Test your coding skills", 50, true);
    Event thirdEvent(3, "Concert", 2023, "December", 14, "Enjoy the music", 100, false);

    thirdEvent.checkForDuplicates();

    firstEvent.isValidEvent();
    firstEvent.displayEvent();
    secondEvent.isValidEvent();
    secondEvent.displayEvent();

    secondEvent.numberOfEvents();


    return 0;
}
