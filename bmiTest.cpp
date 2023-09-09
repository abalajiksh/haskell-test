#include <iostream>

using namespace std;

string bmiTell(double weight, double height) {
  // Calculate the BMI.
  double bmi = weight / height * height;

  // Switch on the BMI value.
  switch (int(bmi)) {
    case 0:
      return "Invalid BMI value.";
    case 18:
      return "You're underweight, you emo, you!";
    case 25:
      return "You're supposedly normal. Pffft, I bet you're ugly!";
    case 30:
      return "You're fat! Lose some weight, fatty!";
    default:
      return "You're a whale, congratulations!";
  }
}

int main() {
  // Get the weight and height from the user.
  double weight, height;
  cout << "Enter your weight in kilograms: ";
  cin >> weight;
  cout << "Enter your height in meters: ";
  cin >> height;

  // Get the BMI category.
  string bmiCategory = bmiTell(weight, height);

  // Print the BMI category.
  cout << "Your BMI category is: " << bmiCategory << endl;

  return 0;
}
