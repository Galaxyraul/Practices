/** 
 * @file    Item.h
 * @author  jrbalsas
 * 
 * @date    15 de abril de 2016
 */

#include <string>

#ifndef ITEM_H
#define ITEM_H

class Item {
public:
    virtual std::string getDescription()=0;

    virtual ~Item()=default;
};

#endif /* ITEM_H */

