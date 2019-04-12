#include <iostream>
#include <string>
//Given a string, compute recursively a new string where all the lowercase 'x' chars have been changed to 'y' chars.

std::string x_to_y(std::string);

int main()
{

    std::string gyogyszer = "xanaxan";
    std::string x_changed_to_y = x_to_y(gyogyszer);
    std::cout << x_changed_to_y << std::endl;
    return 0;
}

std::string x_to_y(std::string gyogyszer)
{
    int length = gyogyszer.size();

    if (length == 0) {
        return gyogyszer;
    }


    if (gyogyszer.back() == 'x') {
        return x_to_y(gyogyszer.substr(0, length - 1)) + 'y';
    } else {
        return x_to_y(gyogyszer.substr(0, length - 1)) + gyogyszer.back();
    }

}