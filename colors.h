#include <string>
#include <vector>
using std::string;
using std::vector;
//remaining colors (remove colors choosen from vector)
class colors
{
  private:
    vector <string> colorsRemaining; 
  public:
    colors();
    vector <string> removeColor(string);
    void displayColors();
};
