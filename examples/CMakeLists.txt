#---Automatically Generated from template 'CMakeList.txt' wrote by @aliben---
#
# @Copyright (C) 2018 All rights reserved.
# @filename: unix_programming
# @author: aliben.develop@gmail.com
# @create_date: 2018-11-13 16:21:33
# @last_modified_date: 2018-11-13 16:55:11
# @description: TODO
#---****************************************************************---


FILE(GLOB EXAMPLES *.cc)
FOREACH(EXAMPLE ${EXAMPLES})
  GET_FILENAME_COMPONENT(MY_TARGET "${EXAMPLE}" NAME_WE)
  ADD_EXECUTABLE(${MY_TARGET} ${EXAMPLE})
  TARGET_LINK_LIBRARIES(${MY_TARGET} unix_programming)
ENDFOREACH()
