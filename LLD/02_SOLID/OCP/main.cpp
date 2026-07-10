#include "Product.h"
#include "ShoppingCart.h"
#include "ShoppingCartPrinter.h"
#include "./storage/storage.h"
#include "./storage/MongoDB.h"
#include "./storage/SQL_DB.h"

int main()
{
    ShoppingCart *cart = new ShoppingCart();

    cart->addToCart(new Product("Laptop", 1500));
    cart->addToCart(new Product("Mouse", 50));

    ShoppingCartPrinter *printer = new ShoppingCartPrinter(cart);
    printer->printInvoice();

    // ShoppingCartStorage *storage = new ShoppingCartStorage(cart);
    // storage->saveToDatabase();

    storage *sql = new sql_db();
    sql->save(cart);

    storage *mongo = new mongo_db();
    mongo->save(cart);

    return 0;
}