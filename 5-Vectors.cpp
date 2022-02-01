//Part 1
//////////////////////////////

#include <iostream>
#include <vector>

int main()
{
    std::vector<double> delivery_order;

    delivery_order.push_back(8.99);
    delivery_order.push_back(3.75);
    delivery_order.push_back(0.99);
    delivery_order.push_back(5.99);

    double total = 0.0;
    for (int i = 0; i < delivery_order.size(); i++)
    {
        total += delivery_order[i];
    }
    std::cout << total;
}

//Part 2
////////////////////////////////

#include <iostream>
#include <vector>

int main()
{
    int total_even = 0;
    int product_odd = 1;

    std::vector<int> numbers(5);
    std::cout << "Pick 5 numbers: " << "\n";

    for (int i = 0; i < 5; i++)
    {
        std::cin >> numbers[i];
    }
    for (int i = 0; i < 5; i++)
    {
        if (numbers[i] % 2 == 0)
        {
            total_even = total_even + numbers[i];
        }
        else
        {
            product_odd = product_odd * numbers[i];
        }
    }
    std::cout << "Sum of even: " << total_even << "\n";
    std::cout << "Product of odd: " << product_odd;
}