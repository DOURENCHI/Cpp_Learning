#include <iostream>
#include <vector>
int main()
{
    std::vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(4);
    v.push_back(7);
    v.push_back(8);
    int n=0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] % 2 == 0)
        {
            n++;
        }
    }
    std::cout << n << std::endl;


}