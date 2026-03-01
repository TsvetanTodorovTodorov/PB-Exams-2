#include <iostream>
#include <string>

using namespace std;

int main()
{
	string name;
	getline(cin, name);
	string typeOfHall;
	getline(cin, typeOfHall);
	int boughtTickets;
	cin >> boughtTickets;

	double ticketPrice = 0.0;

	if (name == "A Star Is Born")
	{
		if (typeOfHall == "normal")
		{
			ticketPrice = 7.50;
		}
		else if (typeOfHall == "luxury")
		{
			ticketPrice = 10.50;
		}
		else if (typeOfHall == "ultra luxury")
		{
			ticketPrice = 13.50;
		}
	}
	else if (name == "Bohemian Rhapsody")
	{
		if (typeOfHall == "normal")
		{
			ticketPrice = 7.35;
		}
		else if (typeOfHall == "luxury")
		{
			ticketPrice = 9.45;
		}
		else if (typeOfHall == "ultra luxury")
		{
			ticketPrice = 12.75;
		}
	}
	else if (name == "Green Book")
	{
		if (typeOfHall == "normal")
		{
			ticketPrice = 8.15;
		}
		else if (typeOfHall == "luxury")
		{
			ticketPrice = 10.25;
		}
		else if (typeOfHall == "ultra luxury")
		{
			ticketPrice = 13.25;
		}
	}
	else if (name == "The Favourite")
	{
		if (typeOfHall == "normal")
		{
			ticketPrice = 8.75;
		}
		else if (typeOfHall == "luxury")
		{
			ticketPrice = 11.55;
		}
		else if (typeOfHall == "ultra luxury")
		{
			ticketPrice = 13.95;
		}
	}

	double income = boughtTickets * ticketPrice;

	cout.setf(ios::fixed);
	cout.precision(2);

	cout << name << " -> " << income << " lv." << endl;

	return 0;
}