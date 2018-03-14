#include <iostream>

int main()
{
    float C,F;
    int choice;
    std::cout<<"Hi, if You want to change : \n"
               "Celsius to Fahrenheit press 1\n"
               "Fahrenheit to Celsius press 2"<<std::endl;
    std::cin>>choice;

    switch(choice)
    {
    case 1:
        std::cout<<"Enter temperature in Celsius: ";
        std::cin>>C;
        F=(C*9)/5+32;
        std::cout<<"Temperature in Fahrenheit is: "<<F<<std::endl;
        break;
    case 2:
        std::cout<<"Enter temperature in Fahrenheit: ";
        std::cin>>F;
        C=5*(F-32)/9;
        std::cout<<"Temperature in Celsius is: "<<C<<std::endl;
        break;

    }








    return 0;
}
