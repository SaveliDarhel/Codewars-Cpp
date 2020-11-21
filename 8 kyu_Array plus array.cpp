#include <vector>

using namespace std;

int arrayPlusArray(std::vector<int> a, std::vector<int> b) {
  int i;
  int as = 0;
  int bs = 0;
  
  for (i=0; i < a.size(); i++)
    as += a[i];
  
  for (i=0; i < b.size(); i++)
    bs += b[i];
  
  return bs + as; // something went wrong
}
