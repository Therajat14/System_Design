#ifndef SHOPPING_CART_STORAGE_H
#define SHOPPING_CART_STORAGE_H

#include "ShoppingCart.h"

class ShoppingCartStorage
{
private:
    ShoppingCart *cart;

public:
    ShoppingCartStorage(ShoppingCart *cart);

    void saveToDatabase();
};

#endif