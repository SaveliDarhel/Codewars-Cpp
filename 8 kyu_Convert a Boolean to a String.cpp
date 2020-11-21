#include <string>
using namespace std;
std::string boolean_to_string(bool b){
  string s;
  switch (b) {
      case (true):
        return "true";
      case(false):
        return "false";
  }
}
