#include <iostream>

//Given a non-negative int n, return the sum of its digits recursively (no loops).
int sumof_digits(int n);

int main()
{

    int n = 246;
    std::cout << sumof_digits(n) << std::endl;

    return 0;
}

int sumof_digits(int n)
{

    if (n == 0) {

        return 0;

    }else {

        return (n % 10) + sumof_digits(n / 10);
    }


}

