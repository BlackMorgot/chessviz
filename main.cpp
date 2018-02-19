#include <iostream>
 
int main()
{
    const int N = 8;
    bool flag = true;
    for (int i = 0; i < N * N; i++)
    {
        if (i % N == 0)
        {
            std::cout << '\n';
            flag = !flag;
        }
        std::cout << (i && 1 ^ flag ? '*' : ' ');
    }
}
