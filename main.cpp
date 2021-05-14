//Author: Ely Schoenfield
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "colors.h"
using namespace std;

bool checkColor(string Colors[], string, int);
void pickColor(string &);

int main(){
  int numColor = 0;
  string chosenColor ="";
  ofstream filePalette;
  string fileName ="";
  string wordedColor="";
  string listColors[8] = {"332288","117733","44AA99","88CCEE","DDCC77","CC6677","AA4499","882255"}; //README CHANGE
  int arraySize = sizeof(listColors)/sizeof(listColors[0]);
  colors cols;
  vector <string> chosenPalette;
  do{
    do{
      cout << "Enter the number of colors you would like in the palette\n(Need 2-8 colors)\n";
      cin >> numColor;
    }while((numColor<2 || numColor>8));
    cout << "Type " << numColor << " colors from the list:\nblue,\ngreen,\nsea,\ncyan,\ntan,\npink,\npurple,\nburgundy" << endl;
    for(int i =0; i<numColor; i++){
      do{
        cin >> chosenColor;
        wordedColor = chosenColor;
        pickColor(chosenColor);
        if(checkColor(listColors, chosenColor, arraySize) == true){
          chosenPalette.push_back(chosenColor);
          cols.removeColor(wordedColor);
          if(0<numColor){
            cout << "remaining colors:\n";
            cols.displayColors();
          }
          cout << i+1 << "/" << numColor << " colors chosen.\n";
        }
      }while(checkColor(listColors,chosenColor, arraySize) != true);
    }
    cout << "Name the file you would like to save the palette to: \n";
    cin >> fileName;
    filePalette.open(fileName, ios::out);
    if(filePalette.is_open()){
      for(int index=0; index<numColor; index++){
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
  if(userInput == "sea"){
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

bool checkColor(string Color[], string colorChoice, int size){
  for(int i=0; i<size; i++){
    if(Color[i] == colorChoice){
      return true;
    }
  }
  return false;
}