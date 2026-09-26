#include <vector>
#include <iostream>
int main()
{
    std::vector<int> data;
    data.push_back(1);
    data.push_back(2);
    data.push_back(3);
    data.push_back(4);
    data.push_back(5);
    
    int sum = data[0];
    for (int i = 1; i < data.size(); i++)
    {
        sum += data[i];
        
    }
    std::cout << sum << std::endl;

    return 0;
}