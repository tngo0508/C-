#include "Movie.h"

ostream& operator<<(ostream& out, const Movie& otherMovie)
{
	out << otherMovie.getMovieTitle() << "(" << otherMovie.getYear() << ")";
	return out;
}
Movie::Movie()
{
	year = 0;
}

Movie::Movie(const string& newMovieTile, int newYear)
{
	movieTitle = newMovieTile;
	year = newYear;
}

string Movie::getMovieTitle() const
{
	return movieTitle;
}

int Movie::getYear() const
{
	return year;
}

void Movie::setMovieTitle(const string& newMovieTile)
{
	movieTitle = newMovieTile;
}

void Movie::print() const
{
	cout << movieTitle << "(" << year << ")";
	cout << endl;
}

Movie::~Movie() 
{}
