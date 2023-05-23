
#ifndef OOP_PROJECT_PRODUCTS_H
#define OOP_PROJECT_PRODUCTS_H
#include <string>
using namespace std;

class Products{
    int itemId;
    string itemName;
    float itemPrice;
public:
    Products(int itemId_, string itemName_, float itemPrice_): itemId(itemId_), itemName(itemName_), itemPrice(itemPrice_){};
    int prodId(){return itemId;};
    float prodPrice(){return itemPrice;};
    string prodName(){return itemName;};
};


#endif //OOP_PROJECT_PRODUCTS_H
