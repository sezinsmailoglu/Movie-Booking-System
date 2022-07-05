#include <iostream>
#include "Seat.h"
#include "Movie.h"
#include <ctime>

using namespace std;

Movie::Movie(long movieID, int audienceRadius) {
    Seat **s;
    this->audienceRadius = audienceRadius;
    this->movieID = movieID;

    switch (audienceRadius) {
        case 0:

            s = new Seat *[26];
            for (int i = 0; i < 26; i++) {
                s[i] = new Seat[30];
                for (int j = 0; j < 30; j++) {
                    s[i][j].setRow(i);
                    s[i][j].setColumn(j);
                    s[i][j].setAvailability('o');
                }
            }
            plan = s;
            break;
        case 1:

            s = new Seat *[13];
            for (int i = 0; i < 13; i++) {
                s[i] = new Seat[15];
                for (int j = 0; j < 15; j++) {
                    s[i][j].setRow(i * 2);
                    s[i][j].setColumn(j * 2);
                    s[i][j].setAvailability('o');
                }
            }
            plan = s;
            break;
        case 2:

            s = new Seat *[9];
            for (int i = 0; i < 9; i++) {
                s[i] = new Seat[10];
                for (int j = 0; j < 10; j++) {
                    s[i][j].setRow(i * 3);
                    s[i][j].setColumn(j * 3);
                    s[i][j].setAvailability('o');
                }
            }
            plan = s;
            break;
        case 3:

            s = new Seat *[7];
            for (int i = 0; i < 7; i++) {
                s[i] = new Seat[8];
                for (int j = 0; j < 8; j++) {
                    s[i][j].setRow(i * 4);
                    s[i][j].setColumn(j * 4);
                    s[i][j].setAvailability('o');
                }
            }
            plan = s;
            break;
        case 4:
            s = new Seat *[6];
            for (int i = 0; i < 6; i++) {
                s[i] = new Seat[6];
                for (int j = 0; j < 6; j++) {
                    s[i][j].setRow(i * 5);
                    s[i][j].setColumn(j * 5);
                    s[i][j].setAvailability('o');
                }
            }
            plan = s;
            break;
        case 5:

            s = new Seat *[5];
            for (int i = 0; i < 5; i++) {
                s[i] = new Seat[5];
                for (int j = 0; j < 5; j++) {
                    s[i][j].setRow(i * 6);
                    s[i][j].setColumn(j * 6);
                    s[i][j].setAvailability('o');
                }
            }
            plan = s;
            break;
        case 6:

            s = new Seat *[4];
            for (int i = 0; i < 4; i++) {
                s[i] = new Seat[5];
                for (int j = 0; j < 5; j++) {
                    s[i][j].setRow(i * 7);
                    s[i][j].setColumn(j * 7);
                    s[i][j].setAvailability('o');
                }
            }
            plan = s;
            break;
        case 7:

            s = new Seat *[4];
            for (int i = 0; i < 4; i++) {
                s[i] = new Seat[4];
                for (int j = 0; j < 4; j++) {
                    s[i][j].setRow(i * 8);
                    s[i][j].setColumn(j * 8);
                    s[i][j].setAvailability('o');
                }
            }
            plan = s;
            break;
        default:
            cout << "err" << endl;
            break;

    }//end switch


}

Movie::~Movie() {

}

int Movie::makeReservation(int row, int column) {
    int reservationCode = reservationCodeCounter;
    plan[row][column].setReservationCode(reservationCode);
    plan[row][column].setAvailability('X');
    reservationCodeCounter++;
    return reservationCode;
}

