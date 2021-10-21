#include <fmt/core.h>

unsigned int Factorial(unsigned int number)
{
    return number <= 1 ? number : Factorial(number - 1) * number;
}

int main()
{
    fmt::print("factorial(0) = {}\n", Factorial(0));
    return 0;
}