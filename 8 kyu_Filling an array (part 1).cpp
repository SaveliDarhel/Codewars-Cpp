#include <vector>
using namespace std;
vector<int> arr(int n = 0){
  vector <int> a;
  int i;
  for (i=0; i < n; i++)
    a.push_back(i);
    
  return a;
}
