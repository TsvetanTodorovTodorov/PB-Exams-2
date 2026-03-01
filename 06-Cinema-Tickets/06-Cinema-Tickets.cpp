#include <iostream>
#include <string>

using namespace std;

int main()
{
	string movie;
	getline(cin, movie);

	int boughTicketCounter = 0;
	double standardCounter = 0.0;
	double studentCounter = 0.0;
	double kidCounter = 0.0;

	while (movie != "Finish")
	{
		double availableSeats;
		cin >> availableSeats;

		double counterSeats = 0.0;

		string	ticketType;
		cin >> ticketType;

		cout.setf(ios::fixed);
		cout.precision(2);

		while (ticketType != "End")
		{
			
			if (ticketType == "standard")
			{
				boughTicketCounter++;
				standardCounter++;
			}
			else if (ticketType == "student")
			{
				boughTicketCounter++;
				studentCounter++;
			}
			else if (ticketType == "kid")
			{
				boughTicketCounter++;
				kidCounter++;
			}

			counterSeats++;

			if (counterSeats == availableSeats)
			{
				break;
			}

			cin >> ticketType;
		}

		double percentageFull = (counterSeats / availableSeats) * 100;

		cout << movie << " - " << percentageFull << "% full." << endl;

		cin.ignore();
		getline(cin, movie);
	}

	cout << "Total tickets: " << boughTicketCounter << endl;

	double standardPercentage = (standardCounter / boughTicketCounter) * 100;
	double studentPercentage = (studentCounter / boughTicketCounter) * 100;
	double kidPercentage = (kidCounter / boughTicketCounter) * 100;

	cout << studentPercentage << "% student tickets." << endl;
	cout << standardPercentage << "% standard tickets." << endl;
	cout << kidPercentage << "% kids tickets." << endl;

	return 0;
}