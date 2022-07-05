//
// Created by Arda Kara on 28.03.2021.
//

#include "MovieBookingSystem.h"
#include <iostream>
#include <ctime>

using namespace std;

void MovieBookingSystem::addMovie(const long movieID, const int audienceRadius) {

    for(int i = 0; i < movieCount; ++i) {
        if(movies[i]->movieID == movieID) {
            movies[movieCount-1]->printTime();
            cout << " already exists" << endl;

            return;
        }
    }

    if(movieCount != 0) {
        Movie **newMovies = new Movie *[movieCount+1];

        for(int i = 0; i < movieCount; ++i) {
            newMovies[i] = movies[i];
        }

        delete movies;
        movies = newMovies;
    } else {
        movies = new Movie *[1];
    }

    movieCount++;

    movies[movieCount-1] = new Movie(movieID, audienceRadius);

    movies[movieCount-1]->printTime();
    cout << " has been added" << endl;
}

void MovieBookingSystem::cancelMovie(const long movieID) {
    bool deleted = false;

    for(int i = 0; i < movieCount; ++i) {
        if(movies[i]->movieID == movieID) {
            delete movies[i];
            deleted = true;
            continue;
        }

        if(deleted) {
            movies[i-1] = movies[i];
        }
    }

    if(deleted) {
        movieCount--;

        if(movieCount == 0) {
            delete movies;
            movies = nullptr;
        } else {
            Movie **newMovies = new Movie *[movieCount];

            for(int i = 0; i < movieCount; ++i) {
                newMovies[i] = movies[i];
            }

            delete movies;
            movies = newMovies;
        }
    }
}

void MovieBookingSystem::showAllMovies() {
    if(movieCount == 0) {
        cout << "No movie on show";
    }
    else {
        cout << "Movies on show:" << endl;

        for(int i = 0; i < movieCount; ++i) {
            movies[i]->printTime();
            cout << " ";
            movies[i]->printAvailability();
            cout << endl;
        }
    }
}

void MovieBookingSystem::showMovie(const long movieID) {
    for(int i = 0; i < movieCount; ++i) {
        if(movies[i]->movieID == movieID) {
            movies[i]->printTime();
            cout << " ";
            movies[i]->printAvailability();
            cout << endl;

            return;
        }
    }
}

int MovieBookingSystem::makeReservation(const long movieID, const int row, const char col) {
    Movie *movie = nullptr;

    for(int i = 0; i < movieCount; ++i) {
        if(movies[i]->movieID == movieID) {
            movie = movies[i];

            break;
        }
    }

    if(movie == nullptr) {
        cout << "Movie at " << ctime(&movieID) << " does not exist" << endl;
        return -1;
    } else {
        return movie->makeReservation(row,col);
    }
}