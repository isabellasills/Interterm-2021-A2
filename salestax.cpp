// Isabella Sills
// 2343865
// sills@chapman.edu
// CPSC 298-09
// Assignment 2: Loops, Arrays, & Functions

//This program implements a function called addTax. The function addTax has two
//formal parameters: taxRate (float), which is the amount of sales tax expressed
//as a percent; and cost (float), which is the cost of an item before tax. The
//function returns the value (float) of the cost so that it includes sales tax.
#include <iostream>
#include <iomanip>
using namespace std;
//define function to add tax to an item's total
float addTax(float &taxRate, float &cost){ //passes in the tax rate and original item cost
  //add original item cost to that original cost multiplied by the tax rate
  float totalCost = cost + (cost * taxRate);
  //output this total cost
    return totalCost;
}

int main(){
  //define tax rate
    float taxRate(0.0725);
  //define cost before tax
    float cost(10);
  //output item price before tax
    cout << fixed << setprecision(2) << "Item price before tax: $" << cost << endl;
  //output item price with tax by calling addTax function and passing parameters declared in main()
    cout << fixed << setprecision(2) << "Total price after tax: $" << addTax(taxRate, cost) << endl;

    return 0;
}
