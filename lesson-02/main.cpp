#include <iostream>
#include <string>
using namespace std;

class Square{
public:
    void Area(int x);
    void Perimeter(int y);
    int sideLength;
};

class Company{
public:
    int id;
    string Name;
    string Surname;
};

void Square::Area(int x) {
  sideLength=x;
    cout << "Your area: " << sideLength * sideLength << endl;
}

void Square::Perimeter(int y) {
  sideLength=y;
    cout << "Your peripheral: " << sideLength * 4 << endl;
}

int main() {
    Square calculate;
    Company worker;
    worker.id=123;
    worker.Name="John";
    worker.Surname="Smith";
    cout<<"Put in side length of your square"<<endl;
    cin >> calculate.sideLength;
    calculate.Perimeter(calculate.sideLength);
    calculate.Area(calculate.sideLength);
    cout<<endl;
    cout<<"Your company worker: "<<worker.id<<" "<<worker.Name<<" "<<worker.Surname<<endl;

    return 0;
}