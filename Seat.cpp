#include <iostream>
#include "Seat.h"
using namespace std;

    Seat::Seat(Seat &other ){
        row = other.row;
        column = other.column;
        availability = other.availability;
    }
   // Seat Seat::operator=(const Seat &rhs){
     //       if ( &rhs != this ) { // to avoid self-assignment
       //         row = rhs.row;
         //       column =rhs.column;
           //     availability = rhs.availability;
          //      reservationCode = rhs.reservationCode;
         //   }
        //    return *this; // to allow cascading
       // }


    Seat::Seat() {
        setRow(0);
        setColumn(1);
        setAvailability('O');
   }
    Seat::Seat( int row,  int column, char availability){
        row = row;

        column = (char)(column+65);
        availability = availability;

        cout<< "Seat established" << endl;
     }
    Seat::~Seat(){
           cout << "deleting seat!" << endl;
    }

int Seat::getRow(){
        return row;
    }
char Seat::getColumn(){
        return column;
    }
    char Seat::getAvailability(){
        return availability;
    }
    int Seat::getReservationCode() {
        return reservationCode; // pass by value
    }
    void Seat::setRow(int temp){
        row = temp;
    }
    void Seat::setColumn(int temp){
        column = (char)(column+65);
    }
    void Seat::setAvailability(char temp){
        availability = temp;
    }
    void Seat::setReservationCode(int temp) {
        reservationCode = temp;
    }