//Author: Ely Schoenfield
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
//Palette Generator
int main(){
  int numColor = 0; //Should this be a string since the number is being written to file
  ofstream filePalette;
  string fileName ="";
  string listColors[8] = {"332288","117733","44AA99","88CCEE","DDCC77","CC6677","AA4499","882255"};

  //Ask the user for the number of colors they need (2+)
  cout << "Enter the number of colors you would like in the palette: \n";
  cin >> numColor;
    do{
      do{
      cout << "Need 2-8 colors! \n";
      cout << "Enter how many colors you would like: \n";
      cin >> numColor;
      }while((numColor<2 || numColor>8));
      //Ask user for name of a file they want to save the palette to
      cout << "Name the file you would like to save the palette to: \n";
      cin >> fileName;
      filePalette.open(fileName, ios::out);
        //Based on their input, save a file that contains the number of distinct color values requested.
        if(filePalette.is_open()){

          for(int index=0; index<numColor; index++){
            //Changes hex values each loop & saves color to file
            filePalette << ".color" << index <<"{color: #" << listColors[index] <<"}\n";
            }
          filePalette.close();
          break;
        }
    }while(numColor>=2 && numColor<=8);
    
  return 0;
}
