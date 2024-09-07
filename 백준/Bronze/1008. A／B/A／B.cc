#include<iostream>

int main()
{
    int A, B;
    long double result;
    std::cin >> A >> B;
    std::cout.precision(10);
    result = static_cast<double>(A) / B;
    std::cout << result;
    return 0;
}