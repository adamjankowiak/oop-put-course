
#ifndef OOP_PROJECT_CART_H
#define OOP_PROJECT_CART_H
#include "../Product/Products.h"
#include <vector>

class Cart{
    vector <Products> prodList;

public:
    void AddItem(Products products);
    float CalcProd();
    int CountItem();
    void CheckCart();
    class Fake;
};



#endif //OOP_PROJECT_CART_H
