using namespace std;

int repeats(std::vector<int>v){
  int i,l,ch,chl,sum = 0;
  
  for (i=0; i < v.size(); i++){
    sum += v[i]; // key element
    ch = v[i];
    
    for (l=0; l < v.size(); l++){
      chl = v[l];
      if (ch == chl && i != l)
        sum -= v[l]; // then erase the same elements
      
    }  
    
  }
  return sum;
}
