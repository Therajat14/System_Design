#include "Product.h"
#include "ShoppingCart.h"
#include "ShoppingCartPrinter.h"
#include "ShoppingCartStorage.h"

int main()
{
    ShoppingCart *cart = new ShoppingCart();

    cart->addToCart(new Product("Laptop", 1500));
    cart->addToCart(new Product("Mouse", 50));

    ShoppingCartPrinter *printer = new ShoppingCartPrinter(cart);
    printer->printInvoice();

    ShoppingCartStorage *storage = new ShoppingCartStorage(cart);
    storage->saveToDatabase();

    return 0;
}