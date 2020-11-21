#include <vector>

std::vector<int> invert(std::vector<int> values)
{
    int i;
    for (i=0; i<values.size(); i++){
      values[i] = -values[i];
    }
    return values;
}
