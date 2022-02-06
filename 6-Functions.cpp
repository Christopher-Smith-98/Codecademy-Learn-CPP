//Part 1
/////////////////////////////
#include <iostream>


void name_x_times(std::string name, int x)
{
    while (x > 0)
    {
        std::cout << name;
        x--;
    }
}

int main() {

    std::string my_name = "christopher";
    int some_number = 5;

    name_x_times(my_name, some_number);

}
//Part 2
/////////////////////////////////
#include <iostream>

void get_emergency_number(std::string emergency_number)
{
    std::cout << "Dial " << emergency_number << "\n";
}

int main() {
    std::string old_emergency_number = "999";

    std::string new_emergency_number = "0118 999 881 999 119 725 3";

    get_emergency_number(new_emergency_number);
}

//Part 3
///////////////////////////////////////////
#include <iostream>

bool needs_it_support() {
    bool support;
    std::cout << "Hello. IT. Have you tried turning it off and on again? Enter 1 for yes, 0 for no.\n";
    std::cin >> support;

    return support;
}

int main() {
    std::cout << needs_it_support();
}

//Part 4
///////////////////////////////////////////////
#include <iostream>

void oscar_wilde_quote()
{
    std::string oscar;

    std::cout << "Is your favourite guy oscar wilde? y/n\n";
    std::cin >> oscar;

    if (oscar == "y")
    {
        std::cout << "The highest, as the lowest, form of criticism is a mode of  autobiography.\n";
    }
    else
    {
        std::cout << "No quote for you then!\n";
    }
}

int main() {
    oscar_wilde_quote();
}

//Part 5
///////////////////////////
#include <iostream>

double average(double num1, double num2)
{
    return((num1 + num2) / 2);
}

int main() {
    std::cout << average(42.0, 24.0) << "\n";
    std::cout << average(1.0, 2.0) << "\n";
}
//Part 6
//////////////////////////////
#include <iostream>
#include <cmath>

int tenth_power(int num)
{
    return pow(num, 10);
}

int main()
{
    std::cout << tenth_power(0) << "\n";
    std::cout << tenth_power(1) << "\n";
    std::cout << tenth_power(2) << "\n";
}
//Part 7
//////////////////////////////////////
#include <iostream>
#include <vector>

std::vector <int> first_three_multiples(int num)
{
    std::vector <int> first_three_multiples;
    for (int i = 1; i <= 3; i++)
    {
        first_three_multiples.push_back(num * i);
    }
    return first_three_multiples;
}


int main() {

    for (int element : first_three_multiples(8))
    {
        std::cout << element << "\n";
    }
}
