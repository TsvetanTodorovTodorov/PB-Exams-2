#include <iostream>
#include <string>

using namespace std;

int main()
{
	int voucher;
	cin >> voucher;
	cin.ignore();
	string product;
	getline(cin, product);

	int movieCounter = 0;
	int productCounter = 0;



	while (product != "End")
	{
		char firstChar = product[0];
		char secondChar = product[1];

		int firstValue = (int)firstChar;
		int secondValue = (int)secondChar;

		int value = 0;

		if (product.length() > 8)
		{
			value = firstValue + secondValue;
			voucher -= value;
			if (voucher < 0)
			{
				break;
			}
			else {
				movieCounter++;
			}
		}
		else if (product.length() <= 8)
		{
			value = firstValue;
			voucher -= value;
			if (voucher < 0)
			{
				break;
			}
			else {
				productCounter++;
			}
		}

		getline(cin, product);
	}

	cout << movieCounter << endl;
	cout << productCounter << endl;

	return 0;
}