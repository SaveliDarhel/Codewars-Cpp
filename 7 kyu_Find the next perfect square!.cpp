#include <math.h>
long int findNextSquare(long int sq) {
  
  long int i;
  std::cin >> sq;
  i = sqrt(sq);
  if (i*i == sq)
    {
      i++;
      return i*i;
    }
  else
    return -1;
}
