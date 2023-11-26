#pragma once

#include<iostream>
#include<string>
#include<cmath>

using namespace std;

class Ticket
{

private:
	double ticketId;
	int seatNumber;
	int seatRow;
	int price;
	string section;
	string clientName;
	string clientEmail;

	static int NO_TICKETS;

public:
	//method to generate a random ticket id, placed before the constructor
	//  in order to be able to implement the method in the constructor
	void generateRandomTicketId()
	{
		double randomTicketId = rand() % 100000000 + 1;
		while (randomTicketId == ticketId)
		{
			generateRandomTicketId();
		}
		this->ticketId = randomTicketId;

	}
	//default constructor
	Ticket()
	{
		ticketId = 0;
		seatNumber = 0;
		seatRow = 0;
		price = 0;
		section = "";
		clientName = "";
		clientEmail = "";
	}
	//constructor with parameters
	Ticket(double ticketId, int seatNumber, int seatRow, int price, string section, string clientName, string clientEmail)
	{
		generateRandomTicketId();
		this->seatNumber = seatNumber;
		this->seatRow = seatRow;
		this->price = price;
		this->section = section;
		this->clientName = clientName;
		this->clientEmail = clientEmail;
		NO_TICKETS++;
	
	}
	//destructor with the decrement of NO_TICKETS
	~Ticket()
	{
		NO_TICKETS--;
	}

	//Overloading operators << and >>

	Ticket operator<<(Ticket const& obj)
	{
		Ticket res;
		 
		return res;
	}

	//getters

	double getTicketId()
	{
		return ticketId;
	}
	int getSeatNumber()
	{
		return seatNumber; 
	}
	int getSeatRow()
	{
		return seatRow;
	}
	int getPrice()
	{
		return price;
	}
	string getSection()
	{
		return section;
	}
	string getClientName()
	{
		return clientName;
	}
	string getClientEmail()
	{
		return clientEmail;
	}

	//setters 

	void setTicketId(double ticketId)
	{
		this->ticketId = ticketId;
	}
	void setSeatNumber(int seatNumber)
	{
		this->seatNumber = seatNumber;
	}
	void setSeatRow(int seatRow)
	{
		this->seatRow = seatRow;
	}
	void setPrice(int price)
	{
		this->price = price;
	}
	void setSection(string section)
	{
		this->section = section;
	}
	void setClientName(string clientName)
	{
		this->clientName = clientName;
	}
	void setClientEmail(string clientEmail)
	{
		this->clientEmail = clientEmail;
	}

	//overloading the operator >>
	istream& operator>> (istream& dev, Ticket& E)
	{
		cout << "Ticket ID: ";
		dev >> ticketId;
		cout << "Seat Number: ";
		dev >> seatNumber;
		cout << "Seat Row: ";
		dev >> seatRow;
		cout << "Price: ";
		dev >> price;
		cout << "Section: ";
		dev >> section;
		cout << "Client Name: ";
		dev >> clientName;
		cout << "Client Email: ";
		dev >> clientEmail;
		return dev;
	}

	//overloading the operator <<
	ostream& operator<< (ostream& dev, Ticket& E)
	{
		dev << "Ticket ID: " << ticketId << endl;
		dev << "Seat Number: " << seatNumber << endl;
		dev << "Seat Row: " << seatRow << endl;
		dev << "Price: " << price << endl;
		dev << "Section: " << section << endl;
		dev << "Client Name: " << clientName << endl;
		dev << "Client Email: " << clientEmail << endl;
		return dev;
	}

	//method for displaying a ticket
	void displayTicket()
	{
		cout << "Ticket ID: " << ticketId << endl;
		cout << "Seat Number: " << seatNumber << endl;
		cout << "Seat Row: " << seatRow << endl;
		cout << "Price: " << price << endl;
		cout << "Section: " << section << endl;
		cout << "Client Name: " << clientName << endl;
		cout << "Client Email: " << clientEmail << endl;
		cout << " " << endl;
	}

	
	void getNoTickets()
	{
		cout << "Number of tickets: " << NO_TICKETS << endl;
	}

};

//initializing the static variable
int Ticket::NO_TICKETS = 0;