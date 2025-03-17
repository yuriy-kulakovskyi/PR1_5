#include <iostream>
#include <cmath>
#include "Triangle.h"

Triangle::Triangle() : a(1), b(1), c(1) {}

Triangle::Triangle(double a, double b, double c) {
  Init(a, b, c);
}

void Triangle::Init(double a, double b, double c) {
  setSides(a, b, c);
}

void Triangle::Read() {
  std::cout << "Enter sides a, b, c: ";
  std::cin >> a >> b >> c;
  setSides(a, b, c);
}

void Triangle::Display() const {
  std::cout << toString() << std::endl;
}

std::string Triangle::toString() const {
  return "Triangle(" + std::to_string(getA()) + ", " + std::to_string(getB()) + ", " + std::to_string(getC()) + ")";
}

void Triangle::setSides(double a, double b, double c) {
  if (a + b <= c || a + c <= b || b + c <= a) {
    std::cerr << "Invalid triangle sides: " << a << ", " << b << ", " << c << std::endl;
    exit(1);
  }
  this->a = a;
  this->b = b;
  this->c = c;
}

double Triangle::getA() const { return a; }
double Triangle::getB() const { return b; }
double Triangle::getC() const { return c; }

double Triangle::getPerimeter() const {
  return a + b + c;
}

void Triangle::getAngles(double &A, double &B, double &C) const {
  A = acos((b*b + c*c - a*a) / (2 * b * c)) * 180 / M_PI;
  B = acos((a*a + c*c - b*b) / (2 * a * c)) * 180 / M_PI;
  C = 180 - (A + B);
}