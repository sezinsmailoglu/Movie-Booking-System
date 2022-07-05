class Seat
{
    public:
    Seat();
    Seat(Seat &other);
    Seat(int row, int column, char availability);
    ~Seat();
    Seat operator=(const Seat &rhs);
    int getRow();
    char getColumn();
    char getAvailability();
    int getReservationCode();
    void setRow(int temp);
    void setColumn(int temp);
    void setAvailability(char temp);
    void setReservationCode(int temp);

    private:
     int reservationCode;
     char availability;
     int row;
     char column;

};