#include "../../include/ShoppingCart/Cart.h"
#include "../../include/Fake/Fake.h"
#include <iostream>

void Cart::Fake::AddItem() {
    Products a(1,"Test1",123);
    Products b(2,"Test2",321);
    Products c(3,"Test3",101);
    prodList.push_back(a);
    prodList.push_back(b);
    prodList.push_back(c);
}

float Cart::Fake::CalcProd() {

    return 2137;
}

int Cart::Fake::CountItem() {
    return 69;
}

void Cart::Fake::CheckCart() {
    for (int i = 0; i < prodList.size(); ++i) {
        cout<<i+1<<".  "<<prodList[i].prodId()<<"  "<<prodList[i].prodName()<<"  "<<prodList[i].prodPrice()<<endl;
    }

}



