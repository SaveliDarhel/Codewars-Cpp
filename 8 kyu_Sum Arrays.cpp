#include <vector>
using namespace std;
int sum(std::vector<int> nums) {
  int i, sum = 0;
  for (i=0; i < nums.size(); i++)
    sum += nums[i];
  return sum;
}
