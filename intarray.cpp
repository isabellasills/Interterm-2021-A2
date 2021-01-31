// Isabella Sills
// 2343865
// sills@chapman.edu
// CPSC 298-09
// Assignment 2: Loops, Arrays, & Functions

//This program will read up to 10 nonnegative integers and store them in an array.
//The program will then print the intergers as console output.
#include <iostream>
using namespace std;

int main(){
  //variable that represents the array size
  int numberOfInputs = 0;
  //declare array with size based on user input
  int numberArray[numberOfInputs];

  cout << "How many numbers will be added to this array? (Max integer input is 10): ";
  //user input to create array size (overrides initial size declaration)
  cin >> numberOfInputs;
  //output instructions for adding to the array
  cout << "Enter " << numberOfInputs << " nonnegative integers separated by a new line: " << endl;

  //iterate through the array
  for(int i = 0; i < numberOfInputs; ++i){
    //add user input to the array
    cin >> numberArray[i];
    //check for negative input
    if(numberArray[i] < 0){
        cout << "Please enter a positive integer." << endl;
        //repeat prompt for user input
        cin >> numberArray[i];
    }
  }
  cout << "The values you entered into the array are: " << endl;
  //iterate through the array
  for(int i = 0; i < numberOfInputs; ++i){
    //output array contents
    cout << numberArray[i] << " ";
  }
  //output newline in console
  cout << endl;

  return 0;
}
