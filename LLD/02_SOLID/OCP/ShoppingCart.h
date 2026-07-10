#ifndef SHOPPING_CART_H
#define SHOPPING_CART_H
#include "Product.h" // Corrected case for Product.h
#include <vector>

using namespace std;

class ShoppingCart
{
private:
    vector<Product *> products;

public:
    void addToCart(Product *Product);
    double calculateTotal();
    const vector<Product *> &getProducts();
};

#endif