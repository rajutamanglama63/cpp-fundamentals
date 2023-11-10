#include <iostream>

// -------------Luhn Algorithm---------------
// 1. Double every second number from right to left. If doubled number is 2 digits, split them
// 2. Add all single digits from step 1
// 3. Add all odd numbered digits from right to left
// 4. Sum results from steps 2 and 3
// 5. If step 4 is divisible by 10, then number is valid

int getDigit(const int number);
int sumOddDigit(const std::string cardNumber);
int sumEvenDigit(const std::string cardNumber);

int main()
{

    std::string cardNum;
    int result = 0;

    std::cout << "Enter a card number: ";
    std::cin >> cardNum;

    result = sumEvenDigit(cardNum) + sumOddDigit(cardNum);

    if (result % 10 == 0)
    {
        std::cout << cardNum << " is valid" << std::endl;
    }
    else
    {
        std::cout << cardNum << " in not valid" << std::endl;
    }

    return 0;
}

int getDigit(const int number)
{
    return number % 10 + (number / 10 % 10);
}

int sumOddDigit(const std::string cardNumber)
{
    int sum = 0;

    for (int i = cardNumber.size() - 1; i >= 0; i -= 2)
    {
        sum += cardNumber[i] - '0';
    }

    return sum;
}

int sumEvenDigit(const std::string cardNumber)
{
    int sum = 0;

    for (int i = cardNumber.size() - 2; i >= 0; i -= 2)
    {
        sum += getDigit((cardNumber[i] - '0') * 2);
    }

    return sum;
}