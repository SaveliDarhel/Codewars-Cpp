#include <string>
using namespace std;
std::string duckShoot(int ammo, double aim, std::string ducks){
  
  int kills, i;
  kills = ammo * aim;
  
  for (i=0; i <= ducks.size(); i++){
    
    if (ducks[i] == '2' && kills > 0){
      ducks[i] = 'X';
      kills--;
    }
  }
  return ducks;
}