void Movie::cancelReservation(int reservationCode) {
    switch (audienceRadius) {
        case 0:
            for (int i = 0; i < 26; i++) {
                for (int j = 0; j < 30; j++) {
                    if (plan[i][j].getReservationCode() == reservationCode) {
                        plan[i][j].setReservationCode(0);
                        plan[i][j].setAvailability('o');
                    }
                }
            }
            break;
        case 1:


            for (int i = 0; i < 13; i++) {

                for (int j = 0; j < 15; j++) {
                    if (plan[i][j].getReservationCode() == reservationCode) {
                        plan[i][j].setReservationCode(0);
                        plan[i][j].setAvailability('o');
                    }
                }
            }
            break;
        case 2:


            for (int i = 0; i < 9; i++) {

                for (int j = 0; j < 10; j++) {
                    if (plan[i][j].getReservationCode() == reservationCode) {
                        plan[i][j].setReservationCode(0);
                        plan[i][j].setAvailability('o');
                    }
                }
            }
            break;
        case 3:


            for (int i = 0; i < 7; i++) {

                for (int j = 0; j < 8; j++) {
                    if (plan[i][j].getReservationCode() == reservationCode) {
                        plan[i][j].setReservationCode(0);
                        plan[i][j].setAvailability('o');
                    }
                }
            }
            break;
        case 4:

            for (int i = 0; i < 6; i++) {

                for (int j = 0; j < 6; j++) {
                    if (plan[i][j].getReservationCode() == reservationCode) {
                        plan[i][j].setReservationCode(0);
                        plan[i][j].setAvailability('o');
                    }
                }
            }
            break;
        case 5:


            for (int i = 0; i < 5; i++) {

                for (int j = 0; j < 5; j++) {
                    if (plan[i][j].getReservationCode() == reservationCode) {
                        plan[i][j].setReservationCode(0);
                        plan[i][j].setAvailability('o');
                    }
                }
            }
            break;
        case 6:
            for (int i = 0; i < 4; i++) {
                for (int j = 0; j < 5; j++) {
                    if (plan[i][j].getReservationCode() == reservationCode) {
                        plan[i][j].setReservationCode(0);
                        plan[i][j].setAvailability('o');
                    }
                }
            }
            break;
        case 7:

            for (int i = 0; i < 4; i++) {
                for (int j = 0; j < 4; j++) {
                    if (plan[i][j].getReservationCode() == reservationCode) {
                        plan[i][j].setReservationCode(0);
                        plan[i][j].setAvailability('o');
                    }
                }
            }
            break;
        default:
            cout << "err" << endl;
            break;
    }


    cout << "reservation cancelled" << endl;
}

void Movie::showReservation(int reservationCode) {

}

void Movie::showPlan() {
    switch (audienceRadius) {
        case 0:
            for (int i = 0; i < 26; i++) {
                for (int j = 0; j < 30; j++) {
                    cout << plan[i][j].getAvailability();
                }
                cout << endl;
            }
            break;
        case 1:


            for (int i = 0; i < 13; i++) {

                for (int j = 0; j < 15; j++) {
                    cout << plan[i][j].getAvailability();
                }
                cout << endl;
            }
            break;
        case 2:


            for (int i = 0; i < 9; i++) {

                for (int j = 0; j < 10; j++) {
                    cout << plan[i][j].getAvailability();
                }
                cout << endl;
            }
            break;
        case 3:


            for (int i = 0; i < 7; i++) {

                for (int j = 0; j < 8; j++) {
                    cout << plan[i][j].getAvailability();
                }
                cout << endl;
            }
            break;
        case 4:

            for (int i = 0; i < 6; i++) {

                for (int j = 0; j < 6; j++) {
                    cout << plan[i][j].getAvailability();
                }
                cout << endl;
            }
            break;
        case 5:


            for (int i = 0; i < 5; i++) {

                for (int j = 0; j < 5; j++) {
                    cout << plan[i][j].getAvailability();
                }
                cout << endl;
            }
            break;
        case 6:
            for (int i = 0; i < 4; i++) {
                for (int j = 0; j < 5; j++) {
                    cout << plan[i][j].getAvailability();
                }
                cout << endl;
            }
            break;
        case 7:

            for (int i = 0; i < 4; i++) {
                for (int j = 0; j < 4; j++) {
                    cout << plan[i][j].getAvailability();
                }
                cout << endl;
            }
            break;
        default:
            cout << "err" << endl;
            break;
    }
}

int Movie::reservationCodeCounter = 1;

void Movie::printTime() {
    cout << "Movie at " << ctime(&movieID);
}

void Movie::printAvailability() {
    cout << "(" << availableSeats << " available seats)";
}
