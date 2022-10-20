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
