#include <iostream>
#include <string>
using namespace std;

class myFriend {
 public:
  virtual int Affection()=0;

};

class Cat:public myFriend{
  int age;
  string name;
 public:
  Cat(int y,string nick):age(y),name(nick){};
  void Display();
  int Affection() override;
};

class Dog:public myFriend{
  int age;
  string name;
 public:
  Dog(int y,string nick):age(y),name(nick){};
  void Display();
  int Affection() override;
};

void Cat::Display() {
  cout<<"Cat"<<endl;
  cout<<"Name: "<<name<<endl;
  cout<<"Age: "<<age<<endl;
}

int Cat::Affection() {
  return 1;
}

void Dog::Display() {
  cout<<"Dog"<<endl;
  cout<<"Name: "<<name<<endl;
  cout<<"Age: "<<age<<endl;
}

int Dog::Affection() {
  return 7;
}

int main() {

  Cat Waltah(4,"Walter");
  Waltah.Display();
  cout<<"Affection 1-10: "<<Waltah.Affection()<<endl<<endl;

  Dog Doge(6, "Doge");
  Doge.Display();
  cout<<"Affection 1-10: "<<Doge.Affection()<<endl;

  return 0;
}
