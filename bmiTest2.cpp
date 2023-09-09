#include <iostream>
#include <cmath>

std::string bmiTell(double weight, double height) {
    double bmi = weight / pow(height, 2);

    if (bmi <= 18.5) {
        return "You're underweight, you emo, you!";
    } else if (bmi <= 25.0) {
        return "You're supposedly normal. Pffft, I bet you're ugly!";
    } else if (bmi <= 30.0) {
        return "You're fat! Lose some weight, fatty!";
    } else {
        return "You're a whale, congratulations!";
    }
}

int main() {
    double weight, height;
    std::cout << "Enter your weight (in kg): ";
    std::cin >> weight;
    std::cout << "Enter your height (in meters): ";
    std::cin >> height;

    std::string result = bmiTell(weight, height);
    std::cout << result << std::endl;

    return 0;
}






