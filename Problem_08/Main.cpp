#include <iostream>
using namespace std;
 
int ReadPositiveNumber(string Message) {
    int Number = 0;
    do {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}
 
int CountDigitFrequency(int Number, short DigitToCheck) {
    int Remainder = 0;
    short FreqCount = 0;
    while (Number > 0) {
        Remainder = Number % 10;
        Number = Number / 10;
        if (DigitToCheck == Remainder) {
            FreqCount++;
        }
    }
    return FreqCount;
}
 
int main() {
    int Number = ReadPositiveNumber("Please enter the main Number: ");
    short DigitToCheck = ReadPositiveNumber("Please enter one digit to check: ");
    cout << "\n Digit " << DigitToCheck << " Frequency is "
         << CountDigitFrequency(Number, DigitToCheck) << " Time(s). \n";
    return 0;
}