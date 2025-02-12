// Intermediate14.cpp - displays total sold and percentages of small, medium,
// large, and family sold Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  // declare variables
  int small, medium, large, family;
  int total; 
  double percSmall, percMedium, percLarge, percFamily;
  
  // enter input items 
  cout << "Enter the number of small pizzas sold: ";
  cin >> small;
  cout << "Enter the number of medium pizzas sold: ";
  cin >> medium;
  cout << "Enter the number of large pizzas sold: ";
  cin >> large;
  cout << "Enter the number of family pizzas sold: ";
  cin >> family;

  // calculate number of pizzas sold 
  total = small + medium + large + family;

  // calculate percentages of pizzas sold
  if (total > 0) {
    percSmall = (static_cast<double>(small) / total) * 100; 
    percMedium = (static_cast<double>(medium) / total) * 100;
    percLarge = (static_cast<double>(large) / total) * 100;
    percFamily = (static_cast<double>(family) / total) * 100;
  } else { 
    percSmall = percMedium = percLarge = percFamily = 0;
  }
  
  // Display results 
  cout << fixed << setprecision(1);
  cout << "\nTotal: " << total << endl;
  cout << "Percent Small: " << percSmall << "%" << endl;
  cout << "Percentage Medium: " << percMedium << "%" << endl;
  cout << "Percentage Large: " << percLarge << "%" << endl;
  cout << "Percentage Family: " << percFamily << "%" << endl;

  return 0;
} // end of main function