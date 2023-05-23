#include "../../include/ShoppingCart/Cart.h"
#include "../../include/Fake/Fake.h"
#include <iostream>

void Fake::addItem(Products products) {
    prodList.push_back(products);

}

float Fake::CalcProd() {
    float sum = 0;
    for (int i = 0; i < prodList.size(); ++i) {
        sum+= prodList[i].prodPrice();
    }
    return sum;
}

int Fake::countItem() {
    return prodList.size();
}

void Fake::checkCart() {
    for (int i = 0; i < prodList.size(); ++i) {
        cout<<i+1<<".  "<<prodList[i].prodId()<<"  "<<prodList[i].prodName()<<"  "<<prodList[i].prodPrice()<<endl;
    }

}

