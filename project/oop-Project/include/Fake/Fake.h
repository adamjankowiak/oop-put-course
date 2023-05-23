
#ifndef OOP_PROJECT_FAKE_H
#define OOP_PROJECT_FAKE_H
#include "../Product/Products.h"
#include <vector>

class Fake{
    vector <Products> prodList;

public:
    void addItem(Products products);
    float CalcProd();
    int countItem();
    void checkCart();
};

#endif //OOP_PROJECT_FAKE_H
