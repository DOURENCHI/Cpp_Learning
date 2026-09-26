#include <vector>
#include <iostream>
int main()
{
    std::vector<int> v;
    v.push_back(10);
    v.push_back(25);
    v.push_back(8);
    v.push_back(36);
    v.push_back(15);
    
    int valuemax = v[0];
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] > valuemax)
        {
            valuemax = v[i];
        }
    }
    std::cout << valuemax << std::endl;

    return 0;
}