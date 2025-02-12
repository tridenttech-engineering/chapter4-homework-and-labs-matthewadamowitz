// Intermediate14.cpp - displays total sold and percentages of small, medium,
// large, and family sold Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  // declare variables
  int smallPizzas, mediumPizzas, largePizzas, familyPizzas, totalPizzas;
  double smallPercent, mediumPercent, largePercent, familyPercent;
  
  // enter input items 
  cout << "Enter the number of small pizzas sold: ";
  cin >> smallPizzas;
  cout << "Enter the number of medium pizzas sold: ";
  cin >> mediumPizzas;
  cout << "Enter the number of large pizzas sold: ";
  cin >> largePizzas;
  cout << "Enter the number of family pizzas sold: ";
  cin >> familyPizzas;

  // calculate number of pizzas sold 
  totalPizzas = smallPizzas + mediumPizzas + largePizzas +familyPizzas; 

  // calculate percentages of pizzas sold
  if (totalPizzas > 0) {
    smallPercent = (static_cast<double>(smallPizzas) / totalPizzas) *100; 
    mediumPercent = (static_cast<double>(mediumPizzas) / totalPizzas) *100;
    largePercent = (static_cast<double>(largePizzas) / totalPizzas) *100;
    familyPercent = (static_cast<double>(familyPizzas) / totalPizzas) *100;
  } else {
    smallPercent = mediumPercent = largePercent = familyPercent = 0.0;
  }
  // Display results 
  cout << fixed << setprecision(1);
  
  cout <<"\nTotal pizzas sold:" << totalPizzas << endl;
  
  cout << "Small pizzas sold: " << smallPizzas << " (" << smallPercent << "%)" << endl;
  cout << "Medium pizzas sold: " << mediumPizzas << " (" << mediumPercent << "%)" << endl;
    cout << "Large pizzas sold: " << largePizzas << " (" << largePercent << "%)" << endl; 
    cout << "Family pizzas sold: " << familyPizzas << " (" << familyPercent << "%)" << endl;
  
  return 0;
} // end of main function