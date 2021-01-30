// Isabella Sills
// 2343865
// sills@chapman.edu
// CPSC 298-09
// Assignment 2: Loops, Arrays, & Functions

//This program implements a void function called zeroBoth that has two
//call-by-reference parameters, both of which are variables of type int,
//and sets the values of both variables to 0.

#include <iostream>
using namespace std;

//declaring the funtion that will zero out both parameters passed in
void zeroBoth (int &x, int &y){
    x = 0;
    y = 0;
}

int main(int argc, const char * argv[]){
  //declare integer variables for user input
    int x;
    int y;
  //collect user input
  cout << "Enter two numbers separated by a newline: " << endl;
    cin >> x;
    cin >> y;
  //calling zeroBoth function to zero both user inputs
    zeroBoth(x, y);
  //output the result after user input was passed through zeroBoth function
    cout << "After the zeroBoth function is called, the output is: " << x << ", " << y << endl;

    return 0;
}
