#include <iostream>
using namespace std;

class Square {
private:
  int side;

public:
  Square(int side){
    this->side=side;
  };

  int getSquare() {
    return side * side;
  }
};

int main() {
  Square square(5);
  cout << "The square of 5 is: " << square.getSquare() << endl;
  return 0;
}