#pragma once
#include <iostream>
#include <string>

#include "ticketingApp.cpp"

using namespace std;

enum SeatCategory { VIP = 1, PREMIUM = 2, STANDARD = 3, FAMILY = 4 };
class EventLocation{
private:
    const int locationId = 0;
	string locationName;
    int capacity;
	int totalRows;
    bool hasVip;
    int seatCategory;
    string address;
    string city;

	static int NO_LOCATIONS ;
	const static int MIN_CAPACITY = 1000;

public:
	EventLocation():locationId(1) //default constructor
	{
		locationName = "";
		capacity = 0;
		totalRows = 0;
		hasVip = false;
		seatCategory = 0;
		address = "";
		city = "";
	}

	EventLocation(int id, string locationName, int capacity, int totalRows, bool hasVip, int seatCategory, string address, string city) :locationId(id) //constructor with parameters
	{
		this->locationName = locationName;
		this->capacity = capacity;
		this->totalRows = totalRows;
		this->hasVip = hasVip;
		this->seatCategory = seatCategory;
		this->address = address;
		this->city = city;
		NO_LOCATIONS++;
	}

	~EventLocation() //destructor with the reduction of static variable
	{
		NO_LOCATIONS--;
	}

	//getters
	string getLocationName()
	{
		return locationName;
	}
	int getCapacity()
	{
		if(capacity < MIN_CAPACITY)
		{
			cout << "The capacity of the location is too small!" << endl;
			return 0; 
		}
		else
		{
			return capacity;
		}
	}
	bool getHasVip()
	{
		return hasVip;
	}
	int getSeatCategory()
	{
		return seatCategory;
	}
	string getAddress()
	{
		return address;
	}
	string getCity()
	{
		return city;
	}
	int getTotalRows()
	{
		return totalRows;
	}

	//setters


	void setTotalRows(int totalRows)
	{
		this->totalRows = totalRows;
	}
	void setLocationName(string locationName)
	{
		this->locationName = locationName;
	}
	void setCapacity(int capacity)
	{
		this->capacity = capacity;
	}
	void setHasVip(bool hasVip)
	{
		this->hasVip = hasVip;
	}
	void setSeatCategory(int seatCategory)
	{
		this->seatCategory = seatCategory;
	}
	void setAddress(string address)
	{
		this->address = address;
	}
	void setCity(string city)
	{
		this->city = city;
	}

	//overloading the operator <<
	ostream& operator<< (ostream& dev, const EventLocation& E) {
		os << "Location id: " << eventLocation.locationId << endl;
		os << "Location name: " << eventLocation.locationName << endl;
		os << "Capacity: " << eventLocation.capacity << endl;
		os << "Total rows: " << eventLocation.totalRows << endl;
		os << "Has VIP: " << eventLocation.hasVip << endl;
		os << "Seat category: " << eventLocation.seatCategory << endl;
		os << "Address: " << eventLocation.address << endl;
		os << "City: " << eventLocation.city << endl;
		os << " " << endl;
		return os;
	}

	//overloading the operator >>
	istream& operator>> (istream& dev, EventLocation& E)
	{
		cout << "Enter the location name: ";
		dev >> E.locationName;
		cout << "Enter the capacity: ";
		dev >> E.capacity;
		cout << "Enter the total rows: ";
		dev >> E.totalRows;
		cout << "Enter if the location has VIP: ";
		dev >> E.hasVip;
		cout << "Enter the seat category: ";
		dev >> E.seatCategory;
		cout << "Enter the address: ";
		dev >> E.address;
		cout << "Enter the city: ";
		dev >> E.city;
		cout << " " << endl;
		return dev;
	}

	//method for validating the attributes of the event location
	bool isValidLocation()
	{
		if (locationName == "" || capacity <= MIN_CAPACITY || address == "" || city == "")
		{
			cout << "Invalid location!" << endl;
			return false;
		}
		else
		{
			cout << "Valid location!" << endl;
			return true;
		}
		cout << " " << endl;

	}

	//method for displaying the attributes of the event location
	void displayLocation()
	{
		cout << "Location id: " << locationId << endl;
		cout << "Location name: " << locationName << endl;
		cout << "Capacity: " << capacity << endl;
		cout << "Total rows: " << totalRows << endl;
		cout << "Has VIP: " << hasVip << endl;
		cout << "Seat category: " << seatCategory << endl;
		cout << "Address: " << address << endl;
		cout << "City: " << city << endl;
		cout << " " << endl;
	}

	//method for displaying the number of locations
	void displayNumberOfLocations()
	{
		cout << "Number of locations: " << NO_LOCATIONS << endl;
		cout << " " << endl;
	}
};

//initializing the static variable
int EventLocation::NO_LOCATIONS = 0;