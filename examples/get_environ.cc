/**
  * @Copyright (C) 2018 All rights reserved.
  * @date: 2018
  * @file: get_environ.cc
  * @version: v0.0.1
  * @author: aliben.develop@gmail.com
  * @create_date: 2018-11-13 16:42:29
  * @last_modified_date: 2018-11-13 16:49:02
  * @brief: TODO
  * @details: TODO
  */

//INCLUDE
#include <iostream>

extern char** environ;
//CODE
int main(int argc, char** argv)
{
  char** ep;
  for(ep = environ; *ep != nullptr; ep++)
  {
    std::cout << *ep << std::endl;
  }
  return 0;
}
