// Triangle.h
#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <iostream>
#include <string>

class Triangle {
private:
  double a, b, c;
public:
  Triangle();
  Triangle(double a, double b, double c);
  void Init(double a, double b, double c);
  void Read();
  void Display() const;
  std::string toString() const;
  void setSides(double a, double b, double c);
  double getA() const;
  double getB() const;
  double getC() const;
  double getPerimeter() const;
  void getAngles(double &A, double &B, double &C) const;
};

#endif // TRIANGLE_H