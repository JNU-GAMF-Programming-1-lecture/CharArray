/*
 * CharArray.cpp
 *
 * Working with character arrays.
 *
 */

#include <iostream>
#include <string.h>  // For string handling functions like strlen, strcpy_s, etc.
#include <iomanip>   // For formatting output (like setw for width control)

using namespace std;

int main()
{
  // Initializing two character arrays (C-style strings)
  char s[15] = "Hello World!";  // String literal stored in s
  char z[15] = { 'H','e','l','l','o',' ',
      'W','o','r','l','d','!','\0' }; // Manually initialized array with each character and null-terminator

  // Loop to compare both arrays character by character
  for (int i = 0; i < 15; i++)
  {
    // Convert characters to their ASCII integer values
    int a = int(s[i]);
    int b = int(z[i]);

    // Output comparison of arrays s and z with ASCII values and characters
    cout << "s[" << setw(2) << i << "]= " << setw(3) << a
      << (a == 0 ? " ( '" : " ('") << s[i] << "') ";  // Conditional ternary operator to handle null char
    cout << "z[" << setw(2) << i << "]= " << setw(3) << b
      << (b == 0 ? " ( '" : " ('") << z[i] << "')\n";
  }

  // Asking user to input a first name
  char firstname[50];
  cout << "\nEnter a first name: ";
  cin.getline(firstname, 50);  // Read input into firstname

  // Output the length of the input first name using strlen
  cout << "The length of the first name " << firstname
    << " is " << strlen(firstname) << " characters" << endl
    << endl;

  // Copy "John" into the firstname array using strcpy_s
  strcpy_s(firstname, "John");
  cout << left << setw(13) << "First name: " << firstname << endl;

  // Initialize middlename and lastname arrays
  char middlename[50] = "Benjamin";
  cout << setw(13) << "Middle name: " << middlename << endl;
  char lastname[50] = "Smith";
  cout << setw(13) << "Last name: " << lastname << endl;

  // Create a fullname array and concatenate firstname, middlename, and lastname
  char fullname[150] = "";
  strcat_s(fullname, firstname);
  strcat_s(fullname, " ");
  strcat_s(fullname, middlename);
  strcat_s(fullname, " ");
  strcat_s(fullname, lastname);
  cout << setw(13) << "Full name: " << fullname << endl << endl;

  // Search for the first occurrence of character 'h' in fullname using strchr
  char c = 'h';
  cout << "The substring of the full name starting with "
    << "the first occurrence of the character " << "'"
    << c << "'" << " is " << "\"" << strchr(fullname, c)
    << "\"\n\n";

  // Working with another string for demonstration
  char v[] = "C++ is a general purpose computer programming language.";
  cout << v << endl;

  // Find the first occurrence of the substring "is a" in the string v using strstr
  char ss[] = "is a";
  cout << "The substring starting with the first "
    << "occurrence of the string " << "\"" << ss << "\""
    << " is " << "\"" << strstr(v, ss) << "\"\n\n";

  // Compare two strings using strcmp (lexicographical comparison)
  cout << "strcmp(\"Amelia\",\"Ava\"))   ="
    << strcmp("Amelia", "Ava") << " m: " << int('m') << " v:" << int('v') << endl;

  // Compare two identical strings
  cout << "strcmp(\"" << "John" << "\",  \"John\"))  =   "
    << strcmp("John", "John") << endl;

  // Compare two different strings in reverse order
  cout << "strcmp(\"Ava\",   \"Amelia\"))= "
    << strcmp("Ava", "Amelia") << " v: " << int('v') << " m:" << int('m') << endl
    << endl;

  return 0;
}

