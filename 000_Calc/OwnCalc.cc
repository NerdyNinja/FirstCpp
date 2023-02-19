#include <iostream>
#include <limits>


void ignoreLine()
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

char getCalcOperator()
{

    char calcoperator;

    while(true)
    {
        std::cout << "Which Operator do you want to use? Type +, -, / or *\n";
        std::cin >> calcoperator;

        switch(calcoperator)
        {
        case '+':
        case '-':
        case '/':
        case '*':
            return calcoperator;
        default:
            std::cerr << "Invalid Input!\n";
    }
    }
}

float getNumber1()
{
    float number1;

    while(true)
    {

    std::cout << "Enter your first number: \n";
    std::cin >> number1;

    if (!std::cin)
    {
        std::cin.clear();
        ignoreLine();
        std::cout << "Invald Input!\n";
    }
    else
    {
        ignoreLine();
        return number1;
    }
    }
}

float getNumber2()
{
    float number2;

    while(true)
    {
        std::cout << "Enter your second number: \n";
        std::cin >> number2;

        if(!std::cin)
        {
            std::cin.clear();
            ignoreLine();
            std::cout << "Invalid Input!\n";
        }
        else
        {
            ignoreLine();
            return number2;
        }
    }
}

void calcMagic(float number1, float number2, char calcoperator)
{

    float result;

        switch(calcoperator)
        {
            case '+':
                result = number1 + number2;
                std::cout << "The result is: " << result << '\n';
                break;

            case '-':
                result = number1 - number2;
                std::cout << "The result is: " << result << '\n';
                break;

            case '*':
                result = number1 * number2;
                std::cout << "The result is: " << result  << '\n';
                break;

            case '/':
                result = number1 / number2;
                std::cout << "The result is: " << result << '\n';
                break;

            default:
                std::cout << "Error: Something went wrong!";
    }
}


int main()
{

    std::cout << "Welcome to the first CPP Calculator 2023! MagicMike special edition!\n";

    char calcoperator {getCalcOperator()};
    float number1 {getNumber1()};
    float number2 {getNumber2()};
    calcMagic(number1, number2, calcoperator);

    return 0;
}
