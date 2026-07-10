#ifndef STORAGE_H
#define STORAGE_H

#include "../ShoppingCart.h"

class storage
{
private:
    ShoppingCart *cart;

public:
    virtual void save(ShoppingCart *save) = 0;
};

#endif