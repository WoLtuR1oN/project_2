
#include <iostream>
#include <iomanip>

int main()
{
    // Text in the console
    std::cout << "Hello, World!" << std::endl;
    std::cout << "Something" << std::endl;
    std::cout << "Something else" << std::endl;

    // Variables
    signed char number = -128;
    unsigned char number2 = 255;

    signed char letter = 'A';
    unsigned char letter2 = 'B';

    char letter3 = 'C';
    char letter4 = 'D';

    short number3 = 32767;
    unsigned short number4 = 65535;

    int number5 = 2147483647;
    unsigned int number6 = 4294967295;

    long number7 = 2147483647;
    long long number8 = 9223372036854775807;

    bool isStudent = false;
    bool likespcoding = true;

    auto weight = 75.5;
    auto height = 1.75;

    // Output variables
    std::cout << "\n--- Variables ---" << std::endl;

    std::cout << std::left << std::setw(20) << "number:" << static_cast<int>(number) << std::endl;
    std::cout << std::left << std::setw(20) << "number2:" << static_cast<int>(number2) << std::endl;

    std::cout << std::left << std::setw(20) << "letter:" << letter << std::endl;
    std::cout << std::left << std::setw(20) << "letter2:" << letter2 << std::endl;
    std::cout << std::left << std::setw(20) << "letter3:" << letter3 << std::endl;
    std::cout << std::left << std::setw(20) << "letter4:" << letter4 << std::endl;

    std::cout << std::left << std::setw(20) << "number3:" << number3 << std::endl;
    std::cout << std::left << std::setw(20) << "number4:" << number4 << std::endl;

    std::cout << std::left << std::setw(20) << "number5:" << number5 << std::endl;
    std::cout << std::left << std::setw(20) << "number6:" << number6 << std::endl;

    std::cout << std::left << std::setw(20) << "number7:" << number7 << std::endl;
    std::cout << std::left << std::setw(20) << "number8:" << number8 << std::endl;

    std::cout << std::left << std::setw(20) << "isStudent:" << std::boolalpha << isStudent << std::endl;
    std::cout << std::left << std::setw(20) << "likespcoding:" << likespcoding << std::endl;

    std::cout << std::left << std::setw(20) << "weight:" << weight << std::endl;
    std::cout << std::left << std::setw(20) << "height:" << height << std::endl;

    return 0;
}
