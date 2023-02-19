#include <iostream>
#include <limits>

//UserInput Seitenlänge Quadrats (a)
//fläche f = a * a;
//umfang u = 4 * a;

void ignoreLine()
{
std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

float getUserInput()
{
    float qLength;


    while(true)
    {

    std::cout << "Geben Sie die laenge des Quadrats ein.\n";
    std::cin >> qLength;

    if (!std::cin)
    {
    std::cin.clear();
    ignoreLine();
    std::cout << "Invalid Input!\n";
    }
    else
    {
        ignoreLine();
        return qLength;
    }
    }
}

float getArea(float mInput)
{
float area = mInput * mInput;
std::cout<< "The area is: " << area << "qm2\n";
return area;
}

float getVolume(float mInput)
{
    float volume = 4 * mInput;
    std::cout << "The volume is: " << volume << '\n';
    return volume;
}

int main()
{
    float mInput{getUserInput()};
    getArea(mInput);
    getVolume(mInput);
    return 0;
}
