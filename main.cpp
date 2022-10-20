/*
Author: Ashlee Tolentino
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab7

This program unindents and correctly indents source code files.
*/

#include <iostream>
#include <string>
#include <cctype>
#include "unindent.h"
#include "indent.h"

int main()
{
  std::cout << "\nremoveLeadingSpaces(\"       int x = 1;  \");\n" << std::endl;
  
  std::string result = removeLeadingSpaces("       int x = 1;  ");
  std::cout << result << std::endl;

  std::cout << "\n-----------------------------\n\ncountChar(\"int main(){{{\", '{');\n" << std::endl;

  int result3 = countChar("int main(){{{", '{');
  std::cout << result3 << std::endl;

  std::cout << "\n-----------------------------\n\nINDENTED FILE\n" << std::endl;

  indent();

  return 0;
}
