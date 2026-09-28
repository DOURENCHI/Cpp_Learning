#include <iostream>
#include <vector>

void addOne(std::vector<int>& data)
{
    for (int i = 0; i < data.size(); i++)
    {
        data[i]++;
    }
}

int main()
{
    std::vector<int> data = {1, 2, 3, 4, 5};

    addOne(data);

    for (int i = 0; i < data.size(); i++)
    {
        std::cout << data[i] << " ";
    }

    return 0;
}