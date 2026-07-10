#include "ShoppingCart.h"
using namespace std;

void ShoppingCart::addToCart(Product *Product)
{
    products.push_back(Product);
};

double ShoppingCart::calculateTotal()
{
    double total = 0.0;
    for (Product *product : products)
    {
        total += product->price;
    }

    return total;
};

const vector<Product *> &ShoppingCart::getProducts()
{
    return products;
};

//