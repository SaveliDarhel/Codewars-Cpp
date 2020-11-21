#include <vector>
#include <math.h>
using namespace std;
int square_sum(const vector<int>& numbers)
{
  int i,sum = 0;
  for (i=0; i < numbers.size(); i++)
    sum += pow(numbers[i],2);
  return sum;
}
