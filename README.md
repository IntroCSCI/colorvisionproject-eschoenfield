# Color Blind Friendly Palette Generator 

## Description
My program will ask the user for the number of colors they'd like in their palette. Based on their input, my program saves a file with the number of colors requested using Paul Tol's color scheme.

### v0.2 Updates

My program will ask the user for the number of colors they'd like in their palette. The user picks what colors are in their palette. Then my program saves a file with the number and type of colors requested from Paul Tol's color scheme.

### v1.0 Updates

*Coming soon*


## Developer

Ely Schoenfield

## Example

To run the program, give the following commands:
Enter a number between 2 and 8 for the amount of colors wanted.
Choose the colors you'd like from the list. 
Then enter the file name and file type to save the palette to.
```
g++ --std=c++11 *.cpp -o cvp
./cvp
```

Here is an example of the program running:

```
Enter the number of colors you would like in the palette
(Need 2-8 colors) 
4
Type 4 colors from the list: blue, green, seafoam green, cyan, tan, pink, purple, and burgundy
blue
1/4 colors chosen 
green
2/4 colors chosen 
tan
3/4 colors chosen 
purple
4/4 colors chosen 
Name the file you would like to save the palette to: 
colors.css
```

## C++ Guide

### Variables and Data Types
string fileName is used for saving the name of the file that the user inputs.
int numColor saves the number of colors the user requested.
string listColors[8] is an array that contains eight different hexadecimal values from Tol's color scheme.
vector <string> chosenPalette is a vector that is used to save the user's chosen colors.

### Console Input and Output
My program gets console input with cin from the user for the amount of colors and the file name.
Console output is used when asking the user for the number of colors, not enough colors, too many colors, colors they'd like in their palette, how many colors are currently chosen for the user's palette, and the file name to save the palette to.

### Decisions
if the number of colors is less than 2, then ask for the amount of colors again.
if the number of colors is more than 8, then ask for the amount of colors again.
if the function that checks if the user input matches a color in Tol's palette is true then enter hexadecimal value in vector chosenPalette.
if the file to save the palette opens then copy vector chosenPalette into the file.   

### Iteration
Nested do/while loop that determines if user input for the number of colors is at least 2 and at most 8.
For loop that has an increasing index that loops the amount of colors given by user.
for loop used to pushback user's color choices into the vector chosenPalette.
for loop used to copy vector chosenPalette into the file.
 
### File Input and Output
ofstream filePalette accesses a user named file.
ios::out is used for file output operations like saving the colors.
filePalette << saves distinct color values to the user named file. 

### Arrays/Vectors
vector <string> listColors is a an array that holds the hexadecimal values of Tol's color scheme as a string.
vector <string> chosenPalette is a vector that is used to save the user's chosen colors.


### Functions

Function bool checkColor(vector <string>, string) checks if the color entered is on the available list and returns true or false. 
Function void pickColor(string &) changes the color to a hexadecimal value.

### Classes

*Coming in version 1.0*
