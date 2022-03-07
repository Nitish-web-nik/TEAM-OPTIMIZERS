#include <iostream>
#include <cmath>
using namespace std;

int decimalToHex(int decimalNumber);

int main()
{
   int decimalNumber;
   cout << "Enter a decimal number: ";
   cin >> decimalNumber;
   cout << decimalNumber << " in decimal = " << decimalToHex(decimalNumber) << " in Hexadecimal";

   return 0;
}

// Function to convert decimal number to octal
int decimalToHex(int decimalNumber)
{
    int rem, i = 1, Hex_Number = 0;
    while (decimalNumber != 0)
    {
        rem = decimalNumber % 16;
        decimalNumber /= 16;
        Hex_Number += rem * i;
        i *= 10;
    }
    return Hex_Number;
}
