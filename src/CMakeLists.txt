#---Automatically Generated from template 'CMakeList.txt' wrote by @aliben---
#
# @Copyright (C) 2018 All rights reserved.
# @filename: unix_programming
# @author: aliben.develop@gmail.com
# @create_date: 2018-11-13 16:21:33
# @last_modified_date: NO_LAST_MODIFIED_DATE
# @description: TODO
#---****************************************************************---

FILE(GLOB TYPES_HEADERS
  ../include/unix_programming/*/*.h*
  ../include/unix_programming/*.h*
  )
FILE(GLOB SOURCES *.cc)

ADD_LIBRARY(unix_programming SHARED ${TYPES_HEADERS} ${SOURCES})
TARGET_LINK_LIBRARIES(unix_programming ${THIRD_PARTY_LIBS})
