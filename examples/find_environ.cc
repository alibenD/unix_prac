/**
  * @Copyright (C) 2018 All rights reserved.
  * @date: 2018
  * @file: find_environ.cc
  * @version: v0.0.1
  * @author: aliben.develop@gmail.com
  * @create_date: 2018-11-13 16:51:14
  * @last_modified_date: 2018-11-13 16:54:28
  * @brief: TODO
  * @details: TODO
  */

//INCLUDE
#include <iostream>
#include <stdlib.h>

//CODE
int main(int argc, char** argv)
{
  auto ptr_env = getenv("PATH");
  std::cout << *ptr_env << std::endl;
  return 0;
}
