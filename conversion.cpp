// Isabella Sills
// 2343865
// sills@chapman.edu
// CPSC 298-09
// Assignment 2: Loops, Arrays, & Functions

//This program will read in a length in feet and inches and output the equivalent
//length in meters and centimeters. The program will let the user input new values
//and repeat the computation until they type 'exit'.

//There are 0.3048 meters in a foot, 100 centimeters in a meter, and 12 inches in a foot.
#include <iostream>
#include <string>
using namespace std;

void userInput(int &userFeet, int &userInches){
  cout << "Enter lengths as whole feet and inches to be converted to meters and centimeters." << endl;
//prompt for user input for feet
  cout << "Input number of feet: " << endl;
//store user input for feet
  cin >> userFeet;
//prompt for user input for inches
  cout << "Input number of inches: " << endl;
//store user input for inches
  cin >> userInches;
}
//functions to calculate measurements:

//converts user input feet & inches to total feet
float convertToFeet(int userFeet, int userInches){
  //convert user input inches to feet, add to user input feet
  float totalFeet = userFeet + (userInches/12.00);
  return totalFeet;
}
//converts total feet to centimters
float covertToCentimeters(float totalFeet){
  //calculates total centimeters from total number feet given 0.3048 meters in 1 foot and 100 cm in 1 meter
  float totalCentimeters = totalFeet * .3048 * 100;
  return totalCentimeters;
}
//converts total centimeters to whole meters and remaining centimeters
void convertToMeterAndCentimeter(int &meter, float &centimeter, float totalCentimeters){
  //calculate from centimeters to whole meters
  meter = totalCentimeters/100;
  //stores remaining centimeters after whole meters determined
  centimeter = totalCentimeters - (meter * 100);
}
//function to output results to console & loop until user enters 'exit'
void outputResults(int userFeet, int userInches, int meters, float centimeters){
  cout << "You entered: " << userFeet << " ft and " << userInches << " in." << endl;
  cout << "After conversion, your input becomes: " << meters << " m and " << centimeters << " cm." << endl;
}

int main(){
  //collects initial user input in feet
  int userFeet;
  //collects initial user input in inches
  int userInches;
  //stores meter conversion
  int meter;
  //stores centimeter conversion
  float centimeter;
  //Collecting user input; always checking for 'exit' string
  string userInputStr;
//as long as user does not enter exit, execute loop body
  while(userInputStr != "exit"){
    //call function to collect user input
    userInput(userFeet, userInches);
    //call function to convert meters and leftover centimeters
    convertToMeterAndCentimeter(meter, centimeter, covertToCentimeters(convertToFeet(userFeet, userInches)));
    //call function to correctly output conversions
    outputResults(userFeet, userInches, meter, centimeter);
    cout << "Would you like do another conversion? Press 'y' to continue. To quit, type 'exit'." << endl;
    //collect userInput again
    cin >> userInputStr;

    if(userInputStr == "exit"){
      cout << "Bye!" << endl;
      break;
    }
  }

  return 0;
}
