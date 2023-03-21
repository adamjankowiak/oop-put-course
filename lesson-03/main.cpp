#include <iostream>
using namespace std;

class Square{
  int side=10;
 public:
  int Length(){
    return side;
  };
};

class Area{
 public:
  int Formula(Square square){
    return square.Length()*square.Length();
  };
};

class Perimeter{
 public:
  int Formula(Square square){
    return 4*square.Length();
  };
};
int main() {
  Square square;
  Area area;
  Perimeter perimeter;
  cout<< area.Formula(square)<<endl;
  cout<< perimeter.Formula(square)<<endl;

  return 0;
}
