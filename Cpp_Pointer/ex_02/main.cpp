#include <iostream>
#include <vector>

void printData(const std::vector<int>& data)
{
    for (int i = 0; i < data.size(); i++)
    {
        std::cout << data[i] << " ";
    }
}

int main()
{
    std::vector<int> data = {1, 2, 3, 4, 5};

    printData(data);

    return 0;
}