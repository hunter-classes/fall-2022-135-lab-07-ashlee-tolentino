/*
Author: Ashlee Tolentino
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab7

This program contains a function that scans the line and returns the number of occurrences of the character c.
*/

#include <iostream>
#include <string>
#include <cctype>
#include "indent.h"
#include "unindent.h"

// This function scans the line and returns the number of occurrences of the character c
int countChar(std::string line, char c)
{
  int result = 0;
  for(int i = 0; i < line.length(); i++)
  {
    if(line[i] == c)
    {
      result++;
    }
  }
  
  return result;
}

void indent()
{
  std::string lines2;
  int numTabs = 0;

  // puts all lines of input file into string variable lines2
  while (std::getline(std::cin, lines2))
  {
    if(countChar(lines2, '}') == 1)
    {
      numTabs--;
    }
    
    std::string result2 = removeLeadingSpaces(lines2);
    
    for(int i = 0; i < numTabs; i++)
    {
      std::cout << "\t";
    }
    std::cout << result2 << std::endl;
    
    if(countChar(lines2, '{') == 1)
    {
      numTabs++;
    }
  }
}
