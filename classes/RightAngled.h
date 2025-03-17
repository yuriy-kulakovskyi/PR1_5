#ifndef RIGHTANGLED_H
#define RIGHTANGLED_H

#include "Triangle.h"

class RightAngled {
private:
  Triangle triangle;
  double area;
public:
  RightAngled(double a, double b);
  void Init(double a, double b);
  void Read();
  void Display() const;
  std::string toString() const;
  double getArea() const;
};

#endif // RIGHTANGLED_H