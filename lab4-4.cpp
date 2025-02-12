//Lab4-4.cpp - displays the volume of a cylinder
//Created/revised by <your name> on <current date>

#include <iostream> //iostream header file 
using namespace std;

int main() 
{

//declare constants and variables
  const double PI = 3.14;
  double radius = 0.0;
  double volume = 0.0;
  double height = 0.0;

//prompts radius and height
  cout << "Radius: ";
  cin >> radius;

  cout << "Height: ";
  cin >> height;
  
//calculate volume
  volume = PI * radius * radius * height;

//display volume
  cout << "Volume: " << volume << endl;
  
  return 0;
  
} //end of main function





