#pragma once

#include<iostream>
#include <string>
#include "Event.h"

using namespace std;

class CharityEvent : public Event
{	
private:
	string charityName;
	string cause;
	int targetDonationAmount;


public:
	// default constructor
	CharityEvent() : Event(), charityName(""), cause(""), targetDonationAmount(0)
	{

	};

	// constructor with parameters
	CharityEvent(int eventId, const std::string& name, int year, const std::string& month, int day,
		const std::string& description, int price, bool isFamilyFriendly,
		const std::string& charityName, const std::string& cause, int targetDonation)
		: Event(eventId, name, year, month, day, description, price, isFamilyFriendly),
		charityName(charityName), cause(cause), targetDonationAmount(targetDonation)
	{

	};

	// destructor
	~CharityEvent()
	{
		
	};

    // getters
    std::string getCharityName() const {
        return charityName;
    }

    std::string getCause() const {
        return cause;
    }

    int getTargetDonation() const {
        return targetDonationAmount;
    }

    // setters
    void setCharityName(const std::string& charityName) {
        this->charityName = charityName;
    }

    void setCause(const std::string& cause) {  
        this->cause = cause;
    }

    void setTargetDonation(int targetDonationAmount) {
        
        if (targetDonationAmount >= 0)
        { 
            this->targetDonationAmount = targetDonationAmount;
        }
        else {
            cout << "Invalid target donation amount. Please enter a non-negative value.";
        }
    }




};
