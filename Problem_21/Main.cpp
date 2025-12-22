#include <iostream> 
#include <cstdlib> 
 
using namespace std; 
 
int RandomNumber(int From, int To) 
{ 
  
int RandNum = rand() % (To - From + 1) + From;
 
 return RandNum; 
} 
 
enum enCharTayp { SmallLetter = 1, CapitalLetter = 2, SpecialCharacter = 
3, Digit = 4 }; 
 
char GetRandomCharacter(enCharTayp CharType) 
{ 
 switch (CharType) 
 { 
 
 case enCharTayp::SmallLetter: 
 { 
  return char(RandomNumber(97, 122)); 
  break; 
 } 
 
 case enCharTayp::CapitalLetter: 
 { 
  return char(RandomNumber(65, 90)); 
  break; 
 } 
 
 case enCharTayp::SpecialCharacter: 
 { 
  return char(RandomNumber(33, 47)); 
  break; 
 } 
 
 case enCharTayp::Digit: 
 { 
  return char(RandomNumber(48, 57)); 
  break; 
 } 
 
 } 
} 
 

int ReadPositiveNumber(string Message) 
{ 
 int Number; 
 do 
 { 
  cout << Message << endl; 
  cin >> Number; 
 } while (Number < 0); 
 
 return Number; 
} 
 
 
string GenerateWord(enCharTayp CharType, short Length) 
{ 
string Word; 
for (int i = 1; i <= Length; i++)  
{ 
Word += GetRandomCharacter(CharType); 
} 
return Word; 
} 

string GenerateKey() 
{ 
string Key = ""; 
Key = GenerateWord(enCharTayp::CapitalLetter, 4) + "-"; 
Key = Key + GenerateWord(enCharTayp::CapitalLetter, 4) + "-"; 
Key = Key + GenerateWord(enCharTayp::CapitalLetter, 4) + "-"; 
Key = Key + GenerateWord(enCharTayp::CapitalLetter, 4); 

return Key; 
} 

void GenerateKeys(short NumberOfKeys) 
{ 
for (int i = 1; i <= NumberOfKeys; i++) 
{ 
cout << "Kay [" << i << "] : " << GenerateKey() << endl; 
} 
} 

int main() 
{ 
srand((unsigned)time(NULL)); 

GenerateKeys(ReadPositiveNumber("Pleas enter how many keys to 
generate ?"))
}