//Author: Ely Schoenfield
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
bool checkColor(vector <string>, string); //checks if colors exist in vector
void pickColor(string &); //User enters "blue" and function returns hexadecimal

//Palette Generator
int main(){
  int numColor = 0;
  string chosenColor ="";
  ofstream filePalette;
  string fileName ="";
  vector <string> listColors = {"332288","117733","44AA99","88CCEE","DDCC77","CC6677","AA4499","882255"};
  vector <string> chosenPalette;
  do{
    do{
      cout << "Enter the number of colors you would like in the palette\n";
      cout << "(Need 2-8 colors) \n";
      cin >> numColor;
    }while((numColor<2 || numColor>8));
    cout << "Type " << numColor << " colors from the list: blue, green, seafoam green, cyan, tan, pink, purple, and burgundy" << endl;
    for(int i =0; i<numColor; i++){
      cin >> chosenColor;
      pickColor(chosenColor);
      if(checkColor(listColors,chosenColor) == true){
        cout << i+1 << "/" << numColor << " colors chosen \n";
        chosenPalette.push_back(chosenColor);
      }
    }
    //Ask user for name of a file they want to save the palette to
    cout << "Name the file you would like to save the palette to: \n";
    cin >> fileName;
    filePalette.open(fileName, ios::out);
    //Based on their input, save a file that contains the number of distinct color values requested.
    if(filePalette.is_open()){
      for(int index=0; index<numColor; index++){
        //Changes hex values each loop & saves color to file
        filePalette << ".color" << index <<"{color: #" << chosenPalette[index] <<"}\n";
      }
        filePalette.close();
        break;
    }
  }while(numColor>=2 && numColor<=8);
  return 0;
}
void pickColor(string & userInput){
  if(userInput == "blue"){
    userInput="332288";
  }
  if(userInput == "green"){
    userInput="117733";
  }
  if(userInput == "seafoam green"){
    userInput="44AA99";
  }
  if(userInput == "cyan"){
    userInput="88CCEE";
  }
  if(userInput == "tan"){
    userInput="DDCC77";
  }
  if(userInput == "pink"){
    userInput="CC6677";
  }
  if(userInput == "purple"){
    userInput="AA4499";
  }
  if(userInput == "burgundy"){
    userInput="882255";
  }
}

bool checkColor(vector <string> Color, string colorChoice){
  for(int i=0; i<Color.size(); i++){
    if(Color[i] == colorChoice){
      return true;
    }
  }
  return false;
}