//
// Created by Arda Kara on 28.03.2021.
//

#ifndef MAIN_CPP_MOVIEBOOKINGSYSTEM_H
#define MAIN_CPP_MOVIEBOOKINGSYSTEM_H


#include "Movie.h"

class MovieBookingSystem {
public:
    const static int numOfRow = 30;
    const static int numOfColumn = 26;
    MovieBookingSystem();
    ~MovieBookingSystem();

    void addMovie(const long movieID, const int audienceRadius);
    void cancelMovie(const long movieID);
    void showAllMovies();
    void showMovie(const long movieID);
    int makeReservation(const long movieID, const int row, const char col);
    void cancelReservations(const int numRes, const int* resCode);
    void showReservation(const int resCode);

private:
    Movie **movies;
    int movieCount;
};


#endif //MAIN_CPP_MOVIEBOOKINGSYSTEM_H
