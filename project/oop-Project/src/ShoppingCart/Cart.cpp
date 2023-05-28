#include "../../include/ShoppingCart/Cart.h"
#include <iostream>

void Cart::AddItem(Products products) {
    prodList.push_back(products);

}

float Cart::CalcProd() {
    float sum = 0;
    for (int i = 0; i < prodList.size(); ++i) {
        sum+= prodList[i].prodPrice();
    }
    return sum;
}

int Cart::CountItem() {
    return prodList.size();
}

void Cart::CheckCart() {
    for (int i = 0; i < prodList.size(); ++i) {
        cout<<i+1<<".  "<<prodList[i].prodId()<<"  "<<prodList[i].prodName()<<"  "<<prodList[i].prodPrice()<<endl;
    }

}

