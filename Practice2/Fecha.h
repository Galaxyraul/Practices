//
// Created by cocol on 26/02/2022.
//

#ifndef PRACTICE2_FECHA_H
#define PRACTICE2_FECHA_H

/**
 * @brief Class which stores a date
 * @param _day Day of the date
 * @param _month Month of the date
 * @param _year Year of the date
 */
class Fecha {
private:
    int _day = 26;
    int _month = 2;
    int _year = 2022;
public:
    Fecha();

    Fecha(int day, int month, int year);

    Fecha(const Fecha& orig);

    int getDay() const;

    void setDay(int day);

    int getMonth() const;

    void setMonth(int month);

    int getYear() const;

    void setYear(int year);
};


#endif //PRACTICE2_FECHA_H