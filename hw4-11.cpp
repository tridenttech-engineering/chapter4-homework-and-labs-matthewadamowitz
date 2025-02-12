// Introductory11.cpp - displays ending balance
// Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip> //setpercision
using namespace std;

int main() {
  // declare variables
  double beginningBalance = 0.0;
  double totalDeposits = 0.0;
  double totalWitdrawals = 0.0;
  double endingBalance = 0.0;

  // enter input items; balance, deposits, and witdrawals
  cout << "Enter beginning balance:";
  cin >> beginningBalance;

  cout << "Enter toal deposits:"; 
  cin >> totalDeposits;

  cout << "Enter total witdrawals:";
  cin >> totalWitdrawals;

  // calculate ending balance
  endingBalance = beginningBalance + totalDeposits - totalWitdrawals;

  //Format and display results
  cout << fixed << setprecision(2);
  cout << "Ending balance: $" << endingBalance << endl;

  return 0;
} // end of main function