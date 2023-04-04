#include <iostream>
using namespace std;
class CalcArea {
private:
  int radiusOfCircle;

public:
  void setRadius(int radius) { radiusOfCircle = radius; }

  int Area() { return 3.142 * radiusOfCircle * radiusOfCircle; }

  void showArea() {
    cout << " the value of the area of the circle is " << Area() << endl;
  }
};

int main() {

  CalcArea Area1;
  Area1.setRadius(23);
  Area1.showArea();

  return 0;
}