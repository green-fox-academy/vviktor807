#include <iostream>
#include <vector>

int howMuchSpend(std::vector<int>);

int greatestExpense(std::vector<int>);

int cheapestExpense(std::vector<int>);

int average(std::vector<int>);

int main()
{
    std::vector<int> Expenses = {500, 1000, 1250, 175, 800, 120};
    std::cout << howMuchSpend(Expenses) << std::endl;
    std::cout << greatestExpense(Expenses) << std::endl;
    std::cout << cheapestExpense(Expenses) << std::endl;
    std::cout << average(Expenses) << std::endl;


    return 0;
}

int howMuchSpend(std::vector<int> myVector)
{
    std::vector<int>::iterator it;
    int sum = 0;
    for (it = myVector.begin(); it != myVector.end(); ++it) {
        sum += *it;
    }
    return sum;
}

int greatestExpense(std::vector<int> myVector)
{
    int max = myVector[0];
    for (int i = 0; i < myVector.size(); ++i) {
        if (max < myVector.at(i)) {
            max = myVector.at(i);
        }
    }
    return max;
}

int cheapestExpense(std::vector<int> myVector)
{
    int min = myVector[0];
    for (int i = 0; i < myVector.size(); ++i) {
        if (min > myVector.at(i)) {
            min = myVector.at(i);
        }
    }
    return min;
}

int average(std::vector<int> myVector)
{
    int sum = 0;
    int average = sum / myVector.size();
    std::vector<int>::iterator it;
    for (it = myVector.begin(); it != myVector.end(); ++it) {
        sum += *it;
    }
    return average;
}