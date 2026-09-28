#include <iostream>

int main()
{
    int a[5] = {3, 8, 2, 10, 6};

    int* p = a;

    int max = *p;

    for (int i = 1; i < 5; i++)
    {
        if (*(p + i) > max)
        {
            max = *(p + i);
        }
    }

    std::cout << max << std::endl;

    return 0;
}