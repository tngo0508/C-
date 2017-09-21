#ifndef MOVIE_H
#define MOVIE_H

#include <iostream>
#include <string>

using namespace std;

class Movie
{
	friend ostream& operator<<(ostream& out, const Movie& otherMovie);
public:
	Movie();
	Movie(const string& newMovieTile, int newYear);
	string getMovieTitle() const;
	int getYear() const;
	void setMovieTitle(const string& newMovieTile);
	void setYear(int newYear);
	void print() const;
	~Movie();
private:
	string movieTitle;
	int year;
};

#endif