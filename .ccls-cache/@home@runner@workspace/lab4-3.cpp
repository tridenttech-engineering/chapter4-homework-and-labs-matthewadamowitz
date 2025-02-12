//Lab4-3.cpp - displays a salesperson's commission
//Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main()
{
  //declare named constant and variables
  double COMM_RATE = 0.0;
  double sales = 0.0;
  double commission = 0.0;

  //enter input for sales and commission rate 
  cout << "Enter sales amount: ";
  cin >> sales;
  cout << "Enter commission rate: ";
  cin >> COMM_RATE;

  //calculate and display the commission
  commission = sales * COMM_RATE;
  cout << "Commission: $" << commission << endl;

  return 0;

} //end of main function
