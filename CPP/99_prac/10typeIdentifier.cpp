#include <cctype>
using namespace std;

int main()
{
  char myChar0 = 'A';
  if (isalpha(myChar0))
  {
    // This will execute since 'A' is an alphabetic character.
  }

  char myChar1 = '7';
  if (isdigit(myChar1))
  {
    // This will execute since '7' is a digit.
  }

  char myChar2 = '!';
  if (isalnum(myChar2))
  {
    // This will not execute since '!' is not alphanumeric.
  }

  char myChar3 = ' ';
  if (isspace(myChar3))
  {
    // This will execute since ' ' is a whitespace character.
  }

  char myChar4 = 'a';
  if (islower(myChar4))
  {
    // This will execute since 'a' is lowercase.
  }

  char myChar5 = 'A';
  char lowercaseChar = tolower(myChar5); // lowercaseChar will be 'a'

  if (isalpha('A'))
  {
    // This will execute since 'A' is an alphabetic character.
  }
}