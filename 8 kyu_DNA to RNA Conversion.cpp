#include <string>
using namespace std;

string DNAtoRNA(string dna){
  int i;
  for (i=0; i < dna.size(); i++)
    if (dna[i] == 'T')
      dna[i] = 'U';
  return dna;
}
