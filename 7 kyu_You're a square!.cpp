#include <math.h>
bool is_square(int n)
{
  int s;
  s = sqrt(n);
  if (s*s==n)
    return true;
  else
    return false;
}
