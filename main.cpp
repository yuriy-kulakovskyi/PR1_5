#include "./classes/RightAngled.h"

int main() {
  RightAngled ra(3, 4);
  ra.Display();

  RightAngled userTriangle(3, 4);
  userTriangle.Read();
  userTriangle.Display();

  return 0;
}
