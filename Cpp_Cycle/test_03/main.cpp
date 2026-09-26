#include <iostream>

int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;

    int maxValue = a;

    if (b > maxValue)
    {
        maxValue = b;
    }

    if (c > maxValue)
    {
        maxValue = c;
    }

    std::cout << maxValue << std::endl;

    return 0;
}