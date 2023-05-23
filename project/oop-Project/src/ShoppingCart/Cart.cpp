#include "../../include/ShoppingCart/Cart.h"
#include <iostream>

void Cart::addItem(Products products) {
    prodList.push_back(products);

}

float Cart::CalcProd() {
    float sum = 0;
    for (int i = 0; i < prodList.size(); ++i) {
        sum+= prodList[i].prodPrice();
    }
    return sum;
}

int Cart::countItem() {
    return prodList.size();
}

void Cart::checkCart() {
    for (int i = 0; i < prodList.size(); ++i) {
        cout<<i+1<<".  "<<prodList[i].prodId()<<"  "<<prodList[i].prodName()<<"  "<<prodList[i].prodPrice()<<endl;
    }

}

