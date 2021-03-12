# Color Blind Friendly Palette Generator 

## Description
My program will ask the user for the number of colors they'd like in their palette. Based on their input, my program saves a file with the number of colors requested using Paul Tol's color scheme.

### v0.2 Updates

*Coming soon*

### v1.0 Updates

*Coming soon*


## Developer

Ely Schoenfield

## Example

To run the program, give the following commands:
Enter a number between 2 and 8 for the amount of colors wanted. 
Then enter the file name and type to save the palette to.
```
g++ --std=c++11 *.cpp -o cvp
./cvp
```

Here is an example of the program running:

```
Enter the number of colors you would like in the palette: 
1
Need 2-8 colors! 
Enter how many colors you would like: 
9
Need 2-8 colors! 
Enter how many colors you would like: 
8
Name the file you would like to save the palette to: 
colors.css
```

## C++ Guide

### Variables and Data Types
string fileName is used for saving the name of the file that the user inputs.
int numColor saves the number of colors the user requested.
string listColors[8] is an array that contains eight different hexadecimal values from Tol's color scheme.

### Console Input and Output
My program gets console input with cin from the user for the amount of colors and the file name.
Console output is used when asking the user for the number of colors, not enough colors, too many colors, file name, and saving colors to a file.

### Decisions
if the number of colors is less than 2, then ask for the amount of colors again.
if the number of colors is more than 8, then ask for the amount of colors again.

### Iteration
Nested do/while loop that determines if user input for the number of colors is at least 2 and at most 8.
For loop that has an increasing index that and loops the amount of colors given by user.
 
### File Input and Output
ofstream filePalette accesses a user named file.
ios::out is used for file output operations like saving the colors.
filePalette << saves distinct color values to the user named file. 

### Arrays/Vectors
string listColors[8] is a an array that holds the hexadecimal values of Tol's color scheme as a string.

*Coming in version 0.2*

### Functions

*Coming in version 0.2*

### Classes

*Coming in version 1.0*
