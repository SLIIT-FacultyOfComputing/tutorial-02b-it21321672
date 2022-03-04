/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/

#include <iostream>

long Factorial(int no);
long nCr(int n, int r);

int main() {
    int n, r;
    std::cout << "Enter a value for n ";
    std::cin >> n;
    std::cout << "Enter a value for r ";
    std::cin >> r;
    std::cout << "nCr = ";
    std::cout<<nCr(n, r);
    std::cout << std::endl;
    return 0;
}
long nCr(int n, int r)
{
    int p, i, totn=1, totr=1, tot=1;
    int total=0;
    for (i = 1; i <= n; i++)
    {
        totn = totn * i;
    }
    for (i = 1; i <= r; i++)
    {
        totr = totr * i;
    }
    p = n - r;
    for (i = 1; i <= p; i++)
    {
        tot = tot * i;
    }
    total = totn / (totr * tot);
    return total;
}