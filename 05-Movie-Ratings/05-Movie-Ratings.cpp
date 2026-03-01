#include <iostream>
#include <string>

using namespace std;

int main()
{
	int numberOfMovies;
	cin >> numberOfMovies;

	string movieName;
	double movieRating;

	double avrRating = 0.0;
	double maxRating = 0.0;
	double minRating = 10.0;

	string maxRatingMovie, minRatingMovie;

	for (int i = 1; i <= numberOfMovies; i++)
	{
		cin.ignore();
		getline(cin, movieName);
		cin >> movieRating;

		if (movieRating > maxRating)
		{
			maxRating = movieRating;
			maxRatingMovie = movieName;
		}
		if (movieRating < minRating)
		{
			minRating = movieRating;
			minRatingMovie = movieName;
		}
		avrRating += movieRating;

	}

	cout.setf(ios::fixed);
	cout.precision(1);

	cout << maxRatingMovie << " is with highest rating: " << maxRating << endl;
	cout << minRatingMovie << " is with lowest rating: " << minRating << endl;
	cout << "Average rating: " << avrRating / numberOfMovies << endl;

	return 0;
}