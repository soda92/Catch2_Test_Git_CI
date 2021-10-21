#include <fmt/core.h>

unsigned int Factorial(unsigned int number)
{
    return number <= 1 ? number : Factorial(number - 1) * number;
}

int main()
{
    unsigned int n = 5;
    fmt::print("factorial({}) = {}\n", n, Factorial(n));
    return 0;
}
