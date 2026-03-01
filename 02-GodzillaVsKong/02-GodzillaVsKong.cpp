#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double budget;
	cin >> budget;
	int actors;
	cin >> actors;
	double clothePricePerActor;
	cin >> clothePricePerActor;

	double decor = 0.1 * budget;
	double clothesPrice = actors * clothePricePerActor;

	if (actors > 150)
	{
		clothesPrice -= 0.1 * clothesPrice;
	}

	double expenses = decor + clothesPrice;
	double difference = abs(expenses - budget);

	cout.setf(ios::fixed);
	cout.precision(2);

	if (expenses > budget)
	{
		cout << "Not enough money!" << endl;
		cout << "Wingard needs " << difference << " leva more." << endl;
	}
	else
	{
		cout << "Action!" << endl;
		cout << "Wingard starts filming with " << difference << " leva left." << endl;
	}

	return 0;
}