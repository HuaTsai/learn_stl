cmake_minimum_required(VERSION 2.8)
project(learn_stl)
set(CMAKE_CXX_STANDARD 11)

file(GLOB_RECURSE ALL_SRCS "*.cc")
foreach(FILE_PATH ${ALL_SRCS})
  get_filename_component(DIRECTORY_PATH ${FILE_PATH} PATH)
  get_filename_component(DIRECTORY_NAME ${DIRECTORY_PATH} NAME)
  get_filename_component(FILENAME ${FILE_PATH} NAME_WE)
  set(EXEC "${DIRECTORY_NAME}${FILENAME}")
  add_executable(${EXEC} ${FILE_PATH})
endforeach(FILE_PATH)

target_link_libraries(ch5sharedptr3 rt)