//#include <iostream>
//#include "../../include/Product/Products.h"
//#include "../../include/Fake/Fake.h"
//
//
//int main() {
//
//    vector<Products>prodList;
//    Fake fakeCart;
//
//        Products a(10307,"Eiffel_tower",2949.99);
//        prodList.push_back(a);
//        Products b(10294,"Titanic",3199.99);
//        prodList.push_back(b);
//        Products c(10312,"Jazz_club",1099.99);
//        prodList.push_back(c);
//
//
//    cout<<endl;
//    cout<<"     Welcome to my lego shop!"<<endl;
//    cout<<"   What lego set would you like?"<<endl<<endl;
//    cout<<"Pick a set number of your liking(1-10):"<<endl<<endl;
//    cout<<"    Id:    Name:           Price:"<<endl;
//    cout<<"1.  10307  Eiffel tower    2949.99 PLN"<<endl;
//    cout<<"2.  10294  Titanic         3199.99 PLN"<<endl;
//    cout<<"3.  10312  Jazz_club       1099.99 PLN"<<endl;
//    cout<<"4.  40174  Chess           299.99  PLN"<<endl;
//    cout<<"5.  40573  Christmas_tree  199.99  PLN"<<endl;
//    cout<<"6.  75313  AT-AT           3999.99 PLN"<<endl;
//    cout<<"7.  75331  The_Razor_Crest 2849.99 PLN"<<endl;
//    cout<<"8.  21336  The_Office      569.99  PLN"<<endl;
//    cout<<"9.  31208  The_Great_Wave  479.99  PLN"<<endl;
//    cout<<"10. 10276   Colosseum      2599.99 PLN"<<endl;
//    cout<<"0. Go to checkout"<<endl;
//
//    fakeCart.addItem(prodList[0]);
//    fakeCart.addItem(prodList[1]);
//    fakeCart.addItem(prodList[2]);
//
//    cout<<"     Your shopping cart ("<<fakeCart.countItem()<<"):"<<endl<<endl;
//    fakeCart.checkCart();
//    cout<<"Your total:  ";
//    printf("%0.2f",fakeCart.CalcProd());
//    cout<<" PLN"<<endl;
//
//    return 0;
//}
