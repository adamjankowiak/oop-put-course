
#ifndef OOP_PROJECT_CART_H
#define OOP_PROJECT_CART_H
#include "../Product/Products.h"
#include <vector>

class Cart{
    vector <Products> prodList;

public:
    void addItem(Products products);
    float CalcProd();
    int countItem();
    void checkCart();
};



#endif //OOP_PROJECT_CART_H
