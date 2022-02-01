//Part 1
///////////////////////////////

#include <iostream>

int main()
{
    for (int i = 99; i > 0; i--)
    {
        std::cout << i << " bottles of pop on the wall.\n" << "Take one down and pass it around.\n";
    }
}

//Part 2
///////////////////////////////

#include <iostream>

int main()
{
    int i = 0;
    int square = 0;

    while (i < 10)
    {
        square = i * i;
        std::cout << i << "  " << square << "\n";
        i++;
    }
}

//Part 3
///////////////////////////////

#include <iostream>

int main() {

    int guess;

    int tries = 0;

    std::cout << "I have a number 1-10.\n";
    std::cout << "Please guess it: ";
    std::cin >> guess;

    while (guess != 8 && tries < 50)
    {
        std::cout << "Wrong guess, try again: ";
        std::cin >> guess;
        tries++;
    }

    if (guess == 8)
    {
        std::cout << "You got it!\n";
    }
}