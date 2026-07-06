#ifndef SHOPPING_CART_PRINTER_H
#define SHOPPING_CART_PRINTER_H

#include "ShoppingCart.h"

class ShoppingCartPrinter
{
private:
    ShoppingCart *cart;

public:
    ShoppingCartPrinter(ShoppingCart *cart);
    void printInvoice();
};

#endif