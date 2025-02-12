// Introductory11.cpp - displays ending balance
// Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main() {
  // declare named constants and variables
  double salePrice = 0.0;
  double taxRate = 0.0;
  double salesTax = 0.0;
  double cost = 0.0;

  // enter input item
  cout << "Sale price:";
  cin >> salePrice;
  cout << "Tax rate:";
  cin >> taxRate;

  // calculate and display the sales tax
  salesTax = salePrice * taxRate;
  cost = salePrice + salesTax;
  cout << "Cost: $" << cost << endl;

  return 0;
} // end of main function