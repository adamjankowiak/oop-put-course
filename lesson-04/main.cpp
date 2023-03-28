#include <iostream>
#include <string>
using namespace std;

class Product{
  public:
  Product(int value, string tag);
  double price;
  string name;
  Product(){this->price=0.0,this->name="Product";}
  Product(double value,string tag);

};

Product::Product(double value,string tag) {
  price = value;
  name = tag;
}
Product::Product(int value, string tag):Product::Product(static_cast<double>(value),tag) {
}
int main() {
  Product a(10.2,"First");
  Product b(20,"Second");
  Product c;
  cout<<a.price<<endl;
  cout<<a.name<<endl;
  cout<<b.price<<endl;
  cout<<b.name<<endl;
  cout<<c.price<<endl;
  cout<<c.name<<endl;




  return 0;
}
