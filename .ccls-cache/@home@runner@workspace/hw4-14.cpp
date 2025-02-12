// Intermediate14.cpp - displays total sold and percentages of small, medium,
// large, and family sold Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main() {
  // declare named constants and variables
  double salePrice = 0.0;
  double taxRate = 0.0;
  
  double salesTax = 0.0;
  
  double cost = 0.0;

  // enter input items 
  cout << "Enter the sale price:";
  cin >> salePrice;
  cout << "Enter the tax rate:";
  cin >> taxRate;

  // calculate and display the sales tax
  salesTax = salePrice * taxRate;
  
  cost = salePrice + salesTax;
  
  cout << "Cost: $" << cost << endl;
  
  return 0;
} // end of main function