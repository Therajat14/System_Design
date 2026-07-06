#include <iostream>
#include "ShoppingCartStorage.h"

using namespace std;

ShoppingCartStorage::ShoppingCartStorage(ShoppingCart *cart)
{
    this->cart = cart;
}

void ShoppingCartStorage::saveToDatabase()
{
    cout << "Saving shopping cart to database..." << endl;
}