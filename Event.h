#pragma once

#include<iostream>
#include <string>


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


	//overloading the operator <<
	ostream& operator<< (ostream& dev, const Event& E)
	{
		dev << "Event ID: " << E.eventId << endl;
		dev << "Event name: " << E.name << endl;
		dev << "Event year: " << E.year << endl;
		dev << "Event month: " << E.month << endl;
		dev << "Event day: " << E.day << endl;
		dev << "Event description: " << E.description << endl;
		dev << "Event price: " << E.price << endl;
		dev << "Event is family friendly: " << E.isFamilyFriendly << endl;
		dev << " " << endl;
		return dev;
	}

//overloading the operator >>

istream& operator>> (istream& dev, Event& E)
	{
		cout << "Enter event ID: ";
		dev >> E.eventId;
		cout << "Enter event name: ";
		dev >> E.name;
		cout << "Enter event year: ";
		dev >> E.year;
		cout << "Enter event month: ";
		dev >> E.month;
		cout << "Enter event day: ";
		dev >> E.day;
		cout << "Enter event description: ";
		dev >> E.description;
		cout << "Enter event price: ";
		dev >> E.price;
		cout << "Enter if event is family friendly: ";
		dev >> E.isFamilyFriendly;
		cout << " " << endl;
		return dev;
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
