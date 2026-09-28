#include <iostream>

int main()
{   
    int a;
    std::cin >> a;

    int *p=&a;

    *p=*p*2;
    
    std::cout << a << std::endl;
    
    return 0;
}