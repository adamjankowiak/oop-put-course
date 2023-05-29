
#ifndef OOP_PROJECT_FAKE_H
#define OOP_PROJECT_FAKE_H
#include "../Product/Products.h"
#include "../ShoppingCart/Cart.h"

#include <vector>

class Cart::Fake{
    vector <Products> prodList;
public:
    void AddItem();
    float CalcProd();
    int CountItem();
    void CheckCart();
};

#endif //OOP_PROJECT_FAKE_H
