#include <iostream>
int age = 25;

int main() {
    if (age >= 18) {
        std::cout << "You can go through the casino" << std::endl;
    } else {
        std::cout << "You cannot go through the casino" << std::endl;
    }
    return 0;
}