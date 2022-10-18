/*
Author: Ashlee Tolentino
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab7

This program...
*/

#include <iostream>
#include <string>
#include <cctype>
#include "unindent.h"

int main()
{
  std::string result = removeLeadingSpaces("       int x = 1;  ");
  std::cout << result << std::endl;


  
  return 0;
}
