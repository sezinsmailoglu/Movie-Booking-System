
#ifndef HOMEWORK1_MOVIE_H
#define HOMEWORK1_MOVIE_H

#endif //HOMEWORK1_MOVIE_H
class Movie{
public:
    Movie();
    ~Movie();
    Movie(long movieID, int audienceRadius);
    int makeReservation(int row, int column);
    void cancelReservation(int reservationCode);
    void showReservation(int reservationCode);
    void showPlan();
    static int reservationCodeCounter;

    long movieID;

    void printTime();

    void printAvailability();

private:
    Seat** plan;
    char* rows;
    int* columns;
    int audienceRadius;
};