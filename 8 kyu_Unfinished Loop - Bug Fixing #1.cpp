std::vector<int> createVector(const int n)
{
  std::vector<int> res;

  for (int i = 1; i <= n;)
  {
    res.push_back(i);
    i++;
  }

  return res;
}
