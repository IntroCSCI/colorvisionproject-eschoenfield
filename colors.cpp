#include "colors.h"
#include <string>
#include <vector>
#include <iostream>
using std::cout;
using std::endl;
using std::string;
using std::vector;


colors::colors(){
  colorsRemaining = {"blue", "green", "sea", "cyan", "tan", "pink", "purple", "burgundy"}; //seafoam not working
}

vector <string> colors::removeColor(string inputColor){
  for(int i=0; i<colorsRemaining.size(); i++){
    if(inputColor == colorsRemaining[i] ){
      colorsRemaining.erase(colorsRemaining.begin()+i);
      return colorsRemaining;
    } 
  } 
  return colorsRemaining;
}

void colors::displayColors(){
  for(int index = 0; index<colorsRemaining.size(); index++){
    cout << colorsRemaining[index] << endl;
  }
}