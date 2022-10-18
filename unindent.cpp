/*
Author: Ashlee Tolentino
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab7

This program contains a function that removes leading spaces and tabs in a line of code.
*/

#include <iostream>
#include <string>
#include <cctype>
#include "unindent.h"

//This function takes one line of code as input and returns its copy without leading spaces and tabs
std::string removeLeadingSpaces(std::string line)
{
  std::string result = "";
  for(int i = 0; i < line.length(); i++)
  {
    char c = line[i];
    if(!(isspace(c)))
    {
      result += line.substr(i);
      break;
    }
  }

  return result;
}
