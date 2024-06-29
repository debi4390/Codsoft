#include <iostream>

int main() {
    float a, b;
    int operation;

    std::cout << "--------------------------------------------------simple calculator---------------------------------------- " << std::endl;
    std::cout << "Enter a value for 'a' : ";
    std::cin >> a;

    std::cout << "Enter a value for 'b' : ";
    std::cin >> b;

    std::cout << "\n--------------------------------------------------\nFor operation, enter \n Addition--------------> 1\n Subtraction-----------> 2\n Multiplication--------> 3\n Division--------------> 4\n: ";
    std::cin >> operation;

    if (operation != 1 && operation != 2 && operation != 3 && operation != 4) {
        std::cout << "\n\t ** PLEASE ENTER A VALID INPUT FOR OPERATION ** \n \t\t\t and run again" << std::endl;
    } else {
        switch (operation) {
            case 1:
                std::cout << "\n result of " << a << " + " << b << " is : " << a + b << std::endl << std::endl;
                break;
            case 2:
                std::cout << "\n result of " << a << " - " << b << " is : " << a - b << std::endl << std::endl;
                break;
            case 3:
                std::cout << "\n result of " << a << " * " << b << " is : " << a * b << std::endl << std::endl;
                break;
            case 4:
                std::cout << "\n result of " << a << " / " << b << " is : " << a / b << std::endl << std::endl;
                break;
        }
    }

    return 0;
}

