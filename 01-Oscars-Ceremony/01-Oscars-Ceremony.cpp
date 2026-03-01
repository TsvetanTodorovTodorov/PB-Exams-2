#include <iostream>

using namespace std;

int main()
{
	int rent;
	cin >> rent;

	double statuettes = rent - (0.3 * rent);
	double catering = statuettes - (0.15 * statuettes);
	double soundRecording = catering / 2;

	double expenses = rent + statuettes + catering + soundRecording;

	cout.setf(ios::fixed);
	cout.precision(2);

	cout << expenses << endl;

	return 0;
}