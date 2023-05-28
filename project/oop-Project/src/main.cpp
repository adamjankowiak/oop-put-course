#include <iostream>
#include <fstream>
#include "../include/Product/Products.h"
#include "../include/ShoppingCart/Cart.h"


int main() {

    int prodId;
    string prodName;
    float prodPrice;
    int a;

    vector<Products>prodList;
    Cart cart;

    fstream file;
    file.open("../include/Product/Product-list");
    int j=0;
    while(!file.eof()){
        file>>prodId>>prodName>>prodPrice;
        Products x(prodId,prodName,prodPrice);
        prodList.push_back(x);
        j++;
    }
    cout<<endl;
    cout<<"     Welcome to my lego shop!"<<endl;
    cout<<"   What lego set would you like?"<<endl<<endl;
    cout<<"Pick a set number of your liking(1-10):"<<endl<<endl;
    cout<<"    Id:    Name:           Price:"<<endl;
    cout<<"1.  10307  Eiffel tower    2949.99 PLN"<<endl;
    cout<<"2.  10294  Titanic         3199.99 PLN"<<endl;
    cout<<"3.  10312  Jazz_club       1099.99 PLN"<<endl;
    cout<<"4.  40174  Chess           299.99  PLN"<<endl;
    cout<<"5.  40573  Christmas_tree  199.99  PLN"<<endl;
    cout<<"6.  75313  AT-AT           3999.99 PLN"<<endl;
    cout<<"7.  75331  The_Razor_Crest 2849.99 PLN"<<endl;
    cout<<"8.  21336  The_Office      569.99  PLN"<<endl;
    cout<<"9.  31208  The_Great_Wave  479.99  PLN"<<endl;
    cout<<"10. 10276   Colosseum      2599.99 PLN"<<endl;
    cout<<"0. Go to checkout"<<endl;

    while (a!=0) {
        cin>>a;
        switch (a) {
            case 1:
                cart.AddItem(prodList[a - 1]);
                cout<<"Product added to the cart"<<endl;
                break;
            case 2:
                cart.AddItem(prodList[a - 1]);
                cout<<"Product added to the cart"<<endl;
                break;
            case 3:
                cart.AddItem(prodList[a - 1]);
                cout<<"Product added to the cart"<<endl;
                break;
            case 4:
                cart.AddItem(prodList[a - 1]);
                cout<<"Product added to the cart"<<endl;
                break;
            case 5:
                cart.AddItem(prodList[a - 1]);
                cout<<"Product added to the cart"<<endl;
                break;
            case 6:
                cart.AddItem(prodList[a - 1]);
                cout<<"Product added to the cart"<<endl;
                break;
            case 7:
                cart.AddItem(prodList[a - 1]);
                cout<<"Product added to the cart"<<endl;
                break;
            case 8:
                cart.AddItem(prodList[a - 1]);
                cout<<"Product added to the cart"<<endl;
                break;
            case 9:
                cart.AddItem(prodList[a - 1]);
                cout<<"Product added to the cart"<<endl;
                break;
            case 10:
                cart.AddItem(prodList[a - 1]);
                cout<<"Product added to the cart"<<endl;
                break;
            case 0:
                break;
            default:
                cout<<"Given input is not supported"<<endl;
        }
    }
    cout << "     Your shopping cart (" << cart.CountItem() << "):" << endl << endl;
    cart.CheckCart();
    cout<<"Your total:  ";
    printf("%0.2f",cart.CalcProd());
    cout<<" PLN"<<endl;

    return 0;
}
