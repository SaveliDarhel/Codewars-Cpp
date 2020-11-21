#include <cmath>

int minimumPerimeter (int area) {
  int a = std::sqrt(area);
  for (; a > 0 && area % a != 0; --a);
  return 2 * (a + area / a);
}
