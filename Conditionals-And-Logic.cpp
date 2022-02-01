#include <iostream>

int main() {

    double weight;
    int planet;

    std::cout << "Please enter your current earth weight: ";
    std::cin >> weight;

    std::cout << "\nI have information for the following planets:\n\n";
    std::cout << "   1. Mercury 2. Venus   3. Mars    4. Jupiter\n";
    std::cout << "   5. Saturn  6. Uranus  7. Neptune\n\n";

    std::cout << "Enter the number of the planet are you visiting? ";
    std::cin >> planet;

    if (planet == 1) {
        weight = weight * 0.38;
    }
    else if (planet == 2) {
        weight = weight * 0.91;
    }
    else if (planet == 3) {
        weight = weight * 0.38;
    }
    else if (planet == 4) {
        weight = weight * 2.34;
    }
    else if (planet == 5) {
        weight = weight * 1.06;
    }
    else if (planet == 6) {
        weight = weight * 0.92;
    }
    else if (planet == 7) {
        weight = weight * 1.19;
    }

    std::cout << "Weight on planet: " << weight << "\n";
}

