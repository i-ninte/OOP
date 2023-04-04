#include <iostream>
using namespace std;
class CPolygon {
protected:
  int width, height;

public:
  void set_values(int a, int b) {
    width = a;
    height = b;
  }
};

class CRectangle : public CPolygon {
public:
  int area() { return width * height; }
};
class CTrinagle : public CPolygon {
public:
  int area() { return 0.5 * height * width; }
};

int main() {
  CRectangle rect;
  rect.set_values(10, 5);
  CTrinagle tri;
  tri.set_values(10, 5);
  cout<< tri.area()<<endl;
  cout<< rect.area()<<endl;
   return 0;
}