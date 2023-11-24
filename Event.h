#pragma once

#include<iostream>
#include <string>

#include "EventLocation.h"

class Event
{
private:
	int eventId;
	string name;
	int year;
	string month;
	int day;
	string description;
	int price;
	bool isFamilyFriendly;

	static int NO_EVENTS;

public:

	//default constructor
	Event() 
	{
			eventId = 1;
			name = "";
			year = 2023;
			month = "";
			day = 1;
			description = "event description";
			price = 0;
			isFamilyFriendly = true;
	}

	//constructor with parameters
	Event(int eventId, string name, int year, string month, int day, string description, int price, bool isFamilyFriendly)
	{
		this->eventId = eventId;
		this->name = name;
		this->year = year;
		this->month = month;
		this->day = day;
		this->description = description;
		this->price = price;
		this->isFamilyFriendly = isFamilyFriendly;
		NO_EVENTS++;
	}
	//destructor with the reduction of static variable
	~Event()
	{
		NO_EVENTS --;
	}

	//getters
	int getEventId() const
	{
		return eventId;
	}
	string getName() const
	{
		return name;
	}
	int getYear() const
	{
		return year;
	}
	string getMonth() const
	{
		return month;
	}
	int getDay() const
	{
		return day;
	}
	string getDescription() const
	{
		return description;
	}
	int getPrice() const
	{
		return price;
	}
	bool getIsFamilyFriendly() const
	{
		return isFamilyFriendly;
	}

	//seters
	void setEventId(int eventId)
	{
		this->eventId = eventId;
	}
	void setName(string name)
	{
		this->name = name;
	}
	void setYear(int year)
	{
		this->year = year;
	}
	void setMonth(string month)
	{
		this->month = month;
	}
	void setDay(int day)
	{
		this->day = day;
	}
	void setDescription(string description)
	{
		this->description = description;
	}
	void setPrice(int price)
	{
		this->price = price;
	}
	void setIsFamilyFriendly(bool isFamilyFriendly)
	{
		this->isFamilyFriendly = isFamilyFriendly;
	}

	//method for validating an event
	bool isValidEvent() const
	{
		if (name == "" || year <= 2023 || month == "" || day > 31 || day < 1 || description == "" || price == 0)
		{
			cout << "Invalid event" << endl;
			return false;
		}
		else
		{
			cout << "Valid event" << endl;
			return true;
		}
		cout << " " << endl;
	}
	
	//method for checking if an event is a duplicate
	void checkForDuplicates() const
	{
		if (name == name)
		{
			cout << "Event already exists. Deleting curent event" << endl << endl;
			this->~Event();
			return;

		}
		else
		{
			cout << "Event is not a duplicate" << endl;
		}
		cout << " " << endl;
	}

	//method for displaying an event
	void displayEvent() const
	{
		cout << "Event ID: " << eventId << endl;
		cout << "Event name: " << name << endl;
		cout << "Event year: " << year << endl;
		cout << "Event month: " << month << endl;
		cout << "Event day: " << day << endl;
		cout << "Event description: " << description << endl;
		cout << "Event price: " << price << endl;
		cout << "Event is family friendly: " << isFamilyFriendly << endl;
		cout << " " << endl;
	}

	//method for displaying the number of events
	void numberOfEvents() const
	{
		cout << "Number of events: " << NO_EVENTS << endl;
		cout << " " << endl;
	}


};

//initializing the static variable
int Event::NO_EVENTS = 0;
