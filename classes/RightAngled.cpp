// RightAngled.cpp
#include <iostream>
#include <cmath>
#include "RightAngled.h"

RightAngled::RightAngled(double a, double b) {
  Init(a, b);
}

void RightAngled::Init(double a, double b) {
  triangle.setSides(a, b, sqrt(a * a + b * b));
  area = 0.5 * a * b;
}

void RightAngled::Read() {
  double a, b;
  std::cout << "Enter leg a: ";
  std::cin >> a;
  std::cout << "Enter leg b: ";
  std::cin >> b;
  Init(a, b);
}

void RightAngled::Display() const {
  triangle.Display();
  std::cout << "Area: " << area << std::endl;
}

std::string RightAngled::toString() const {
  return triangle.toString() + ", Area: " + std::to_string(area);
}

double RightAngled::getArea() const {
  return area;
}