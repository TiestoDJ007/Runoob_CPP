//
// Created by a on 2019/5/9.
//

#include <iostream>

void func(void);
static int count = 10;
int main()
{
    while (count--)
    {
        func();
    }
    return 0;
}
void func(void)
{
    static int i = 5;
    i++;
    std::cout << "var i is "<<i;
    std::cout<<", var count is "<<count<<std::endl;
}