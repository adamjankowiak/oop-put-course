
#ifndef OOP_PROJECT_FAKE_H
#define OOP_PROJECT_FAKE_H
#include "../Product/Products.h"
#include <vector>

class Fake{
    vector <Products> prodList;

public:
    void AddItem(Products products);
    float CalcProd();
    int CountItem();
    void CheckCart();
};

#endif //OOP_PROJECT_FAKE_H
