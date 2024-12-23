#include <iostream>

// Калькулятор двух чисел

class Calculator
{
public:
    double num1;
    double num2;

    // метод должен установить значение поля num1 равное значению аргумента num1 в случае, если значеyние
    // аргумента не равно 0. Возвращает true, если установка произошла успешно, в обратном случае false
    bool set_num1(double num)
    {
        if (num || 0)
        {
            this->num1 = num;
            return true;
        }
        else
            
            return false;
    }

    // метод должен установить значение поля num2 равное значению аргумента num2 в случае, если значение
    // аргумента не равно 0. Возвращает true, если установка произошла успешно, в обратном случае false
    bool set_num2(double num)
    {
        if (num || 0)
        {
            this->num2 = num;
            return true;
        }
        else
            // std::cout << "Incorrect enter! Please try again." << std::endl;
            return false;
    }
    
    // метод возвращает результат сложения num1 и num2
    double add(double n1, double n2)
    {
        double sum = n1 + n2;
        return sum;
    }

    // метод возвращает результат перемножения num1 и num2
    double multiply(double num1, double num2)
    {
        double multiply = num1 * num2;
        return multiply;
     }
   
    // метод возвращает результат вычитания num1 из num2
    double subtract_1_2(double num1, double num2)
    {
        double subtract_1_2 = num1 - num2;
        return subtract_1_2;
    }
    
    // метод возвращает результат вычитания num1 из num2
    double subtract_2_1(double num1, double num2)
    {
        double subtract_2_1 = num2 - num1;
        return subtract_2_1;
    }
    // метод возвращает результат деления num1 на num2
    double divide_1_2(double num1, double num2)
    {
        double divide_1_2 = num1 / num2;
        return divide_1_2;
    }

    // метод возвращает результат деления num2 на num1
    double divide_2_1(double num1, double num2)
    {
        double divide_2_1 = num2 / num1;
        return divide_2_1;
    }
    
};

int main()
{
    double n1;
    double n2;
    Calculator number;

    do
    {
        std::cout << "PLease enter number 1: " << std::endl;
        std::cin >> n1;

        std::cout << "PLease enter number 2: " << std::endl;
        std::cin >> n2;

        number.set_num1(n1);
        number.set_num2(n2);

        if (!(number.set_num1(n1)) || !(number.set_num2(n2)))
        {
            std::cout << "Incorrect enter! Please try again." << std::endl;
            std::cout << "\n\n";
            continue;
        }
        else
        {
            std::cout << "Number 1 + Number 2 = " << number.add(number.num1, number.num2) << std::endl;
            std::cout << "Number 1 * Number 2 = " << number.multiply(number.num1, number.num2) << std::endl;
            std::cout << "Number 1 - Number 2 = " << number.subtract_1_2(number.num1, number.num2) << std::endl;
            std::cout << "Number 2 - Number 1 = " << number.subtract_2_1(number.num1, number.num2) << std::endl;
            std::cout << "Number 1 / Number 2 = " << number.divide_1_2(number.num1, number.num2) << std::endl;
            std::cout << "Number 2 / Number 1 = " << number.divide_2_1(number.num1, number.num2) << std::endl;
            std::cout << "\n\n";
        }

    } while (true);

 return 0;
}