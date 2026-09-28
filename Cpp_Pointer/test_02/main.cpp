#include <iostream>

int main()
{

    int a,b;
    std::cin >> a >> b;
    int*p=&a;
    int*q=&b;
    int m;
    m=*p;
    *p=*q;
    *q=m;
    std::cout << a << " " << b << std::endl;
    return 0;
}