
#include <iostream>

int main()
{
    char grade;

    std::cout << "What grade do you want?" << std::endl;
    std::cin >> grade;

    switch(grade)
    {
        case 'A':
        case 'a':
            std::cout << "Outstanding";
            break;
        case 'B':
        case 'b':
            std::cout << "Very good";
            break;
        case 'C':
        case 'c':
            std::cout << "Good";
            break;
        case 'D':
        case 'd':
            std::cout << "Some flaws";
            break;
        case 'E':
        case 'e':
            std::cout << "Not very good...";
            break;
        case 'F':
        case 'f':
            std::cout << "Fail";
            break;
        default:
            std::cout << "Thats not a grade!";
    }
}

