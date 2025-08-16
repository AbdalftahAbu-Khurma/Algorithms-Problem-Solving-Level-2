#include <iostream>
#include <cstdlib>
using namespace std;

int RandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

enum enCharType { SmallLetter = 1, CapitalLetter, SpecialCharacter, Digit };

char GetRandomCharacter(enCharType CharType)
{
    switch (CharType)
    {

    case enCharType::SmallLetter:
    {
        return char(RandomNumber(97, 122)); // char( 110 ) = n 
        break;
    }

    case enCharType::CapitalLetter:
    {
        return char(RandomNumber(65, 90));
        break;
    }

    case enCharType::SpecialCharacter:
    {
        return char(RandomNumber(33, 47));
        break;
    }

    case enCharType::Digit:
    {
        return char(RandomNumber(48, 57));
        break;
    }

    }
}
int main() {
    srand((unsigned)time(NULL));
    cout << GetRandomCharacter(SmallLetter) << endl;
    cout << GetRandomCharacter(CapitalLetter) << endl;
    cout << GetRandomCharacter(SpecialCharacter) << endl;
    cout << GetRandomCharacter(Digit) << endl;
    return 0;
}
