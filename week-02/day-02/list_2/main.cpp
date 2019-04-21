#include <iostream>
#include <vector>

int main()
{
    std::vector<std::string> A = {"Apple", "Avocado", "Blueberries", "Durian", "Lychee"};
    std::vector<std::string> B = A;
    for (int i = 0; i < A.size(); ++i) {
        if (A.at(i) == "Durian") {
            std::cout << "Durian is an element of list A." << std::endl;
        }
    }
    std::vector<std::string>::iterator iter;
    for (iter = B.begin(); iter <= B.end(); ++iter) {
        if (*iter == "Durian") {
            B.erase(iter);
        }

    }
    for (int j = 0; j < B.size(); ++j) {
        std::cout << B.at(j) << std::endl;

    }
    iter = A.begin() + 4;
    A.insert(iter, "Kiwifruit");

    if (A.size() > B.size()) {
        std::cout << "List A size is bigger." << std::endl;
    } else if (B.size() > A.size()) {
        std::cout << "List B size is bigger" << std::endl;
    }
    for (int k = 0; k < A.size(); ++k) {
        if (A.at(k) == "Avocado") {
            std::cout << k << std::endl;
        }

    }
    int indexB = 0;
    for (int i = 0; i < B.size(); ++i) {
        if (B.at(i) == "Durian") {
            indexB = i;

        }

    }
    std::cout << indexB << std::endl;
    std::cout << A[2] << std::endl;

    std::vector<std::string> myVector = {"Passion Fruit", "Pummelo"};
    B.insert(B.end(), myVector.begin(), myVector.end());

    for (int l = 0; l < B.size(); ++l) {
        std::cout << B.at(l) << " ";

    }

    return 0;
}