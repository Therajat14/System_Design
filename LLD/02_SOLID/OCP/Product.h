#ifndef PRODUCT_H
#define PRODUCT_H
#include <string>

using namespace std;

class Product
{
public:
    string name;
    double price;

public:
    Product(string name, double price);
};
#endif