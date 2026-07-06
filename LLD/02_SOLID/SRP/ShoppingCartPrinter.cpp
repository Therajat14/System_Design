#include "ShoppingCartPrinter.h"
#include <iostream>
using namespace std;
ShoppingCartPrinter::ShoppingCartPrinter(ShoppingCart *cart)
{
    this->cart = cart;
}

void ShoppingCartPrinter::printInvoice()
{
    cout << "Invoice:" << endl;
    for (Product *product : cart->getProducts())
    {
        cout << product->name << " - $" << product->price << endl;
    }
    cout << "Total: " << cart->calculateTotal() << endl;
}