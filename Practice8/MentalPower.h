//
// Created by cocol on 16/04/2022.
//

#ifndef PRUEBA_MENTALPOWER_H
#define PRUEBA_MENTALPOWER_H
#include "Power.h"


class MentalPower: public Power{
private:
    float _lucidity = 0;
public:
    MentalPower();

    MentalPower(const std::string &name, const std::string &description, const std::string &effectiveOn,
                float destructiveCapacity,bool inhibited,float lucidity);

    MentalPower(const MentalPower &orig);

    MentalPower &operator= (const MentalPower& orig);

    float getLucidity() const;

    void setLucidity(float lucidity);

    virtual float getDestructiveCapacity() const override;

    virtual std::string toCSV () const override;

    virtual void setDestructiveCapacity(float destructiveCapacity) override;

    bool operator<(const MentalPower& orig);
};


#endif //PRUEBA_MENTALPOWER_H
